#pragma once

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus

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

#endif // __cplusplus

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

extern uint32_t crypto_true_random_range(uint32_t min, uint32_t max);

#ifdef __cplusplus
}
#endif // __cplusplus
