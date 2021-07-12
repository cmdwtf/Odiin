#pragma once

#include <cstring>

#include "app/app_odiin.h"
#include "app_fsm_states.h"
#include "display/screen_ui/display_screen_ui.h"

namespace app::fsm
{
	template <size_t OPT_COUNT_MAX, size_t OPTION_STR_LEN>
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

	void MenuOptionPressedCallback(menu_option_desc_t* o, lv_group_t* group);
	void MenuOptionPressedCallbackNyi(menu_option_desc_t* o, lv_group_t* group) __attribute__((unused));
} // namespace app::fsm
