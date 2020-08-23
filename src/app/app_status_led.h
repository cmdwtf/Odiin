#pragma once

#include "display/led/display_led_rgb_leds.h"

namespace app
{
	class StatusLed
	{
	public:
		StatusLed();
		virtual ~StatusLed() = default;
		StatusLed(const StatusLed&) = delete;
		StatusLed& operator=(const StatusLed&) = delete;

		void Update(float delta);

		void SetModeBoot();
		void SetModeMenu();
		void SetModeNfct();
		void SetModeFun();
		void SetModeShutdown();
	private:
		display::led::RgbLeds* rgbLed;
		display::led::RgbLedColorBufferDescriptor* colors;

		void SetEffect(display::led::effect::Effect* eff);

		static constexpr uint8_t BRIGHTNESS = 2;
		static constexpr uint8_t SOLID_STATUS_VAL = 32;
	};
} // namespace app
