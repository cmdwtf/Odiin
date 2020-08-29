#include "display_led_pwm.h"

#include "boards.h"
#include "nrfx_pwm.h"

//static nrfx_pwm_t m_pwm0 = NRFX_PWM_INSTANCE(ILI9341_BACKLIGHT_LED_PWM_INSTANCE);

namespace display::led
{
	namespace
	{
		constexpr Cie1931<> cie1931;
	}

	void Pwm::SetDutyCycle(float dutyCyclePercent)
	{
		targetDutyCyclePercent = dutyCyclePercent;
		currentDutyCyclePercent = dutyCyclePercent;
		animating = false;
		// todo: update DC NOW!
	}

	void Pwm::AnimateDutyCycle(float fromDutyCyclePercent, float toDutyCyclePercent, float animationTime)
	{
		elapsedTime = 0.0f;
		targetTime = animationTime;

		currentDutyCyclePercent = fromDutyCyclePercent;
		targetDutyCyclePercent = toDutyCyclePercent;

		animating = true;
		Update(0);
	}

	void Pwm::Update(float timeDelta)
	{
		// update animation
		// todo: easing functions
	}

} // namespace display::led
