#include "display_led_effect_pulse.h"

#include "display_led_effect_common.h"

namespace display::led::effect
{
	void Pulse::Update(float timeDelta, RgbLedColorBufferDescriptor &colors)
	{
		//Effect::AddDeltaTime(timeDelta);
		//float percent = Effect::GetEffectPlaybackPercentage();
		//uint8_t patternPosition = percent * RAINBOW_TOTAL_POSITIONS;

		//for (size_t scan = 0; scan < colors.Size; ++scan)
		//{
		//	colors[scan] = ColorWheel(patternPosition);
		//}

		colors.ShouldUpdate = true;
	}

} // namespace display::led::effect
