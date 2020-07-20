#pragma once

#include "app_utilities.h"
#include "nrf_log.h"

// log shortcuts
#define E(...) NRF_LOG_ERROR(__VA_ARGS__)
#define W(...) NRF_LOG_WARNING(__VA_ARGS__)
#define I(...) NRF_LOG_INFO(__VA_ARGS__)
#define D(...) NRF_LOG_DEBUG(__VA_ARGS__)

//#define NO_VERBOSE_LOGS
#if defined(NRF_LOG_DEFERRED) && NRF_LOG_DEFERRED && !defined(NO_VERBOSE_LOGS)
#define V(...) NRF_LOG_DEBUG(__VA_ARGS__)
#define HEXDUMP_V(p_data, len) NRF_LOG_HEXDUMP_DEBUG(p_data, len)
#else
#define V(...)
#define HEXDUMP_V(p_data, len)
#endif

void app_log_init();
void app_log_panic();
void app_log_flush();
