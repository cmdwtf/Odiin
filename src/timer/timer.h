#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "sdk_config.h"

#define TIMER_RTC_INSTANCE      2
#define TIMER_TICK_FREQUENCY    NRFX_RTC_DEFAULT_CONFIG_FREQUENCY

void timer_initialize(void);
void timer_start(void);
void timer_stop(void);
uint32_t timer_get_ticks(void);
float timer_get_elapsed_seconds(void);
inline float timer_ticks_to_seconds(uint32_t ticks) { return (float)ticks / TIMER_TICK_FREQUENCY; }

#ifdef __cplusplus
}
#endif
