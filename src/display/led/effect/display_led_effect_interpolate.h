#pragma once

#include "display_led_effect.h"
#include "display_led_effect_common.h"

namespace display::led::effect
{
	class Interpolate : public Effect
	{
	public:
		Interpolate(RgbColor start, RgbColor end, float duration)
			: Effect(duration), startColor(start), endColor(end)
		{
			SetWrapMode(WrapMode::ClampForever);
		}
		virtual void Update(float timeDelta, RgbLedColorBufferDescriptor &colors) override;
		void SetStartColor(RgbColor from) { startColor = from; }
		void SetEndColor(RgbColor to) { endColor = to; }
	private:
		RgbColor startColor;
		RgbColor endColor;
	};
} // namespace display::led::effect
