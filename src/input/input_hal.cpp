#include "input_hal.h"

namespace input
{
	namespace
	{
		constexpr nrf_gpio_pin_pull_t BUTTON_ACTIVE_PIN_GPIO_PULL = NRF_GPIO_PIN_PULLUP;
		constexpr uint32_t BUTTON_ACTIVE_PIN_STATE = 0;
		bool HardwareButtonActive(uint8_t pin)
		{
			if (pin == HW_PIN_NONE)
			{
				return false;
			}

			return nrf_gpio_pin_read(pin) == BUTTON_ACTIVE_PIN_STATE ?
				true : false;
		}

		static bool halInitialized = false;
	}

	map<lv_key_t, int> KeyMap = {
		{ LV_KEY_UP        , HW_KEY_UP_PIN },
		{ LV_KEY_DOWN      , HW_KEY_DOWN_PIN },
		{ LV_KEY_RIGHT     , HW_KEY_RIGHT_PIN },
		{ LV_KEY_LEFT      , HW_KEY_LEFT_PIN },
		{ LV_KEY_ESC       , HW_KEY_NONE },
		{ LV_KEY_DEL       , HW_KEY_NONE },
		{ LV_KEY_BACKSPACE , HW_KEY_NONE },
		{ LV_KEY_ENTER     , HW_KEY_CENTER_PIN },
		{ LV_KEY_NEXT      , HW_KEY_DOWN_PIN },
		{ LV_KEY_PREV      , HW_KEY_UP_PIN },
		{ LV_KEY_HOME      , HW_KEY_NONE },
		{ LV_KEY_END       , HW_KEY_NONE },
	};

	void InitializeHal()
	{
		if (halInitialized)
		{
			return;
		}

		// loop through map, marking each pin as input!
		for (auto it = KeyMap.begin(); it != KeyMap.end(); ++it)
		{
			uint8_t pin = it->second;

			if (pin != HW_PIN_NONE)
			{
				nrf_gpio_cfg_input(pin, BUTTON_ACTIVE_PIN_GPIO_PULL);
			}
		}

		halInitialized = true;
	}


	const bool KeyIsPressed(lv_key_t key)
	{
		auto it = KeyMap.find(key);
		if (it != KeyMap.end())
		{
			uint8_t pin = it->second;
			return HardwareButtonActive(pin);
		}

		// we don't have a mapping for that key.
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
