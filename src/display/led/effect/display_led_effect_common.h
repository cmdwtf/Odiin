#pragma once

#include <cstdint>

#include "../display_led_rgb_led_data.h"

namespace display::led::effect
{
	using RgbColor = display_led_rgb_color_t;

	inline RgbColor Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a = UINT8_MAX)
	{
		return RgbColor { .raw = { a, r, g, b } };
	}

	inline RgbColor ColorWheel(uint8_t position)
	{
		uint8_t r, g, b;
		position = 255 - position;
		if (position < 85)
		{
			r = 255 - position * 3;
			g = 0;
			b = position * 3;
		}
		else if (position < 170)
		{
			position -= 85;
			r = 0;
			g = position * 3;
			b = 255 - position * 3;
		}
		else
		{
			position -= 170;
			r = position * 3;
			g = 255 - position * 3;
			b = 0;
		}

		return Color(r, g, b);
	}
} // namespace display::led::effect
