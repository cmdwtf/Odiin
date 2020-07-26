#include "app_odiin_fsm.h"

#include "nrf_log.h"

#include "app/app_settings.h"
#include "display/screen_ui/display_screen_ui.h"
#include "global/global_strings.h"
#include "input/input_keypad.h"
#include "app_odiin_state_menus.h"

#define LOG_STATE_ENTER(state) NRF_LOG_INFO("[State] => Enter: %s", #state)
#define LOG_STATE_EXIT(state) NRF_LOG_INFO("[State] Exit: %s =>", #state)

namespace App
{
	namespace Fsm
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
				transit<MenuMain>();
			}

			void exit() override
			{
				LOG_STATE_EXIT(Boot);
			}
		};

		template<size_t OPT_COUNT_MAX, size_t OPTION_STR_LEN>
		class MenuBase
			: public OdiinState
		{
		protected:
			MenuBase()
			{
				// line up pointers for ease of use.
				for (size_t scan = 0; scan < OPT_COUNT_MAX; ++scan)
				{
					menuStrings[scan] = menuStringsData[scan];
					menuOptions[scan].option = menuStrings[scan];
				}
			}
			static constexpr size_t MENU_OPTIONS_LENGTH = OPT_COUNT_MAX;
			static constexpr size_t MENU_OPTION_STRING_LENGTH = OPTION_STR_LEN;
			menu_option_desc_t menuOptions[OPT_COUNT_MAX];
			char menuStringsData[OPT_COUNT_MAX][OPTION_STR_LEN];
			char* menuStrings[OPT_COUNT_MAX];
			size_t menuOptionCount = 0;
		};

		class MenuMain
			: public MenuBase<8, 24>
		{
			void entry() override
			{
				LOG_STATE_ENTER(MenuMain);
				menuOptionCount = CreateMainMenuOptions(menuOptions, MENU_OPTIONS_LENGTH,
					menuStrings, MENU_OPTION_STRING_LENGTH);
				UI_FUNCTION(list_menu, set_options)(menuOptions, menuOptionCount);
				UI_FUNCTION(list_menu, set_title)(PRODUCT_NAME_LONG);
				UI_CREATE(list_menu);
				UI_ACTIVATE(list_menu, Keypad->GetInputGroup());
			}

			void exit() override
			{
				LOG_STATE_EXIT(MenuMain);
			}
		};

		class MenuFiles
			: public MenuBase<64, 32>
		{
			void entry() override
			{
				LOG_STATE_ENTER(MenuFiles);
				const char* path = Files::SdCard::RootDirectory;
				menuOptionCount = AppendDirectoryMenu(path,
					menuOptions, MENU_OPTIONS_LENGTH,
					menuStrings, MENU_OPTION_STRING_LENGTH);
				UI_FUNCTION(list_menu, set_options)(menuOptions, menuOptionCount);
				UI_FUNCTION(list_menu, set_title)(path);
				UI_CREATE(list_menu);
				UI_ACTIVATE(list_menu, Keypad->GetInputGroup());
			}

			void exit() override
			{
				LOG_STATE_EXIT(MenuFiles);
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
				transit<MenuMain>();
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
