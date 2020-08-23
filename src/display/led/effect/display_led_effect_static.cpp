#include "display_led_effect_static.h"

#include "display_led_effect_common.h"

namespace display::led::effect
{
	void Static::Update(float timeDelta, RgbLedColorBufferDescriptor &colors)
	{
		// nothing to do, just let the leds update.
		colors.ShouldUpdate = true;
	}

} // namespace display::led::effect
