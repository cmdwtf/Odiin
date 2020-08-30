#include "display_led_pwm.h"

#include "boards.h"
#include "app_error.h"

namespace display::led
{
	namespace
	{
		constexpr Cie1931 cie1931;

		// Linear interpolation
		constexpr float Lerp(float a, float b, float t)
		{
			return ((1.0f - t) * a) + (b * t);
		}
	}

	Pwm::Pwm(uint8_t pin) :
		Pin(pin)
	{
		APP_TIMER_DEF(lowPowerPwmTimer);
		low_power_pwm_config_t config;
		config.active_high    = true;
		config.period         = DutyCycleMax;
		config.bit_mask       = PIN_MASK(Pin);
		config.p_timer_id     = &lowPowerPwmTimer;
		config.p_port         = NRF_GPIO;

		ret_code_t err_code = low_power_pwm_init((&lpPwm), &config, Pwm::PwmHandler);
		APP_ERROR_CHECK(err_code);

		// default to a zero DC.
		constexpr uint8_t defaultDutyCycle = 0;
		SetRawDutyCycle(defaultDutyCycle);

		// start the pwm!
		err_code = low_power_pwm_start((&lpPwm), lpPwm.bit_mask);
		APP_ERROR_CHECK(err_code);
	}

	void Pwm::SetDutyCycle(float dutyCyclePercent)
	{
		startDutyCyclePercent = dutyCyclePercent;
		targetDutyCyclePercent = dutyCyclePercent;

		currentDutyCyclePercent = dutyCyclePercent;

		animating = false;

		uint8_t raw = (uint8_t)(currentDutyCyclePercent * DutyCycleMax);
		SetRawDutyCycle(raw);
	}

	void Pwm::AnimateDutyCycle(float toDutyCyclePercent, float animationTime)
	{
		AnimateDutyCycle(-1, toDutyCyclePercent, animationTime);
	}

	void Pwm::AnimateDutyCycle(float fromDutyCyclePercent, float toDutyCyclePercent, float animationTime)
	{
		if (fromDutyCyclePercent < 0)
		{
			fromDutyCyclePercent = currentDutyCyclePercent;
		}

		elapsedTime = 0.0f;
		targetTime = animationTime;

		startDutyCyclePercent = fromDutyCyclePercent;
		targetDutyCyclePercent = toDutyCyclePercent;

		currentDutyCyclePercent = fromDutyCyclePercent;

		animating = true;
		Update(0);
	}

	void Pwm::Update(float timeDelta)
	{
		if (animating)
		{
			// update!
			elapsedTime += timeDelta;
			float timePercent = elapsedTime / targetTime;

			// check to see if we've reached the target,
			// cap and stop animating if we have.
			if (timePercent >= 1.0f)
			{
				animating = false;
				timePercent = 1.0f;
			}

			// calculate the new DC percent.
			currentDutyCyclePercent = Lerp(startDutyCyclePercent, targetDutyCyclePercent, timePercent);

			// calculate the new raw dc
			// todo: other easing functions besides lerp?
			uint8_t dc = (uint8_t)Lerp(DutyCycleMin, DutyCycleMax, currentDutyCyclePercent);

			// and set it!
			SetRawDutyCycle(dc);
		}
	}

	void Pwm::PwmHandler(void* context)
	{
		// noop is fine for now.
	}

	void Pwm::SetRawDutyCycle(uint8_t _rawDutyCycle)
	{
		rawDutyCycle = _rawDutyCycle;
		ret_code_t err_code = low_power_pwm_duty_set(&lpPwm, rawDutyCycle);
		APP_ERROR_CHECK(err_code);

		// check to see if we set the duty cycle to off,
		// and if so, immediately clear the bit. the reason
		// for this is, when shutting down, SetRawDutyCycle will
		// be called to turn the backlight off, but the timers will
		// not tick again before the device goes into POWER_OFF state,
		// and we want to make sure the LED is off before it does so!
		if (rawDutyCycle == 0)
		{
        	nrf_gpio_port_out_clear(lpPwm.p_port, lpPwm.bit_mask_toggle);
		}
	}

} // namespace display::led
