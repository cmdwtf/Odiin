#include "crypto_true_random.h"

#include "app_error.h"
#include "nrf_assert.h"
#include "nrf_crypto_rng.h"

#include "crypto_shared.h"

#include "crypto_log_module.ii"

#ifndef __BYTE_ORDER__
#error __BYTE_ORDER must be defined to __ORDER_LITTLE_ENDIAN__ or __ORDER_BIG_ENDIAN__
#elif __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#define IS_LITTLE_ENDIAN
#elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#define IS_BIG_ENDIAN
#endif // __BYTE_ORDER

namespace crypto
{
	void TrueRandom::Bytes(uint8_t* output, size_t size)
	{
		ret_code_t ret = nrf_crypto_rng_vector_generate(output, size);
		CryptoErrorCheck(ret);
	}

	uint32_t TrueRandom::Range(uint32_t min, uint32_t max)
	{
		static_assert(sizeof(uint32_t) == 4);
		uint32_t result = 0;

		// nrf_crypto_rng_vector_generate_in_range expects min/max to be big endian
#if defined(IS_LITTLE_ENDIAN)
		min = __builtin_bswap32(min);
		max = __builtin_bswap32(max);
#endif //IS_LITTLE_ENDIAN

		ret_code_t ret = nrf_crypto_rng_vector_generate_in_range((uint8_t*)&result, (const uint8_t*)&min, (const uint8_t*)&max, sizeof(uint32_t));

#if defined(IS_LITTLE_ENDIAN)
		min = __builtin_bswap32(min);
		max = __builtin_bswap32(max);
		result = __builtin_bswap32(result);
#endif //IS_LITTLE_ENDIAN

		ASSERT(result >= min && result <= max);

		CryptoErrorCheck(ret);

		return result;
	}

	float TrueRandom::Range(float min, float max)
	{
		// we will generate 32 bits of randomness
		// via the uint32 Range(), to use
		// as our scale for our float.
		uint32_t randomUint = Range(0, UINT32_MAX);

		// get the magnitude of our random value, as floating point math please.
		float magnitude = ((float)randomUint / UINT32_MAX);

		// short circuit for 0-1!
		if (min == 0.0f && max == 1.0f)
		{
			return magnitude;
		}

		// scale our resultant random by our range min/max
		// (just a normal lerp with our new magnitude!)
		return ((1.0f - magnitude) * min) + (max * magnitude);
	}

	float TrueRandom::Value()
	{
		return Range(0.0f, 1.0f);
	}
} // namespace crypto

extern "C" uint32_t crypto_true_random_range(uint32_t min, uint32_t max)
{
	return crypto::TrueRandom::Range(min, max);
}
