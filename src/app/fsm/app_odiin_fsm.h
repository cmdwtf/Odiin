#pragma once

#include "nrf_log.h"

#include "tinyfsm.hpp"

#include "input/input_keypad.h"
#include "display/screen_ui/display_screen_ui.h"

#define LOG_STATE_ENTER(state) NRF_LOG_INFO("[State] => Enter: %s", #state)
#define LOG_STATE_EXIT(state) NRF_LOG_INFO("[State] Exit: %s =>", #state)

namespace App::Fsm
{
	//////////////////////////////////////////////////////////////////////////
	// Events
	struct OdiinBaseEvent			: tinyfsm::Event { };
	struct ScreenChangeEvent	 	: OdiinBaseEvent { };
	struct BootScreenTimeoutEvent	: ScreenChangeEvent { };
	struct UsbConnectionEvent		: OdiinBaseEvent
	{
		bool IsConnected;
	};

	struct MenuOptionPressedEvent	: OdiinBaseEvent
	{
		menu_option_desc_t* Option;
	};

	struct GoHomeEvent				: ScreenChangeEvent { };
	struct NfctActivateEvent		: ScreenChangeEvent { };
	struct NfctDeactivateEvent		: ScreenChangeEvent { };

	//////////////////////////////////////////////////////////////////////////
	// State Machine
	class OdiinState
		: public ::tinyfsm::Fsm<OdiinState>
	{
	public:
		// unhandled event reaction
		void react(::tinyfsm::Event const &);

		virtual void react(BootScreenTimeoutEvent const &);
		virtual void react(MenuOptionPressedEvent const &);
		virtual void react(UsbConnectionEvent const &);
		virtual void react(GoHomeEvent const &);
		virtual void react(NfctActivateEvent const &);
		virtual void react(NfctDeactivateEvent const &);

		virtual void entry();
		virtual void exit();

		static input::Keypad* Keypad;
	};
} // namespace App::Fsm
