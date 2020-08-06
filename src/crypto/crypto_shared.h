#pragma once

#include "sdk_common.h"

namespace crypto
{
	void Initialize();
	ret_code_t CryptoErrorCheck(ret_code_t retCode);
} // namespace crypto
