#include "display_led_effect_rainbow.h"

#include "display_led_effect_common.h"

namespace display::led::effect
{
	void Rainbow::Update(float timeDelta, RgbLedColorBufferDescriptor &colors)
	{
		if (Effect::AddDeltaTime(timeDelta))
		{
			colors.ShouldUpdate = true;
			float percent = Effect::GetEffectPlaybackPercentage();
			uint8_t patternPosition = percent * RAINBOW_TOTAL_POSITIONS;

			for (size_t scan = 0; scan < colors.Size; ++scan)
			{
				colors[scan] = ColorWheel(patternPosition);
			}
		}
	}

} // namespace display::led::effect
