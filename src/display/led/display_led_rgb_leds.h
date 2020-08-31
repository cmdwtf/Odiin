
#pragma once

#include "display_led_rgb_led_data.h"

#ifdef __cplusplus

#include "effect/display_led_effect_all_effects.h"

namespace display::led
{
	class RgbLeds
	{
	public:
		using RgbColor = display_led_rgb_color_t;
		using RgbLedDriver = display_rgb_led_driver_t;
		using RgbLedDriverConfig = display_rgb_led_driver_config_t;

		RgbLeds(RgbLedColorBufferDescriptor* colorBuffer,
			const RgbLedDriver* driver,	const RgbLedDriverConfig* config);
		virtual ~RgbLeds() = default;

		void Update(float timeDelta);
		void SetEffect(effect::Effect* e);
		void ClearEffect() { SetEffect(nullptr); }

		inline RgbLedColorBufferDescriptor* GetColors() { return colors; }

	private:
		const RgbLedDriver* ledDriver;
		RgbLedColorBufferDescriptor* colors;
		effect::Effect* activeEffect = nullptr;

		RgbLeds(const RgbLeds&) = delete;
		RgbLeds& operator=(const RgbLeds&) = delete;
	};
} // namespace display::led

#endif // __cplusplus
