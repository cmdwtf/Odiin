#pragma once

#include "../display_led_rgb_led_data.h"
#include "display_led_effect_common.h"

namespace display::led::effect
{
	class Effect
	{
	public:
		Effect() = default;
		Effect(float duration) : effectDuration(duration) { }
		virtual ~Effect() = default;
		Effect(const Effect&) = delete;
		Effect& operator=(const Effect&) = delete;

		virtual void Update(float timeDelta, RgbLedColorBufferDescriptor& colors) = 0;
		virtual void Reset() { elapsedTime = 0; hasFinished = false; elapsedTimeSinceFinished = 0.0f; }

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

		bool hasFinished = false;
		float elapsedTimeSinceFinished = 0;
		static constexpr float AllowFinishedResendEverySeconds = 1.0f;

		inline float GetEffectPlaybackPercentage()
		{
			return elapsedTime / effectDuration;
		}

		inline bool AddDeltaTime(float timeDelta)
		{
			// we're done, count elapsed time,
			// and that's all we need to do.
			if (hasFinished)
			{
				if (elapsedTimeSinceFinished < AllowFinishedResendEverySeconds)
				{
					elapsedTimeSinceFinished += timeDelta;
					return false;
				}
				else
				{
					elapsedTimeSinceFinished -= AllowFinishedResendEverySeconds;
					return true;
				}
			}

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

			// we don't need to wrap,
			// go aheada and return that we can update.
			if (shouldWrap == false)
			{
				return true;
			}

			switch (wrapMode)
			{
				case WrapMode::Once:
					elapsedTime = 0.0f;
					elapsedTimeSinceFinished = 0.0f;
					hasFinished = true;
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
					elapsedTimeSinceFinished = 0.0f;
					hasFinished	= true;
					break;
			}

			return true;
		}
	};
} // namespace display::led::effect
