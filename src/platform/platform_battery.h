#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

#include "sdk_errors.h"

typedef struct platform_battery_driver_s {
	ret_code_t (*initialize)(void);
	void (*update)(void);
	uint8_t (*get_battery_percent)(void);
	uint16_t (*get_battery_voltage)(void);
	bool (*get_battery_is_charging)(void);
} platform_battery_driver_t;

#if defined(PITAYA_GO) || defined(NRF52840_M2)
extern platform_battery_driver_t platform_battery_makerdiary;
#endif //PITAYA_GO || NRF52840_M2

#ifdef __cplusplus
}
#endif
