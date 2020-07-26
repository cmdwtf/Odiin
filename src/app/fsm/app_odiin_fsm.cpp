#include "app_odiin_fsm.h"

#include "nrf_log.h"

#include "app/app_settings.h"
#include "display/screen_ui/display_screen_ui.h"
#include "global/global_strings.h"
#include "input/input_keypad.h"

#define LOG_STATE_ENTER(state) NRF_LOG_INFO("[State] => Enter: %s", #state)
#define LOG_STATE_EXIT(state) NRF_LOG_INFO("[State] Exit: %s =>", #state)

namespace App
{
	namespace Fsm
	{
		//////////////////////////////////////////////////////////////////////////
		// State forward declarations
		class Boot;
		class MainMenu;
		class NfctActive;
		class UsbConnected;

		//////////////////////////////////////////////////////////////////////////
		// States

		class Boot
			: public OdiinState
		{
			void entry() override
			{
				LOG_STATE_ENTER(Boot);
				UI_CREATE(boot);
				UI_ACTIVATE(boot, Keypad->GetInputGroup());
				UI_FUNCTION(boot, set_timeout)([](lv_task_t*){
					BootScreenTimeoutEvent timeout;
					dispatch(timeout);
				}, BOOT_SCREEN_TIMEOUT_MS);
			}

			void react(BootScreenTimeoutEvent const &) override
			{
				transit<MainMenu>();
			}

			void exit() override
			{
				LOG_STATE_EXIT(Boot);
			}
		};

		class MainMenu
			: public OdiinState
		{
			void entry() override
			{
				LOG_STATE_ENTER(MainMenu);
				UI_CREATE(main_menu);
				UI_ACTIVATE(main_menu, Keypad->GetInputGroup());
			}

			void exit() override
			{
				LOG_STATE_EXIT(MainMenu);
			}
		};

		class NfctActive
			: public OdiinState
		{
			void entry() override
			{
				LOG_STATE_ENTER(NfctActive);
				UI_CREATE(nfct_active);
				UI_ACTIVATE(nfct_active, Keypad->GetInputGroup());
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
		};
		//////////////////////////////////////////////////////////////////////////
		// Base state: default implementations

		void OdiinState::react(::tinyfsm::Event const &) { }
		void OdiinState::react(BootScreenTimeoutEvent const &) { }

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
				transit<MainMenu>();
			}
		}

		void OdiinState::entry() { }
		void OdiinState::exit() { }

		Input::Keypad* OdiinState::Keypad = nullptr;

	} // namespace Fsm

} // namespace App

//////////////////////////////////////////////////////////////////////////
// Initial state definition
FSM_INITIAL_STATE(App::Fsm::OdiinState, App::Fsm::Boot)
