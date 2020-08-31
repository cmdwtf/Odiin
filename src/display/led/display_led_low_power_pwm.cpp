#include "sdk_common.h"

#if defined(DISPLAY_LED_LOW_POWER_PWM_ENABLED) && DISPLAY_LED_LOW_POWER_PWM_ENABLED == 1

#include "display_led_low_power_pwm.h"

#include <stdbool.h>

#include "app_error.h"
#include "boards.h"
#include "low_power_pwm.h"

#include "../display_log_module.ii"

static bool display_led_low_power_pwm_initialized = false;

static struct {
	low_power_pwm_t lp_pwm;
} instance_data;

static void display_led_low_power_pwm_set_duty_cycle(uint8_t dc)
{
	ret_code_t err_code = low_power_pwm_duty_set(&instance_data.lp_pwm, dc);
	APP_ERROR_CHECK(err_code);

	// check to see if we set the duty cycle to off,
	// and if so, immediately clear the bit. the reason
	// for this is, when shutting down, this will
	// be called to turn the backlight off, but the timers will
	// not tick again before the device goes into PWROFF state,
	// and we want to make sure the LED is off before it does so!
	if (dc == 0)
	{
		nrf_gpio_port_out_clear(instance_data.lp_pwm.p_port, instance_data.lp_pwm.bit_mask_toggle);
	}
}

static void display_led_low_power_pwm_handler(void* context)
{
	// noop is fine for now.
}

static ret_code_t display_led_low_power_pwm_initialize(const display_rgb_led_driver_config_t* config)
{
	if (display_led_low_power_pwm_initialized)
	{
		NRF_LOG_WARNING("display_led_low_power_pwm already initialized.");
		return NRF_ERROR_MODULE_ALREADY_INITIALIZED;
	}

	if (config->pin_count == 0)
	{
		NRF_LOG_WARNING("display_led_low_power_pwm requires at least a single pin definition.");
		return NRF_ERROR_INVALID_LENGTH;
	}

	uint32_t pin_mask = 0;

	for (size_t scan = 0; scan < config->pin_count; ++scan)
	{
		pin_mask |= PIN_MASK(config->pins[scan].pin);
	}

	APP_TIMER_DEF(lowPowerPwmTimer);
	low_power_pwm_config_t lppwm_config;
	lppwm_config.active_high    = true;
	lppwm_config.period         = DISPLAY_LED_LOW_POWER_PWM_BRIGHTNESS_MAX;
	lppwm_config.bit_mask       = pin_mask;
	lppwm_config.p_timer_id     = &lowPowerPwmTimer;
	lppwm_config.p_port         = NRF_GPIO;

	ret_code_t err_code = low_power_pwm_init((&instance_data.lp_pwm), &lppwm_config, display_led_low_power_pwm_handler);
	APP_ERROR_CHECK(err_code);

	display_led_low_power_pwm_set_duty_cycle(DISPLAY_LED_LOW_POWER_PWM_BRIGHTNESS_DEFAULT);

	// start the pwm timer!
	err_code = low_power_pwm_start((&instance_data.lp_pwm), instance_data.lp_pwm.bit_mask);
	APP_ERROR_CHECK(err_code);

	display_led_low_power_pwm_initialized = true;

	return err_code;
}

static void display_led_low_power_pwm_uninitialize()
{
	low_power_pwm_stop(&instance_data.lp_pwm);
	display_led_low_power_pwm_initialized = false;
}

static void display_led_low_power_pwm_set_leds(const display_led_rgb_color_t* led_colors, size_t led_count, uint8_t brightness)
{
	if (led_count == 0)
	{
		return;
	}

	// we can only handle one color, so we're just going to use the average
	// of the rgb of the first color to determine our D/C
	const display_led_rgb_color_t* color = &led_colors[0];
	uint8_t dc = (color->red + color->green + color->blue) / 3;
	display_led_low_power_pwm_set_duty_cycle(dc);
}

const display_rgb_led_driver_t display_led_low_power_pwm = {
	.initialize = display_led_low_power_pwm_initialize,
	.uninitialize = display_led_low_power_pwm_uninitialize,
	.set_leds = display_led_low_power_pwm_set_leds,
	.default_brightness = DISPLAY_LED_LOW_POWER_PWM_BRIGHTNESS_DEFAULT,
	.name = "Low Power PWM",
	.instance_data = &instance_data,
};

#endif // DISPLAY_LED_LOW_POWER_PWM_ENABLED
