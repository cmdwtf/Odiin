#pragma once

#include "display_led_rgb_leds.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DISPLAY_LED_PWM_BRIGHTNESS_OFF		(0x00)
#define DISPLAY_LED_PWM_BRIGHTNESS_MIN		(0x01)
#define DISPLAY_LED_PWM_BRIGHTNESS_MID		(0xFF >> 1)
#define DISPLAY_LED_PWM_BRIGHTNESS_MAX		(0xFF)
#define DISPLAY_LED_PWM_BRIGHTNESS_DEFAULT	DISPLAY_LED_PWM_BRIGHTNESS_OFF

extern const display_led_rgb_driver_t display_led_pwm;

#ifdef __cplusplus
}
#endif
