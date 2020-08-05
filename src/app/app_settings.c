#include "app_settings.h"

// global settings object, initialized with default values
app_settings_t SETTINGS = {
	.boot_screen_timeout_ms = 2000,
	.ntag_215_default_password_authentication_acknowledgement = { 0x80, 0x80 },
};
