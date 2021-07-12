#pragma once

#include "nrf_assert.h"

#include "app_fsm_state_menu_base.hpp"
#include "app_fsm_state_menu_files.hpp"
#include "display/screen_ui/display_screen_ui.h"

namespace app::fsm
{
	class MenuMain
		: public MenuBase<8, 24>
	{
		static const uint8_t NEXT_STATE_FILES = 1;
		static const uint8_t NEXT_STATE_SETTINGS = 2;
		static const uint8_t NEXT_STATE_ABOUT = 3;
		static const uint8_t NEXT_STATE_REBOOT = 4;
		static const uint8_t NEXT_STATE_POWEROFF = 5;

		size_t CreateOptions(menu_option_desc_t* output, size_t outputLength, char** stringBuffers, size_t stringBufferLength)
		{
			ASSERT(outputLength >= 4)

			size_t index = 0;

			output[index].option = "Load Payload";
			output[index].prefix = LV_SYMBOL_SD_CARD;
			output[index].click_cb = MenuOptionPressedCallback;
			output[index].user_flags = NEXT_STATE_FILES;
			++index;

			output[index].option = "Settings";
			output[index].prefix = LV_SYMBOL_SETTINGS;
			output[index].click_cb = MenuOptionPressedCallback;
			output[index].user_flags = NEXT_STATE_SETTINGS;
			++index;

			output[index].option = "About";
			output[index].prefix = LV_SYMBOL_KEYBOARD;
			output[index].click_cb = MenuOptionPressedCallback;
			output[index].user_flags = NEXT_STATE_ABOUT;
			++index;

			output[index].option = "Reboot";
			output[index].prefix = LV_SYMBOL_REFRESH;
			output[index].click_cb = MenuOptionPressedCallback;
			output[index].user_flags = NEXT_STATE_REBOOT;
			++index;

			output[index].option = "Power Off";
			output[index].prefix = LV_SYMBOL_POWER;
			output[index].click_cb = MenuOptionPressedCallback;
			output[index].user_flags = NEXT_STATE_POWEROFF;
			++index;

			return index;
		}

		void entry() override
		{
			LOG_STATE_ENTER(MenuMain);

			Led->SetModeMenu();

			UI_CREATE(list_menu);
			UI_ACTIVATE(list_menu, Keypad->GetInputGroup());

			menuOptionCount = CreateOptions(menuOptions, MENU_OPTIONS_LENGTH,
											menuStrings, MENU_OPTION_STRING_LENGTH);

			UI_FUNCTION(list_menu, set_options)
			(menuOptions, menuOptionCount);
			UI_FUNCTION(list_menu, set_title)
			(PRODUCT_NAME_LONG);
		}

		void exit() override
		{
			LOG_STATE_EXIT(MenuMain);
		}

		void react(MenuOptionPressedEvent const& event) override
		{
			switch (event.Option->user_flags)
			{
			case NEXT_STATE_FILES:
				state<MenuFiles>().SetFileSelectedCallback([](const char* path)
														   {
															   // set the payload
															   Odiin->SetNfcTagPayload(path);
														   });
				transit<MenuFiles>();
				break;
			case NEXT_STATE_SETTINGS:
				transit<Settings>();
				break;
			case NEXT_STATE_ABOUT:
				transit<About>();
				break;
			case NEXT_STATE_REBOOT:
				Odiin->Reboot();
				break;
			case NEXT_STATE_POWEROFF:
				Odiin->Sleep();
				break;
			}
		}
	};
} // namespace app::fsm
