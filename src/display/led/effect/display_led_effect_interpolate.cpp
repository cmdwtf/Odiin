#include "display_led_effect_interpolate.h"

namespace display::led::effect
{
	using InterpolationFunction = float (*)(float, float, float);

	namespace
	{
		// Linear interpolation
		constexpr float Lerp(float a, float b, float t)
		{
			return ((1.0f - t) * a) + (b * t);
		}

		constexpr RgbColor InterpolateColor(RgbColor a, RgbColor b, float t, InterpolationFunction fn)
		{
			return Color(
				fn(a.red, b.red, t),
				fn(a.green, b.green, t),
				fn(a.blue, b.blue, t),
				fn(a.alpha, b.alpha, t)
			);
		}
	}

	void Interpolate::Update(float timeDelta, RgbLedColorBufferDescriptor &colors)
	{
		if (Effect::AddDeltaTime(timeDelta))
		{
			colors.ShouldUpdate = true;

			float percent = Effect::GetEffectPlaybackPercentage();

			RgbColor interpolated = InterpolateColor(startColor, endColor, percent, Lerp);

			for (size_t scan = 0; scan < colors.Size; ++scan)
			{
				colors[scan] = interpolated;
			}
		}
	}

} // namespace display::led::effect
