#pragma once

#include <map>
#include "lvgl.h"

#include "nrf_gpio.h"

namespace Input
{
	using std::map;

	constexpr uint8_t HW_PIN_NONE = 0xFF;

	constexpr uint8_t HW_KEY_UP_PIN = NRF_GPIO_PIN_MAP(1, 7);
	constexpr uint8_t HW_KEY_DOWN_PIN = NRF_GPIO_PIN_MAP(1, 4);
	constexpr uint8_t HW_KEY_LEFT_PIN = NRF_GPIO_PIN_MAP(1, 3);
	constexpr uint8_t HW_KEY_RIGHT_PIN = NRF_GPIO_PIN_MAP(1, 2);
	constexpr uint8_t HW_KEY_CENTER_PIN = NRF_GPIO_PIN_MAP(1, 1);
	constexpr uint8_t HW_KEY_SET_PIN = NRF_GPIO_PIN_MAP(1, 0);

	constexpr uint8_t HW_KEY_RESET_PIN = HW_PIN_NONE;
	constexpr uint8_t HW_KEY_DOCK_USER_PIN = HW_PIN_NONE;

	constexpr uint8_t HW_KEY_NONE = HW_PIN_NONE;
	constexpr lv_key_t LV_KEY_NONE = HW_KEY_NONE;

	extern map<lv_key_t, int> KeyMap;

	void InitializeHal();
	const bool KeyIsPressed(lv_key_t key);
	const lv_key_t GetPressedKey();
}
