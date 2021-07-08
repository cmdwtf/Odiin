#include "app_odiin.h"

#include "app_error.h"
#include "app_timer.h"
#include "nrf_drv_clock.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#include "app_settings.h"
#include "crypto/crypto_shared.h"
#include "global/global_data.h"
#include "fsm/app_odiin_fsm.h"
#include "platform/platform_battery.h"
#include "platform/platform_watchdog.h"
#include "timer/timer.h"
#include "usb/usb.h"

#include "app_log_module.ii"

APP_TIMER_DEF(app_odiin_1sec);

namespace app
{
	namespace
	{
		platform_power_driver_t& power = platform_power_nrf52;
		platform_battery_driver_t& battery = platform_battery_makerdiary;
		platform_watchdog_driver_t& watchdog = platform_watchdog_nrf52;

		// #todo: This code should be in a HAL.
		// magic values from UF2 bootloader (see bootloader's main.c)
		// GPREGRET and GPREGRET2 are general
		// purpose retention registers. They are
		// 1 byte each, and their value persists
		// through wakeups from SYSOFF. The bootloader
		// checks for these magic values.
		enum DfuMagic {
			OtaReset = 0xA8,
			SerialOnlyReset = 0x4E,
			Uf2Reset = 0x57,
			Skip = 0x6d,
		};
	}

	//////////////////////////////////////////////////////////////////////////
	// Public interface

	Odiin* Odiin::GetInstance()
	{
		static Odiin instance;
		return &instance;
	}

	files::Fat32* Odiin::GetSdCard()
	{
		return GetInstance()->sdCard;
	}

	Odiin::~Odiin()
	{

	}

	void Odiin::Update()
	{
		uint32_t ticksCurrent = timer_get_ticks();
		uint32_t ticksDelta = ticksCurrent - ticksPrevious;
		float delta = timer_ticks_to_seconds(ticksDelta);

		NRF_LOG_FLUSH();

		usb::device::Update();
		screen->Update(delta);
		statusLed->Update(delta);

		UpdateBattery();

		ticksPrevious = ticksCurrent;

		watchdog.feed();

		// power update will handle our WFE/SEV
		power.update();
	}

	void Odiin::SetNfcTagPayload(const char* filename)
	{
		if (nfcTagEmulator->IsEnabled())
		{
			NRF_LOG_ERROR("Cannot set payload while NFCT is enabled!");
			return;
		}

		files::Fat32File file;
		if (sdCard->FileOpen(file, filename, FA_READ) == false)
		{
			nfcTagEmulator->SetPayload(nullptr);
			memset(activeNfctFilename, 0, FF_MAX_LFN);
			NRF_LOG_WARNING("Failed to open `%s` to set payload data!", NRF_LOG_PUSH((char*)filename));
			// todo: dispatch an error event
		}

		size_t amountRead = 0;
		if (sdCard->FileRead(file, payload.GetRawTagMemory(), payload.TagMemoryCapacity, &amountRead))
		{
			// read successful. load it up and away we go!
			nfcTagEmulator->SetPayload(&payload);
			snprintf(activeNfctFilename, FF_MAX_LFN, "%s", filename);
			NRF_LOG_INFO("NFCT payload set to `%s`", NRF_LOG_PUSH(activeNfctFilename));
			SendEvent(app::fsm::NfctActivateEvent());
		}
		else
		{
			nfcTagEmulator->SetPayload(nullptr);
			memset(activeNfctFilename, 0, FF_MAX_LFN);
			NRF_LOG_WARNING("Failed to read `%s` to set payload data!", NRF_LOG_PUSH((char*)filename));
			// todo: dispatch an error event
		}
	}

	void Odiin::SetNfcTagEnabled(bool enabled)
	{
		if (enabled)
		{
			nfcTagEmulator->EnableTag();
		}
		else
		{
			nfcTagEmulator->DisableTag();
		}
	}

	const char* Odiin::GetActiveNfcTagPayloadFilename()
	{
		return activeNfctFilename;
	}

