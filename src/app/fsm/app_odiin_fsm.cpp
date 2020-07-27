#include "app_odiin_fsm.h"

#include <deque>
#include <string>
#include <sstream>

#include "nrf_assert.h"
#include "nrf_log.h"

#include "app/app_odiin.h"
#include "app/app_settings.h"
#include "display/screen_ui/display_screen_ui.h"
#include "files/sdcard.h"
#include "global/global_strings.h"
#include "input/input_keypad.h"
#include "nfc_tag_emulation/nxp_ntag21x_payloads.hpp"

namespace App::Fsm
{
	//////////////////////////////////////////////////////////////////////////
	// State forward declarations
	class Boot;

	template<size_t, size_t>
	class MenuBase;
	class MenuMain;
	class MenuFiles;

	class NfctActive;
	class UsbConnected;

	//////////////////////////////////////////////////////////////////////////
	// Include states broken out into their own files.
#include "app_odiin_state_menus.ii"

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
			App::Odiin::GetInstance()->SetNfcTagEnabled(true);
			LOG_STATE_ENTER(NfctActive);
			UI_CREATE(nfct_active);
			UI_ACTIVATE(nfct_active, Keypad->GetInputGroup());
			UI_FUNCTION(nfct_active, set_cancel_callback)([](lv_obj_t*, lv_event_t) {
				dispatch(NfctDeactivateEvent());
			});
		}

		void exit() override
		{
			App::Odiin::GetInstance()->SetNfcTagEnabled(false);
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
	//////////////////////////////////////////////////////////////////////////
	// Base state: default implementations

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

	Input::Keypad* OdiinState::Keypad = nullptr;
} // namespace App::Fsm

//////////////////////////////////////////////////////////////////////////
// Initial state definition
FSM_INITIAL_STATE(App::Fsm::OdiinState, App::Fsm::Boot)
