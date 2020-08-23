#pragma once

#include "display_led_effect.h"

namespace display::led::effect
{
	class Pulse : public Effect
	{
	public:
		virtual void Update(float timeDelta, RgbLedColorBufferDescriptor &colors) override;
	};
} // namespace display::led::effect
