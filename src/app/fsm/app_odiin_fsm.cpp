#include "app_odiin_fsm.h"

#include "cwalk.h"
#include "nrf_assert.h"

#include "app/app_odiin.h"
#include "app/app_settings.h"
#include "display/screen_ui/display_screen_ui.h"
#include "files/files_fat32.h"
#include "global/global_strings.h"
#include "input/input_keypad.h"
#include "nfc/nxp/ntag21x/nxp_ntag21x.h"

#include "../app_log_module.ii"

#define LOG_STATE_ENTER(state) NRF_LOG_INFO("[State] => Enter: %s", #state)
#define LOG_STATE_EXIT(state) NRF_LOG_INFO("[State] Exit: %s =>", #state)

namespace app::fsm
{
	//////////////////////////////////////////////////////////////////////////
	// State forward declarations
	class Boot;

	template<size_t, size_t>
	class MenuBase;
	class MenuMain;
	class MenuFiles;

	class About;
	class NfctActive;
	class Settings;
	class UsbConnected;

	//////////////////////////////////////////////////////////////////////////
	// Include states broken out into their own files.
#define INCLUDING_FROM_FSM_CPP
#include "app_odiin_state_menus.cpp"
#undef INCLUDING_FROM_FSM_CPP

	//////////////////////////////////////////////////////////////////////////
	// States that don't have their own files

	class Boot
		: public OdiinState
	{
		void entry() override
		{
			LOG_STATE_ENTER(Boot);
			UI_CREATE(boot);
			UI_ACTIVATE(boot, Keypad->GetInputGroup());
			UI_FUNCTION(boot, set_timeout)([](lv_task_t*){
				dispatch(BootScreenTimeoutEvent());
			}, SETTINGS.boot_screen_timeout_ms);
		}

		void react(BootScreenTimeoutEvent const &) override
		{
			transit<MenuMain>();
		}

		void exit() override
		{
			LOG_STATE_EXIT(Boot);
		}
	};

	class NfctActive
		: public OdiinState
	{
		void entry() override
		{
			LOG_STATE_ENTER(NfctActive);

			// enable the nfct peripheral
			Odiin->SetNfcTagEnabled(true);

			Led->SetModeNfct();

			// setup the UI
			UI_CREATE(nfct_active);
			UI_ACTIVATE(nfct_active, Keypad->GetInputGroup());
			UI_FUNCTION(nfct_active, set_cancel_callback)([](lv_obj_t*, lv_event_t) {
				dispatch(NfctDeactivateEvent());
			});

			const char* baseName;
			size_t baseNameLength;
			cwk_path_get_basename(Odiin->GetActiveNfcTagPayloadFilename(), &baseName, &baseNameLength);
			UI_FUNCTION(nfct_active, set_title)(baseName);
		}

		void exit() override
		{
			Led->SetModeMenu();
			Odiin->SetNfcTagEnabled(false);
			LOG_STATE_EXIT(NfctActive);
		}

		void react(NfctDeactivateEvent const &) override
		{
			transit<MenuFiles>();
		}
	};

	class UsbConnected
		: public OdiinState
	{
		void entry() override
		{
			LOG_STATE_ENTER(UsbConnected);
			UI_CREATE(usb);
			UI_ACTIVATE(usb, Keypad->GetInputGroup());
		}

		void exit() override
		{
			LOG_STATE_EXIT(UsbConnected);
		}
	};

	class About
		: public OdiinState
	{
		void entry() override
		{
			LOG_STATE_ENTER(About);

			Led->SetModeFun();

			UI_CREATE(about);
			UI_ACTIVATE(about, Keypad->GetInputGroup());
			UI_FUNCTION(about, set_cancel_callback)([](lv_obj_t*, lv_event_t) {
				dispatch(GoHomeEvent());
			});
		}

		void exit() override
		{
			LOG_STATE_EXIT(About);
		}
	};

	class Settings
		: public OdiinState
	{
		void entry() override
		{
			LOG_STATE_ENTER(Settings);

			UI_CREATE(settings);
			UI_ACTIVATE(settings, Keypad->GetInputGroup());
			UI_FUNCTION(settings, set_done_callback)([]() {
				dispatch(GoHomeEvent());
			});
			UI_FUNCTION(settings, set_brightness_callback)([](float level) {
				Odiin->SetBacklightBrightness(level);
			});
		}

		void exit() override
		{
			Odiin->SaveSettings();
			LOG_STATE_EXIT(Settings);
		}
	};


	//////////////////////////////////////////////////////////////////////////
	// Base state: default implementations

	void OdiinState::SetOdiin(app::Odiin* odiin)
	{
		Odiin = odiin;
		Led = odiin->GetStatusLed();
		Keypad = odiin->GetKeypad();
	}

	void OdiinState::react(::tinyfsm::Event const &) { }
	void OdiinState::react(BootScreenTimeoutEvent const &) { }
	void OdiinState::react(MenuOptionPressedEvent const &) { }

	void OdiinState::react(UsbConnectionEvent const &e)
	{
		if (e.IsConnected)
		{
			// #todo: store current state to pop back to when we disable.
			transit<UsbConnected>();
		}
		else
		{
			// #todo: use stored state to pop back to instead of hardcoding main menu.
			transit<MenuMain>();
		}
	}

	void OdiinState::react(GoHomeEvent const &)
	{
		transit<MenuMain>();
	}

	void OdiinState::react(NfctActivateEvent const &)
	{
		transit<NfctActive>();
	}

	void OdiinState::react(NfctDeactivateEvent const &) { }

	void OdiinState::entry() { }
	void OdiinState::exit() { }

	input::Keypad* OdiinState::Keypad = nullptr;
	app::Odiin* OdiinState::Odiin = nullptr;
	app::StatusLed* OdiinState::Led = nullptr;
} // namespace app::fsm

//////////////////////////////////////////////////////////////////////////
// Initial state definition
FSM_INITIAL_STATE(app::fsm::OdiinState, app::fsm::Boot)
