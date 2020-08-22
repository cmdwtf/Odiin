#include "app_odiin.h"

#include "app_error.h"
#include "app_timer.h"
#include "bsp.h"
#include "nrf_drv_clock.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#include "app_settings.h"
#include "crypto/crypto_shared.h"
#include "display/display_apa102.h"
#include "global/global_data.h"
#include "fsm/app_odiin_fsm.h"
#include "platform/platform_power.h"
#include "timer/timer.h"
#include "usb/usb.h"

namespace app
{
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
		screen->Update();
		statusPixel->Update(delta);

		ticksPrevious = ticksCurrent;

		// power update will handle our WFE/SEV
		platform_nrf52_power.update();
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

	// forward declarations of file-local functions
	namespace
	{
		void BspEventHandler(bsp_event_t event);
		bool ShutdownHandler(platform_power_event_t event);
	}

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
	}

	void Odiin::InitializeBsp()
	{
		uint32_t err_code;

		const uint32_t bspFlags = BSP_INIT_LEDS | BSP_INIT_BUTTONS;

		err_code = bsp_init(bspFlags, BspEventHandler);
		APP_ERROR_CHECK(err_code);
	}

	void Odiin::InitializePower()
	{
		platform_nrf52_power.event_handler = ShutdownHandler;
		platform_nrf52_power.initialize();
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
		StateMachine::Keypad = keypad;
	}

	void Odiin::InitializeScreen()
	{
		static display::Screen scr(keypad);
		screen = &scr;
	}

	void Odiin::InitializeLeds()
	{
#if defined(DISPLAY_APA102_ENABLED) && DISPLAY_APA102_ENABLED == 1
		static display::RgbLedColorBuffer<1> colors;
		colors.Brightness = 2;

		static display::RgbLeds status_pixel_apa102(&colors, &display_apa102);
		statusPixel = &status_pixel_apa102;
#else
		static display::RgbLeds null_led(nullptr, nullptr);
		statusPixel = &null_led;
#endif // DISPLAY_APA102_ENABLED
	}

	void Odiin::InitializeNfcTag()
	{
		static NfcTagEmulator tagEmu;
		nfcTagEmulator = &tagEmu;

		nfcTagEmulator->Initialize();
		nfcTagEmulator->SetPasswordAuthenticationAckResponse(
			SETTINGS.ntag_215_default_password_authentication_acknowledgement);
	}

	void Odiin::StartApplication()
	{
		// and then...
		// let's get down to business!
		// to defeat
		// the punssss.
		StateMachine::start();
	}

	bool Odiin::OnSleep()
	{
		return true;
	}

	bool Odiin::OnPowerOff()
	{
		return true;
	}

	bool Odiin::OnRebootToDfu()
	{
		return true;
	}

	bool Odiin::OnReboot()
	{
		return true;
	}

	namespace
	{
		void BspEventHandler(bsp_event_t event)
		{
			switch (event)
			{
				case BSP_EVENT_KEY_0:
					NRF_LOG_INFO("Board button pressed. No event handler yet.");
					break;
				default:
					NRF_LOG_DEBUG("[BSP] Unhandled event: %d", event);
					break;
			}
		}

		bool ShutdownHandler(platform_power_event_t event)
		{
			NRF_LOG_WARNING("ShutdownHandler Event: %d", event);

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
					return true;
			}
		}
	}

} // namespace app
