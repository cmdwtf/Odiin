#include "display_led_effect_static.h"

#include "display_led_effect_common.h"

namespace display::led::effect
{
	void Static::Update(float timeDelta, RgbLedColorBufferDescriptor &colors)
	{
		if (Effect::AddDeltaTime(timeDelta))
		{
			colors.ShouldUpdate = true;
			for (size_t scan = 0; scan < colors.Size; ++scan)
			{
				colors[scan] = color;
			}
		}
	}

	void Static::Reset()
	{
		Effect::Reset();
		allowUpdate = true;
	}

} // namespace display::led::effect