	//////////////////////////////////////////////////////////////////////////
	// Settings

	void Odiin::SetBacklightBrightness(float level)
	{
		if (level < 0.01f)
		{
			level = 0.01f;
		}

		SETTINGS.backlight_brightness = (uint8_t)(UINT8_MAX * level);
		screen->SetBacklightBrightness(level);
	}

	void Odiin::LoadSettings()
	{
		if (app::settings::Load(*flash))
		{
			NRF_LOG_INFO("Settings loaded!");
		}
		else
		{
			NRF_LOG_ERROR("Failed to load settings. Will try to save default settings.");
			SaveSettings();
		}
	}

	void Odiin::SaveSettings()
	{
		if (app::settings::Save(*flash))
		{
			NRF_LOG_INFO("Settings saved!");
		}
		else
		{
			NRF_LOG_ERROR("Failed to save settings. Is the flash device working?");
			// we probably should panic, but lets try to continue...
		}
	}

	//////////////////////////////////////////////////////////////////////////
	// USB Listener interface
	void Odiin::UsbWillEnable(app_usbd_event_type_t event)
	{
		app::fsm::UsbConnectionEvent uce = {
			.IsConnected = true
		};
		StateMachine::dispatch(uce);
	}

	void Odiin::UsbDidDisable(app_usbd_event_type_t event)
	{
		app::fsm::UsbConnectionEvent uce = {
			.IsConnected = false
		};
		StateMachine::dispatch(uce);
	}

	//////////////////////////////////////////////////////////////////////////
	// Private interface

	//////////////////////////////////////////////////////////////////////////
	// Application component initilization

	Odiin::Odiin()
	{
		NRF_LOG_RAW_INFO("=====================================\n");
		NRF_LOG_INFO("Odiin initializing...");

		InitializeLogs();
		InitializeClocks();
		InitializeTimers();
		InitializeBsp();
		InitializePower();
		InitializeFlash();
		LoadSettings();
		InitializeCrypto();
		InitializeUsbDevice();
		InitializeSdCard();
		InitializeInput();
		InitializeScreen();
		InitializeLeds();
		InitializeNfcTag();

		NRF_LOG_INFO("Odiin initialization complete " NRF_LOG_FLOAT_MARKER " seconds. Starting application.", NRF_LOG_FLOAT(timer_get_elapsed_seconds()));

		StartApplication();

		NRF_LOG_RAW_INFO("=====================================\n");

		// prevent a giant time delta on the first frame,
		// by initializing the timer to the current amount of ticks.
		ticksPrevious = timer_get_ticks();
	}

	void Odiin::InitializeLogs()
	{
		ret_code_t err_code = NRF_LOG_INIT(app_usbd_sof_timestamp_get);
		APP_ERROR_CHECK(err_code);

		NRF_LOG_DEFAULT_BACKENDS_INIT();
	}

	void Odiin::InitializeClocks()
	{
		// initialize nrf clock module. (calls nrfx_clock_init inside.)
		ret_code_t ret = nrf_drv_clock_init();
		APP_ERROR_CHECK(ret);
	}

	void Odiin::InitializeTimers()
	{
		ret_code_t err_code = app_timer_init();
		APP_ERROR_CHECK(err_code);

		// initialize the frame timer based on the rtc
		timer_initialize();
		timer_start();

		// initialize the 1-sec tick timer
		err_code = app_timer_create(&app_odiin_1sec,
									APP_TIMER_MODE_REPEATED,
									[](void* ctx){ ((app::Odiin*)ctx)->TimerTick1Sec(); });

		APP_ERROR_CHECK(err_code);
		constexpr uint32_t ticks1SecMs = 1000;
		constexpr uint32_t ticks1Sec = APP_TIMER_TICKS(ticks1SecMs);
		app_timer_start(app_odiin_1sec, ticks1Sec, this);

		// initialize the watchdog timer
		platform_watchdog_driver_config_t wdt_config;
		watchdog.initialize(&wdt_config);
		watchdog.enable();
	}

