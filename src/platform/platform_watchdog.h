#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#include "sdk_errors.h"

typedef struct platform_watchdog_driver_config_s {
	// nothing for now.
} platform_watchdog_driver_config_t;

typedef struct platform_watchdog_driver_s {
	ret_code_t (*initialize)(platform_watchdog_driver_config_t* config);
	void (*enable)(void);
	void (*disable)(void);
	void (*feed)();
} platform_watchdog_driver_t;

#ifdef NRF52840_XXAA
extern platform_watchdog_driver_t platform_watchdog_nrf52;
#endif //DNRF52840_XXAA

extern platform_watchdog_driver_t platform_watchdog_noop;

#ifdef __cplusplus
}
#endif
