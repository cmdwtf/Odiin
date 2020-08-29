#pragma once

#include "cie1931.hpp"

namespace display::led
{
	class Pwm
	{
	public:
		Pwm() = default;
		virtual ~Pwm() = default;
		Pwm(const Pwm&) = delete;
		Pwm& operator=(const Pwm&) = delete;

		void SetDutyCycle(float dutyCyclePercentage);
		void AnimateDutyCycle(float fromDutyCyclePercent, float toDutyCyclePercent, float animationTime);

		void Update(float timeDelta);
	private:
		bool animating = false;
		float elapsedTime = 0.0f;
		float currentDutyCyclePercent = 0.0f;

		float targetTime = 0.0f;
		float targetDutyCyclePercent = 0.0f;
	};
} // namespace display::led
