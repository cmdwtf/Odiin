#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#include "sdk_errors.h"

typedef enum
{
	PLATFORM_POWER_SLEEP,				// a low-power idle state, not quite off
	PLATFORM_POWER_OFF,					// battery is dead and we are shutting down for good.
	PLATFORM_POWER_DFU,					// reboot to DFU mode.
	PLATFORM_POWER_RESET,				// reboot
	PLATFORM_POWER_CONTINUE_SHUTDOWN,	// used if a module blocks shutdown, to continue it.
} platform_power_shutdown_t;

typedef enum
{
	PLATFORM_POWER_EVENT_PREPARE_WAKEUP = PLATFORM_POWER_SLEEP,
	PLATFORM_POWER_EVENT_PREPARE_OFF = PLATFORM_POWER_OFF,
	PLATFORM_POWER_EVENT_PREPARE_DFU = PLATFORM_POWER_DFU,
	PLATFORM_POWER_EVENT_PREPARE_RESET = PLATFORM_POWER_RESET,
} platform_power_event_t;

typedef struct platform_power_driver_s {
	ret_code_t (*initialize)(void);
	void (*update)(void);
	void (*feed)(void);
	void (*shutdown)(platform_power_shutdown_t);
	bool (*event_handler)(platform_power_event_t);
} platform_power_driver_t;

#ifdef NRF52840_XXAA
extern platform_power_driver_t platform_power_nrf52;
#endif //DNRF52840_XXAA

#ifdef __cplusplus
}
#endif
