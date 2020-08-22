#pragma once

#include <map>
#include "lvgl.h"

#include "nrf_gpio.h"

namespace input
{
	using std::map;

	// constants
	constexpr uint32_t BUTTON_NONE = 0xFFFFFFFF;
	constexpr lv_key_t LV_KEY_NONE = 0xFF;

	// the key to function map
	extern map<lv_key_t, uint32_t> KeyMap;

	void InitializeHal();
	const bool KeyIsPressed(lv_key_t key);
	const lv_key_t GetPressedKey();
}
