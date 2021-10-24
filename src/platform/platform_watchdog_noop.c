#include "platform_watchdog.h"

static ret_code_t platform_watchdog_noop_initialize(platform_watchdog_driver_config_t* config)
{
    return 0;
}

static void platform_watchdog_noop_fn(void)
{
}

platform_watchdog_driver_t platform_watchdog_noop = {
    .initialize = platform_watchdog_noop_initialize,
    .enable = platform_watchdog_noop_fn,
    .disable = platform_watchdog_noop_fn,
    .feed = platform_watchdog_noop_fn,
};
