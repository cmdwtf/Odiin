#pragma once

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <stddef.h>
#include <stdint.h>

#include "sdk_errors.h"

#define DISPLAY_RGB_COLOR_ORDER_RGB		0
#define DISPLAY_RGB_COLOR_ORDER_RBG		1
#define DISPLAY_RGB_COLOR_ORDER_GRB		2
#define DISPLAY_RGB_COLOR_ORDER_GBR		3
#define DISPLAY_RGB_COLOR_ORDER_BRG		4
#define DISPLAY_RGB_COLOR_ORDER_BGR		5

// a struct describing a 32 bit color
typedef struct display_rgb_led_color_s
{
	union
	{
		uint8_t raw[4];
		struct
		{
			uint8_t alpha;
			uint8_t red;
			uint8_t green;
			uint8_t blue;
		};
	};
} display_rgb_led_color_t;

// a struct describing a rgb led driver
typedef struct display_rgb_led_driver_s
{
	ret_code_t (*initialize)();
	void (*uninitialize)();
	void (*set_leds)(const display_rgb_led_color_t* led_colors, size_t led_count, uint8_t brightness);
	uint8_t default_brightness;
	const char* name;
} display_rgb_led_driver_t;

#ifdef __cplusplus
}
#endif // __cplusplus

#ifdef __cplusplus

namespace display
{
	class RgbLedColorBufferDescriptor
	{
	public:
		const size_t Size;
		display_rgb_led_color_t* const Data;
		bool ShouldUpdate = true;
		uint8_t Brightness = 0;

		display_rgb_led_color_t& operator[](size_t index)
		{
			if (index >= Size)
			{
				return Data[0];
			}

			return Data[index];
		}

	protected:
		RgbLedColorBufferDescriptor(int ledCount, display_rgb_led_color_t* const colorData) :
			Size(ledCount), Data(colorData)
		{ }
	};

	template<size_t LedCount>
	class RgbLedColorBuffer : public RgbLedColorBufferDescriptor
	{
	public:
		RgbLedColorBuffer() :
			RgbLedColorBufferDescriptor(LedCount, colorBuffer)
		{}
	private:
		display_rgb_led_color_t colorBuffer[LedCount];
	};
}

static_assert("argh" && sizeof(display_rgb_led_color_t) == 4);

#endif // __cplusplus
