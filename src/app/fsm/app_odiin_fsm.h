#pragma once

#include "tinyfsm.hpp"

namespace app
{
	class Odiin;
	class StatusLed;
}

namespace input
{
	class Keypad;
}

typedef struct menu_option_desc_s menu_option_desc_t;

namespace app::fsm
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

		static void SetOdiin(app::Odiin* odiin);

	protected:
		static input::Keypad* Keypad;
		static app::Odiin* Odiin;
		static app::StatusLed* Led;
	};
} // namespace app::fsm