	void Odiin::InitializeBsp()
	{
		uint32_t err_code;

		const uint32_t bspFlags = BSP_INIT_LEDS | BSP_INIT_BUTTONS;

		err_code = bsp_init(bspFlags, Odiin::BspEventHandler);
		APP_ERROR_CHECK(err_code);
	}

	void Odiin::InitializePower()
	{
		power.event_handler = Odiin::ShutdownHandler;
		power.initialize();

		battery.initialize();
		// battery is initialized, we want to update at first chance
		forceUpdateBattery = true;
	}

	void Odiin::InitializeFlash()
	{
		static files::Littlefs fs;
		flash = &fs;
		if (flash->Mount() == false)
		{
			NRF_LOG_WARNING("Flash failed to mount!");
		}
	}

	void Odiin::InitializeCrypto() // crypto means cryptography
	{
		crypto::Initialize();
	}

	void Odiin::InitializeUsbDevice()
	{
		usb::device::Initialize();
		static usb::MassStorageClass msc;
		usbMassStorageClass = &msc;
		usbMassStorageClass->RegisterClass();
		usb::device::Enable();

		// We'd like to hear about USB events.
		usb::device::RegisterListener(this);
	}

	void Odiin::InitializeSdCard()
	{
		static files::Fat32 sdc;
		sdCard = &sdc;

		// we will go ahead and start mounted
		sdCard->Mount();

		// SDCARD will want to listen for USB events.
		usb::device::RegisterListener(sdCard);
	}

	void Odiin::InitializeInput()
	{
		static input::Keypad kp;
		keypad = &kp;
	}

	void Odiin::InitializeScreen()
	{
		float backlightBrightness = (SETTINGS.backlight_brightness / (float)UINT8_MAX);
		static display::Screen scr(keypad, backlightBrightness);
		screen = &scr;
	}

	void Odiin::InitializeLeds()
	{
		static StatusLed led;
		statusLed = &led;
		statusLed->SetModeBoot();
	}

	void Odiin::InitializeNfcTag()
	{
		static NfcTagEmulator tagEmu;
		nfcTagEmulator = &tagEmu;

		nfcTagEmulator->Initialize();
		nfcTagEmulator->SetPasswordAuthenticationAckResponse(
			SETTINGS.ntag_default_password_authentication_acknowledgement);
	}

	void Odiin::StartApplication()
	{
		// and then...
		// let's get down to business!
		// to defeat
		// the punssss.
		StateMachine::SetOdiin(this);
		StateMachine::start();
	}

	//////////////////////////////////////////////////////////////////////////
	// Timer Handlers
	void Odiin::TimerTick1Sec()
	{
		updateBattery = true;
	}

	//////////////////////////////////////////////////////////////////////////
	// Private Updaters

	void Odiin::UpdateBattery()
	{
		constexpr size_t SAMPLE_COUNT = 10;
		static uint32_t sample = 0;
		static uint8_t numSamples = 0;

		if (updateBattery || forceUpdateBattery)
		{
			updateBattery = false;

			battery.update();
			uint8_t percent = battery.get_battery_state_of_charge();
			sample += percent;
			numSamples++;

			platform_battery_state_t batteryState = battery.get_battery_state();
			bool newIsCharging = batteryState == PLATFORM_BATTERY_STATE_CHARGING;

			// did our charging status change? if so, force update!
			if (batteryIsCharging != newIsCharging)
			{
				forceUpdateBattery = true;
			}

			batteryIsCharging = newIsCharging;

			if (numSamples >= SAMPLE_COUNT || forceUpdateBattery)
			{
				forceUpdateBattery = false;

				// calculate the average by the number of samples we've taken.
				batteryStateOfCharge = (sample / numSamples);

#if defined(ODIIN_VERBOSE_LOGGING) && ODIIN_VERBOSE_LOGGING == 1
				uint16_t currentMilliVolts = battery.get_battery_voltage();
				const char* chargingText = "";

				switch (batteryState)
				{
					case PLATFORM_BATTERY_STATE_CHARGING:
						chargingText = "charging";
						break;
					case PLATFORM_BATTERY_CAN_CHARGE:
						chargingText = "charge possible";
						break;
					case PLATFORM_BATTERY_CAN_NOT_CHARGE:
						chargingText = "can't charge";
						break;
					case PLATFORM_BATTERY_CAN_CHARGE_UNKNOWN:
						chargingText = "unknown state";
						break;
				}

				NRF_LOG_VERBOSE("[Bat]: %d%% [%s] (%d mV)", average, chargingText, currentMilliVolts);
#endif // ODIIN_VERBOSE_LOGGING

				// reset samples
				numSamples = 0;
				sample = 0;

				// update ui
				screen->SetBatteryStatus(batteryStateOfCharge, batteryIsCharging);
			}
		}
	}

