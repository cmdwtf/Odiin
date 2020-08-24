#include "app_status_led.h"

#include "sdk_common.h"

#include "display/led/display_led_apa102.h"
#include "display/led/effect/display_led_effect_all_effects.h"

#include "app_log_module.ii"

namespace app
{
	using namespace display::led;

	StatusLed::StatusLed()
	{
#if defined(DISPLAY_LED_APA102_ENABLED) && DISPLAY_LED_APA102_ENABLED == 1
		static RgbLedColorBuffer<1> colorBuffer;
		colors = &colorBuffer;
		colors->Brightness = BRIGHTNESS;

		static RgbLeds status_pixel_apa102(colors, &display_led_apa102);
		rgbLed = &status_pixel_apa102;
#else
		static RgbLeds null_led(nullptr, nullptr);
		rgbLed = &null_led;
		colors = nullptr;
#endif // DISPLAY_LED_APA102_ENABLED
	}

	void StatusLed::Update(float delta)
	{
		rgbLed->Update(delta);
	}

	void StatusLed::SetEffect(effect::Effect* eff)
	{
		eff->Reset();
		colors->Brightness = BRIGHTNESS;
		rgbLed->SetEffect(eff);
		rgbLed->Update(0.0f);
	}

	void StatusLed::SetModeBoot()
	{
		if (colors == nullptr)
		{
			return;
		}

		static effect::Static solid;
		(*colors)[0] = effect::Color(SOLID_STATUS_VAL, 0, 0);
		SetEffect(&solid);
	}

	void StatusLed::SetModeMenu()
	{
		if (colors == nullptr)
		{
			return;
		}

		static effect::Static solid;
		(*colors)[0] = effect::Color(0, SOLID_STATUS_VAL, 0);
		SetEffect(&solid);
	}

	void StatusLed::SetModeNfct()
	{
		if (colors == nullptr)
		{
			return;
		}

		static effect::Static solid;
		(*colors)[0] = effect::Color(0, 0, SOLID_STATUS_VAL);
		SetEffect(&solid);
	}

	void StatusLed::SetModeFun()
	{
		if (colors == nullptr)
		{
			return;
		}

		static display::led::effect::Rainbow rainbow;
		SetEffect(&rainbow);
	}

	void StatusLed::SetModeShutdown()
	{
		if (colors == nullptr)
		{
			return;
		}

		static effect::Static solid;
		(*colors)[0] = effect::Color(0, 0, 0);
		SetEffect(&solid);
	}

}
