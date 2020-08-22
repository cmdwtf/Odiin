#include "input_hal.h"

#include "bsp.h"

namespace input
{
	namespace
	{
		bool HardwareButtonActive(uint32_t buttonId)
		{
			if (buttonId == BUTTON_NONE)
			{
				return false;
			}

			return bsp_button_is_pressed(buttonId);
		}

		static bool halInitialized = false;
	}

	map<lv_key_t, uint32_t> KeyMap = {
		{ LV_KEY_UP        , BUTTON_UP },
		{ LV_KEY_DOWN      , BUTTON_DOWN },
		{ LV_KEY_RIGHT     , BUTTON_RIGHT },
		{ LV_KEY_LEFT      , BUTTON_LEFT },
		{ LV_KEY_ESC       , BUTTON_NONE },
		{ LV_KEY_DEL       , BUTTON_NONE },
		{ LV_KEY_BACKSPACE , BUTTON_NONE },
		{ LV_KEY_ENTER     , BUTTON_CENTER },
		{ LV_KEY_NEXT      , BUTTON_DOWN },
		{ LV_KEY_PREV      , BUTTON_UP },
		{ LV_KEY_HOME      , BUTTON_NONE },
		{ LV_KEY_END       , BUTTON_NONE },
	};

	void InitializeHal()
	{
		if (halInitialized)
		{
			return;
		}

		// shouldn't need to configure pins,
		// as the BSP init should have taken care of things for us.

		halInitialized = true;
	}

	const bool KeyIsPressed(lv_key_t key)
	{
		// translate key to button
		auto it = KeyMap.find(key);
		if (it != KeyMap.end())
		{
			uint32_t button = it->second;
			return HardwareButtonActive(button);
		}

		// we don't have a mapping for that key, so it's not pressed.
		return false;
	}

	const lv_key_t GetPressedKey()
	{
		// loop through map, checking each pin. if any is pressed, return that.
		for (auto it = KeyMap.begin(); it != KeyMap.end(); ++it)
		{
			if (KeyIsPressed(it->first))
			{
				return it->first;
			}
		}

		// nothing was pressed!
		return LV_KEY_NONE;
	}
}
