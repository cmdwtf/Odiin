#pragma once

#include "display_led_effect.h"

namespace display::led::effect
{
	class Rainbow : public Effect
	{
	public:
		Rainbow()
		{
			effectDuration = 3.0f;
		}

		virtual void Update(float timeDelta, RgbLedColorBufferDescriptor &colors) override;
	private:
		static constexpr uint8_t RAINBOW_TOTAL_POSITIONS = 255;
	};
} // namespace display::led::effect
