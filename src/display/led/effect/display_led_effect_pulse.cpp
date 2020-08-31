#include "display_led_effect_pulse.h"

#include "display_led_effect_common.h"

namespace display::led::effect
{
	void Pulse::Update(float timeDelta, RgbLedColorBufferDescriptor &colors)
	{
		if (Effect::AddDeltaTime(timeDelta))
		{
			colors.ShouldUpdate = true;
			// todo: update pulse logic
		}
	}

} // namespace display::led::effect
