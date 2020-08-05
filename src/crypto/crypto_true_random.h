#pragma once

#include <cstdint>
#include <cstddef>

namespace crypto
{
	class TrueRandom
	{
	public:
		static void Bytes(uint8_t* output, size_t size);
		static uint32_t Range(uint32_t min, uint32_t max);
		static float Range(float min, float max);
		static float Value();
	private:
		TrueRandom() = delete;
		virtual ~TrueRandom() = delete;
		TrueRandom(const TrueRandom&) = delete;
		TrueRandom& operator=(const TrueRandom&) = delete;
	};
}
