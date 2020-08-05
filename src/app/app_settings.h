#pragma once

#include <stdint.h>

#if defined(__cplusplus)
extern "C" {
#endif // __cplusplus

typedef struct app_settings_s {
	uint32_t boot_screen_timeout_ms;
	uint8_t ntag_215_default_password_authentication_acknowledgement[2];
} app_settings_t;

extern app_settings_t SETTINGS;

#if defined(__cplusplus)
}
#endif // __cplusplus
