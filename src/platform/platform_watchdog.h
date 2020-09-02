#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#include "sdk_errors.h"

typedef struct platform_watchdog_driver_config_s {
	uint32_t watchdog_channel_handle;
} platform_watchdog_driver_config_t;

typedef struct platform_watchdog_driver_s {
	ret_code_t (*initialize)(platform_watchdog_driver_config_t* config);
	void (*enable)(void);
	void (*disable)(void);
	void (*feed)(uint32_t channel_handle);
} platform_watchdog_driver_t;

#ifdef NRF52840_XXAA
extern platform_watchdog_driver_t platform_watchdog_nrf52;
#endif //DNRF52840_XXAA

#ifdef __cplusplus
}
#endif
