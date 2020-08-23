#pragma once

#include "display_led_effect.h"

namespace display::led::effect
{
	class Static : public Effect
	{
	public:
		virtual void Update(float timeDelta, RgbLedColorBufferDescriptor &colors) override;
	};
} // namespace display::led::effect
