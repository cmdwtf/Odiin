#include "display_led_rgb_leds.h"

#include <cstdio>

#include "../display_log_module.ii"

namespace display::led
{
	RgbLeds::RgbLeds(RgbLedColorBufferDescriptor* colorBuffer, const RgbLedDriver* driver) :
		ledDriver(driver), colors(colorBuffer)
	{
		if (colors == nullptr)
		{
			NRF_LOG_WARNING("RgbLeds cannot be initialized with no color buffer description.");
			return;
		}

		if (ledDriver == nullptr)
		{
			NRF_LOG_WARNING("RgbLeds initializing %d LED%s with a null driver. This is fine, but no leds will be driven.",
				colors->Size, colors->Size == 1 ? "" : "s");
			return;
		}

		NRF_LOG_INFO("Initializing %d LED%s with driver %s.", colors->Size, colors->Size == 1 ? "" : "s", ledDriver->name);
		ledDriver->initialize();
		colors->ShouldUpdate = true;
	}

	void RgbLeds::Update(float timeDelta)
	{
		if (colors == nullptr)
		{
			return;
		}

		if (activeEffect != nullptr)
		{
			activeEffect->Update(timeDelta, *colors);
		}

		// if we have a driver and the colors should update, do so!
		if (ledDriver != nullptr && colors->ShouldUpdate)
		{
			ledDriver->set_leds(colors->Data, colors->Size, colors->Brightness);
			colors->ShouldUpdate = false;
		}
	}

	void RgbLeds::SetEffect(effect::Effect* e)
	{
		activeEffect = e;

		if (colors != nullptr)
		{
			colors->ShouldUpdate = true;
		}
	}

} // namespace display::led
