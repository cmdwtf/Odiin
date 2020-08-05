#pragma once

#include <cstdint>

namespace crypto
{
	class TrueRandom
	{
	public:
		static float Value();
		static uint32_t Range(uint32_t min, uint32_t max);
		static float Range(float min, float max);
	private:
		TrueRandom() = delete;
		virtual ~TrueRandom() = delete;
		TrueRandom(const TrueRandom&) = delete;
		TrueRandom& operator=(const TrueRandom&) = delete;
	};
}
