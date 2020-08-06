#include "crypto_shared.h"

#include "app_error.h"
#include "nrf_crypto.h"

#include "crypto_log_module.ii"

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

		CryptoErrorCheck(nrf_crypto_init());

		cryptoInitialized = true;

		NRF_LOG_INFO("Initialized.");
	}

	ret_code_t CryptoErrorCheck(ret_code_t retCode)
	{
		if (retCode != NRF_SUCCESS)
		{
			NRF_LOG_WARNING("Error: %s", nrf_crypto_error_string_get(retCode));
			APP_ERROR_CHECK(retCode);
		}

		return retCode;
	}
}
