#pragma once

#include <map>
#include "lvgl.h"

#include "nrf_gpio.h"

namespace input
{
	using std::map;

	// constants
	constexpr uint8_t HW_PIN_NONE = 0xFF;
	constexpr uint8_t HW_KEY_NONE = HW_PIN_NONE;
	constexpr lv_key_t LV_KEY_NONE = HW_KEY_NONE;

	// directional buttons
	constexpr uint8_t HW_KEY_UP_PIN = INPUT_BUTTON_UP_PIN;
	constexpr uint8_t HW_KEY_DOWN_PIN = INPUT_BUTTON_DOWN_PIN;
	constexpr uint8_t HW_KEY_LEFT_PIN = INPUT_BUTTON_LEFT_PIN;
	constexpr uint8_t HW_KEY_RIGHT_PIN = INPUT_BUTTON_RIGHT_PIN;

	// center 'select' button
	constexpr uint8_t HW_KEY_CENTER_PIN = INPUT_BUTTON_CENTER_PIN;

	constexpr uint8_t HW_KEY_EX1_PIN = INPUT_BUTTON_EX1_PIN;
	constexpr uint8_t HW_KEY_EX2_PIN = INPUT_BUTTON_EX2_PIN;

	// the key to function map
	extern map<lv_key_t, int> KeyMap;

	void InitializeHal();
	const bool KeyIsPressed(lv_key_t key);
	const lv_key_t GetPressedKey();
}
