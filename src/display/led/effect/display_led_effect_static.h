#pragma once

#include "display_led_effect.h"

namespace display::led::effect
{
	class Static : public Effect
	{
	public:
		Static(RgbColor staticColor) :
			Effect(1.0f), color(staticColor)
		{
			SetWrapMode(WrapMode::ClampForever);
		}

		virtual void Update(float timeDelta, RgbLedColorBufferDescriptor &colors) override;
		virtual void Reset() override;
	private:
		RgbColor color;
		bool allowUpdate = true;
	};
} // namespace display::led::effect
