#pragma once

#include <cstdint>

#include "cie1931.hpp"
#include "low_power_pwm.h"

namespace display::led
{
	class Pwm
	{
	public:
		Pwm(uint8_t pin);
		virtual ~Pwm() = default;
		Pwm(const Pwm&) = delete;
		Pwm& operator=(const Pwm&) = delete;

		void SetDutyCycle(float dutyCyclePercentage);
		void AnimateDutyCycle(float toDutyCyclePercent, float animationTime);
		void AnimateDutyCycle(float fromDutyCyclePercent, float toDutyCyclePercent, float animationTime);

		void Update(float timeDelta);

		static constexpr uint8_t DutyCycleMin = 0;
		static constexpr uint8_t DutyCycleMax = UINT8_MAX;

	private:
		static void PwmHandler(void* context);
		void SetRawDutyCycle(uint8_t rawDutyCycle);

		bool animating = false;
		float elapsedTime = 0.0f;
		float currentDutyCyclePercent = 0.0f;

		float targetTime = 0.0f;
		float startDutyCyclePercent = 0.0f;
		float targetDutyCyclePercent = 0.0f;

		uint8_t rawDutyCycle = 0;

		low_power_pwm_t lpPwm;
	};
} // namespace display::led
