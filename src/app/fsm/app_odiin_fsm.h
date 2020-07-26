#pragma once

#include "tinyfsm.hpp"

#include "app/app_odiin.h"

namespace App
{
	namespace Fsm
	{
		//////////////////////////////////////////////////////////////////////////
		// Events
		struct OdiinBaseEvent			: tinyfsm::Event { };
		struct ScreenChangeEvent	 	: OdiinBaseEvent { };
		struct BootScreenTimeout 	: ScreenChangeEvent { };

		//////////////////////////////////////////////////////////////////////////
		// State Machine
		class OdiinState
			: public ::tinyfsm::Fsm<OdiinState>
		{
		public:
			// unhandled event reaction
			void react(::tinyfsm::Event const &);

			virtual void react(BootScreenTimeout const &);

			virtual void entry();
			virtual void exit();

			static Input::Keypad* Keypad;
		};
	} // namespaceFSM
} // namespace App
