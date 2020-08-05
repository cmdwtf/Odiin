#include "crypto_true_random.h"

#include "app_error.h"
#include "nrf_crypto_rng.h"

namespace crypto
{
	namespace
	{
	}

	void Bytes(uint8_t* output, size_t size)
	{
		ret_code_t ret = nrf_crypto_rng_vector_generate(output, size);
		APP_ERROR_CHECK(ret);
	}

	uint32_t TrueRandom::Range(uint32_t min, uint32_t max)
	{
		static_assert(sizeof(uint32_t) == 4);
		uint32_t result = 0;
		ret_code_t ret = nrf_crypto_rng_vector_generate_in_range((uint8_t*)result, (const uint8_t*)&min, (const uint8_t*)&max, sizeof(uint32_t));
		APP_ERROR_CHECK(ret);

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
