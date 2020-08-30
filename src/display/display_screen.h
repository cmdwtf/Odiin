#pragma once

#include <cstdint>
#include "ili9341.h"
#include "input/input_keypad.h"

#include "led/display_led_low_power_pwm.h"

namespace display
{
	using color_t = uint32_t;
	using coord_t = uint16_t;

	class Screen
	{
	public:
		Screen(input::Keypad* keypad, float initialBacklight = 1.0f);
		virtual ~Screen();
		Screen(const Screen &) = delete;
		Screen &operator=(const Screen &) = delete;

		void Update(float timeDelta);
		void BacklightOn();
		void BacklightOff();
		void BacklightOffImmediate();
		void SetBacklightBrightness(float brightnessPercent);
		float GetBacklightBrightness() { return lastBacklightBrightness; }

		void SetBatteryStatus(uint8_t stateOfCharge, bool isCharging);

		void DisplaySleep();
		void DisplayWake();

		inline bool IsInitialized() { return initialized; }
		static constexpr uint32_t GraphicsTickMs = 1;
		static constexpr float BacklightAnimationDurationSlow = 0.5f;
		static constexpr float BacklightAnimationDurationFast = 0.1f;
	private:
		static bool initialized;
		static void Tick(void* context);
		input::Keypad* keypad;
		float lastBacklightBrightness = 1.0f;
		led::Pwm backlight;
	};
} // namespace display
