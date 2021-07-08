#pragma once

#include <stdint.h>

#include "nrf_crypto.h"

#if defined(__cplusplus)
extern "C" {
#endif // __cplusplus

#define CURRENT_SETTINGS_VERSION	0

#define NTAG_P_ACK_SIZE 2
#define CRYPTO_KEY_SIZE				80

typedef struct app_settings_s {
	uint32_t version;
	uint32_t boot_screen_timeout_ms;
	uint8_t backlight_brightness;
	uint8_t ntag_default_password_authentication_acknowledgement[NTAG_P_ACK_SIZE];
	struct crypto_expected_values_s
	{
		uint8_t combined_keys[NRF_CRYPTO_HASH_SIZE_SHA256];
	} crypto_expected_values;
	struct crypto_key_s
	{
		char data_key[CRYPTO_KEY_SIZE];
		char tag_key[CRYPTO_KEY_SIZE];
	} crypto_keys;
} app_settings_t;

extern app_settings_t SETTINGS;

#if defined(__cplusplus)
}
#endif // __cplusplus

#ifdef __cplusplus

#include "files/files_littlefs.h"

namespace app::settings
{
	bool Load(files::Littlefs& flash);
	bool Save(files::Littlefs& flash);
}

#endif // __cplusplus
