#pragma once

#include <cstdint>

#include "lvgl.h"
#include "input_hal.h"

namespace Input
{
	class Keypad
	{
	public:
		Keypad();
		virtual ~Keypad();
		Keypad(const Keypad &) = delete;
		Keypad &operator=(const Keypad &) = delete;

		lv_group_t* GetInputGroup();
	private:
		void CreateDevice();
		lv_indev_t* keypadDev = nullptr;
		lv_group_t* inputGroup = nullptr;
		lv_key_t lastKeyPressed = LV_KEY_NONE;

		static bool ReadCallback(lv_indev_drv_t* driver, lv_indev_data_t*data);
	};
} // namespace Input
