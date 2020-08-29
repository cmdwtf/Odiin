#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

#include "sdk_errors.h"

typedef enum {
	PLATFORM_BATTERY_STATE_UNKNOWN = 0,
	PLATFORM_BATTERY_STATE_CHARGING,
	PLATFORM_BATTERY_STATE_CAN_CHARGE,
	PLATFORM_BATTERY_STATE_DISCHARGING,
} platform_battery_state_t;

typedef struct platform_battery_driver_s {
	ret_code_t (*initialize)(void);
	void (*update)(void);
	uint8_t (*get_battery_state_of_charge)(void);
	uint16_t (*get_battery_voltage)(void);
	platform_battery_state_t (*get_battery_state)(void);
} platform_battery_driver_t;

#if defined(PITAYA_GO) || defined(NRF52840_M2)
extern platform_battery_driver_t platform_battery_makerdiary;
#endif //PITAYA_GO || NRF52840_M2

#ifdef __cplusplus
}
#endif