	//////////////////////////////////////////////////////////////////////////
	// Power Event Triggers

	void Odiin::Sleep()
	{
		power.shutdown(PLATFORM_POWER_SLEEP);
	}

	void Odiin::PowerOff()
	{
		power.shutdown(PLATFORM_POWER_OFF);
	}

	void Odiin::RebootToDfu()
	{
		power.shutdown(PLATFORM_POWER_DFU);
	}

	void Odiin::Reboot()
	{
		power.shutdown(PLATFORM_POWER_RESET);
	}


	//////////////////////////////////////////////////////////////////////////
	// Power Event Handlers

	bool Odiin::OnSleep()
	{
		NRF_LOG_WARNING("Device going to sleep.");
		screen->BacklightOffImmediate();
		screen->DisplaySleep();
		statusLed->SetModeShutdown();

		// tell the bootloader that we want to come right back to the app.
		NRF_POWER->GPREGRET = DfuMagic::Skip;

		return true;
	}

	bool Odiin::OnPowerOff()
	{
		NRF_LOG_WARNING("Device will power OFF!");
		return true;
	}

	bool Odiin::OnRebootToDfu()
	{
		NRF_LOG_WARNING("Device rebooting to DFU!");

		// tell the bootloader to boot into uf2 dfu mode
		NRF_POWER->GPREGRET = DfuMagic::Uf2Reset;

		return true;
	}

	bool Odiin::OnReboot()
	{
		NRF_LOG_WARNING("Device rebooting!");

		// tell the bootloader that we want to come right back to the app.
		NRF_POWER->GPREGRET = DfuMagic::Skip;
		return true;
	}

	void Odiin::BspEventHandler(bsp_event_t event)
	{
		switch (event)
		{
			// any key events (button presses) from
			// our regular buttons, we will feed
			// the power management. this resets
			// the sleep timer, and keeps the device active.
			case BSP_EVENT_KEY_0:
			case BSP_EVENT_KEY_1:
			case BSP_EVENT_KEY_2:
			case BSP_EVENT_KEY_3:
			case BSP_EVENT_KEY_4:
			case BSP_EVENT_KEY_5:
			case BSP_EVENT_KEY_6:
				power.feed();
				break;
			default:
				NRF_LOG_DEBUG("[BSP] Unhandled event: %d", event);
				break;
		}
	}

	bool Odiin::ShutdownHandler(platform_power_event_t event)
	{
		switch (event)
		{
			case PLATFORM_POWER_EVENT_PREPARE_WAKEUP:
				return Odiin::GetInstance()->OnSleep();
			case PLATFORM_POWER_EVENT_PREPARE_OFF:
				return Odiin::GetInstance()->OnPowerOff();
			case PLATFORM_POWER_EVENT_PREPARE_DFU:
				return Odiin::GetInstance()->OnRebootToDfu();
			case PLATFORM_POWER_EVENT_PREPARE_RESET:
				return Odiin::GetInstance()->OnReboot();
			default:
				NRF_LOG_WARNING("Unhandled shutdown event: %d", event);
				return true;
		}
	}
} // namespace app
