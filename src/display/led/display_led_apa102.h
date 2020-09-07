#pragma once

#if defined(DISPLAY_LED_APA102_ENABLED) && DISPLAY_LED_APA102_ENABLED == 1

#ifdef __cplusplus
extern "C" {
#endif

#include "display_led_rgb_leds.h"

// turn on the sk9822 reset if it isn't explicitly disabled.
#if !defined(DISPLAY_LED_APA102_ENABLE_SK9822_RESET_FRAME)
#define DISPLAY_LED_APA102_ENABLE_SK9822_RESET_FRAME 1
#endif // !defined(DISPLAY_LED_APA102_ENABLE_SK9822_RESET_FRAME)

#if !defined(DISPLAY_LED_APA102_COLOR_ORDER)
#define DISPLAY_LED_APA102_COLOR_ORDER		DISPLAY_LED_RGB_COLOR_ORDER_RGB
#endif // DISPLAY_LED_APA102_COLOR_ORDER

// they only have 5 bits dedicated to brightness.
#define DISPLAY_LED_APA102_BRIGHTNESS_OFF (0b00000000)
#define DISPLAY_LED_APA102_BRIGHTNESS_MIN (0b00000001)
#define DISPLAY_LED_APA102_BRIGHTNESS_MID (0b00001111)
#define DISPLAY_LED_APA102_BRIGHTNESS_MAX (0b00011111)
#define DISPLAY_LED_APA102_BRIGHTNESS_DEFAULT DISPLAY_LED_APA102_BRIGHTNESS_MAX

extern const display_led_rgb_driver_t display_led_apa102;

#ifdef __cplusplus
}
#endif

#endif // DISPLAY_LED_APA102_ENABLED
