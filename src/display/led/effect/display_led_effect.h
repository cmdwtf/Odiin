#pragma once

#include "../display_led_rgb_led_data.h"

namespace display::led::effect
{
	class Effect
	{
	public:
		Effect() = default;
		virtual ~Effect() = default;
		Effect(const Effect&) = delete;
		Effect& operator=(const Effect&) = delete;

		virtual void Update(float timeDelta, RgbLedColorBufferDescriptor& colors) = 0;
		virtual void Reset() { elapsedTime = 0; }

		enum class WrapMode
		{
			Once,
			Loop,
			PingPong,
			ClampForever
		};

		enum class Direction
		{
			Forward,
			Up = Forward,
			Backward,
			Down = Backward
		};

		void SetTimeScale(float scale) { timeScale = scale; }
		float GetTimeScale() { return timeScale; }
		void SetDirection(Direction dir) { direction = dir; }
		Direction GetDirection() { return direction; }
		void SetWrapMode(WrapMode mode) { wrapMode = mode; }
		WrapMode GetWrapMode() { return wrapMode; }

	protected:
		WrapMode wrapMode = WrapMode::Loop;
		Direction direction = Direction::Forward;
		float elapsedTime = 0.0f;
		float effectDuration = 1.0f;
		float timeScale = 1.0f;

		inline float GetEffectPlaybackPercentage()
		{
			return elapsedTime / effectDuration;
		}

		inline void AddDeltaTime(float timeDelta)
		{
			bool shouldWrap = false;
			if (direction == Direction::Forward)
			{
				elapsedTime += timeDelta * timeScale;
				shouldWrap = elapsedTime >= effectDuration;
			}
			else
			{
				elapsedTime -= timeDelta * timeScale;
				shouldWrap = elapsedTime <= 0;
			}

			if (shouldWrap == false)
			{
				return;
			}

			switch (wrapMode)
			{
				case WrapMode::Once:
					elapsedTime = 0.0f;
					break;
				case WrapMode::Loop:
					if (direction == Direction::Forward)
					{
						elapsedTime -= effectDuration;
					}
					else
					{
						elapsedTime += effectDuration;
					}
					break;
				case WrapMode::PingPong:
					if (direction == Direction::Forward)
					{
						direction = Direction::Backward;
						float diff = (elapsedTime - effectDuration);
						elapsedTime = effectDuration - diff;
					}
					else
					{
						direction = Direction::Forward;
						elapsedTime = __builtin_fabs(elapsedTime);
					}
					break;
				case WrapMode::ClampForever:
					elapsedTime = effectDuration;
					break;
			}
		}
	};
} // namespace display::led::effect
