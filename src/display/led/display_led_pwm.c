#include "display_led_pwm.h"

#include <stdbool.h>

#include "app_error.h"
#include "boards.h"
#include "nrfx_pwm.h"

#include "../display_log_module.ii"

static bool display_led_pwm_initialized = false;

#define DISPLAY_PWM_PERIOD UINT8_MAX

// this bit doesn't have a define in the standard headers it seems.
#define PWM_POLARITY_RISING_EDGE (0 << 15)
#define PWM_POLARITY_FALLING_EDGE (1 << 15)

static struct {
	uint16_t led_duty_cycles[PWM0_CH_NUM];
	NRF_PWM_Type* pwm;
	bool inverted;
	uint16_t polarity;
} data = {
	.led_duty_cycles = { 0 },
	.pwm = NRF_PWM0,
	.inverted = false,
};

static void display_led_pwm_set_duty_cycle(size_t index, uint8_t duty_cycle)
{
	data.led_duty_cycles[index] = duty_cycle | data.polarity;
	nrf_pwm_event_clear(data.pwm, NRF_PWM_EVENT_SEQEND0);
	nrf_pwm_task_trigger(data.pwm, NRF_PWM_TASK_SEQSTART0);
}

static ret_code_t display_led_pwm_initialize(const display_rgb_led_driver_config_t* config)
{
	if (display_led_pwm_initialized)
	{
		NRF_LOG_WARNING("display_led_pwm already initialized.");
		return NRF_ERROR_MODULE_ALREADY_INITIALIZED;
	}

	if (config->pin_count > 4)
	{
		NRF_LOG_WARNING("display_led_pwm needs 4 or less pins for now.");
		return NRF_ERROR_INVALID_LENGTH;
	}

	// we need to invert the inversion to bring this in line with low_power pwm. 🤷‍♀️
	// see for more details: https://infocenter.nordicsemi.com/topic/ps_nrf52840/pwm.html?cp=4_0_0_5_16_1#concept_wxj_hnw_nr
	data.inverted = config->invert_polarity == false;

	data.polarity = data.inverted ? PWM_POLARITY_FALLING_EDGE : PWM_POLARITY_RISING_EDGE;

	for (size_t scan = 0; scan < PWM0_CH_NUM; ++scan)
	{
		data.pwm->PSEL.OUT[scan] = NRF_PWM_PIN_NOT_CONNECTED;
		data.led_duty_cycles[scan] = data.polarity;
	}

	for (size_t scan = 0; scan < config->pin_count; ++scan)
	{
		uint32_t pin = config->pins[scan].pin;
		nrf_gpio_cfg_output(pin);
		nrf_gpio_pin_write(pin, config->invert_polarity ? 1 : 0);
		data.pwm->PSEL.OUT[scan] = pin;
	}

	data.pwm->MODE            = PWM_MODE_UPDOWN_Up;
	data.pwm->COUNTERTOP      = DISPLAY_PWM_PERIOD;
	data.pwm->PRESCALER       = PWM_PRESCALER_PRESCALER_DIV_128; // even the 125kHz is enough for a nice backlight.
	data.pwm->DECODER         = PWM_DECODER_LOAD_Individual;
	data.pwm->LOOP            = 0;

	data.pwm->SEQ[0].PTR      = (uint32_t) (data.led_duty_cycles);
	data.pwm->SEQ[0].CNT      = 4; // default mode is Individual --> count must be 4
	data.pwm->SEQ[0].REFRESH  = 0;
	data.pwm->SEQ[0].ENDDELAY = 0;

	data.pwm->ENABLE = 1;
	data.pwm->EVENTS_SEQEND[0] = 0;

	return NRFX_SUCCESS;
}

static void display_led_pwm_uninitialize()
{
	if (display_led_pwm_initialized == false)
	{
		return;
	}

	data.pwm->TASKS_SEQSTART[0] = 0;
	data.pwm->ENABLE            = 0;

	data.pwm->PSEL.OUT[0] = 0xFFFFFFFF;
	data.pwm->PSEL.OUT[1] = 0xFFFFFFFF;
	data.pwm->PSEL.OUT[2] = 0xFFFFFFFF;
	data.pwm->PSEL.OUT[3] = 0xFFFFFFFF;

	data.pwm->MODE        = 0;
	data.pwm->COUNTERTOP  = 0x3FF;
	data.pwm->PRESCALER   = 0;
	data.pwm->DECODER     = 0;
	data.pwm->LOOP        = 0;
	data.pwm->SEQ[0].PTR  = 0;
	data.pwm->SEQ[0].CNT  = 0;

	display_led_pwm_initialized = false;
}

static void display_led_pwm_set_leds(const display_led_rgb_color_t* led_colors, size_t led_count, uint8_t brightness)
{
	if (led_count == 0)
	{
		return;
	}

	// we can only handle 4 pwm channels, so we are just gonna
	// use red, green, blue, and alpha as the 4 values for the 4 channels.
	const display_led_rgb_color_t* color = &led_colors[0];
	display_led_pwm_set_duty_cycle(0, color->red);
	display_led_pwm_set_duty_cycle(1, color->green);
	display_led_pwm_set_duty_cycle(2, color->blue);
	display_led_pwm_set_duty_cycle(3, color->alpha);
}

const display_rgb_led_driver_t display_led_pwm = {
	.initialize = display_led_pwm_initialize,
	.uninitialize = display_led_pwm_uninitialize,
	.set_leds = display_led_pwm_set_leds,
	.default_brightness = DISPLAY_LED_PWM_BRIGHTNESS_DEFAULT,
	.name = "PWM",
	.instance_data = &data,
};
