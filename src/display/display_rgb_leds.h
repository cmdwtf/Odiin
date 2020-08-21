
#pragma once

#include "display_rgb_led_data.h"

#ifdef __cplusplus

namespace display
{
	class RgbLeds
	{
	public:
		using RgbColor = display_rgb_led_color_t;
		using RgbLedDriver = display_rgb_led_driver_t;

		RgbLeds(RgbLedColorBufferDescriptor* colorBuffer, const RgbLedDriver* driver);
		virtual ~RgbLeds() = default;

		void Update(float timeDelta);

		inline RgbLedColorBufferDescriptor* GetColors() { return colors; }

		static inline RgbColor Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a = UINT8_MAX)
		{
			return RgbColor { .raw = { a, r, g, b } };
		}

		static inline RgbColor ColorWheel(uint8_t position)
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

	private:
		const RgbLedDriver* ledDriver;
		RgbLedColorBufferDescriptor* colors;
		RgbLeds(const RgbLeds&) = delete;
		RgbLeds& operator=(const RgbLeds&) = delete;
	};
} // namespace display

#endif // __cplusplus
