#pragma once

#include <cstdint>

#include "lvgl.h"

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
	};
} // namespace Input
