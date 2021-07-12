#include "app_odiin_fsm.h"

#include "app/app_odiin.h"
#include "app_fsm_states.h"
#include "display/screen_ui/display_screen_ui.h"
#include "input/input_keypad.h"
#include "app_fsm_state_menu_main.hpp"
#include "app_fsm_state_menu_files.hpp"

namespace app::fsm
{
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
