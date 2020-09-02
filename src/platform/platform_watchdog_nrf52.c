#include "platform_watchdog.h"

#include "sdk_common.h"
#include "app_error.h"
#include "nrfx_wdt.h"

static void wdt_event_handler(void)
{
	// from example:
	//NOTE: The max amount of time we can spend in WDT
	// interrupt is two cycles of 32768[Hz] clock
	// - after that, reset occurs
}

static ret_code_t platform_watchdog_nrf52_initialize(platform_watchdog_driver_config_t* config)
{
    nrfx_wdt_config_t driver_config = NRFX_WDT_DEAFULT_CONFIG;

	nrfx_err_t err_code = nrfx_wdt_init(&driver_config, wdt_event_handler);
	APP_ERROR_CHECK(err_code);

	_Static_assert(sizeof(config->watchdog_channel_handle) >= sizeof(nrfx_wdt_channel_id), "watchdog_channel_handle too small!");

	err_code = nrfx_wdt_channel_alloc((nrfx_wdt_channel_id*)&config->watchdog_channel_handle);
	APP_ERROR_CHECK(err_code);

	return NRFX_SUCCESS;
}

static void platform_watchdog_nrf52_enable(void)
{
	nrfx_wdt_enable();
}

static void platform_watchdog_nrf52_disable(void)
{
	// not supported on this platform.
}

static void platform_watchdog_nrf52_feed(uint32_t channel_handle)
{
	nrfx_wdt_channel_feed(channel_handle);
}

platform_watchdog_driver_t platform_watchdog_nrf52 = {
	.initialize = platform_watchdog_nrf52_initialize,
	.enable = platform_watchdog_nrf52_enable,
	.disable = platform_watchdog_nrf52_disable,
	.feed = platform_watchdog_nrf52_feed,
};
