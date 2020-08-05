#include "crypto_shared.h"

#include "app_error.h"
#include "nrf_crypto.h"

namespace crypto
{
	namespace
	{
		bool cryptoInitialized = false;
	}

	void Initialize()
	{
		if (cryptoInitialized)
		{
			return;
		}

		APP_ERROR_CHECK(nrf_crypto_init());

		cryptoInitialized = true;
	}
}
