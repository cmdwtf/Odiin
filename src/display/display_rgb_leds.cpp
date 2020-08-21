#include "display_rgb_leds.h"

#include "display_log_module.ii"
#include "screen_ui/display_screen_ui.h"
#include <cstdio>

namespace display
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
		colors->Brightness = ledDriver->default_brightness;
	}


	void RgbLeds::Update(float timeDelta)
	{
		// hack -- just cycling through colors to test for now.
		static float position = 0.0f;
		const float patternLength = 10.0f;
		const uint8_t TOTAL_POSITIONS = 255;
		position += timeDelta;
		if (position > patternLength) position -= patternLength;
		float patternPercent = (position / patternLength);
		uint8_t wheelPosition = patternPercent * TOTAL_POSITIONS;

		for (size_t scan = 0; scan < colors->Size; ++scan)
		{
			(*colors)[scan] = RgbLeds::ColorWheel(wheelPosition);
			wheelPosition++;
		}
		colors->ShouldUpdate = true;
		colors->Brightness = 1;

		// if we have a driver and the colors should update, do so!
		if (ledDriver != nullptr && colors->ShouldUpdate)
		{
			ledDriver->set_leds(colors->Data, colors->Size, colors->Brightness);
			colors->ShouldUpdate = false;
		}
	}
} // namespace display
