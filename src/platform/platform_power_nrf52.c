#include "platform_power.h"

#include "sdk_common.h"
#include "app_error.h"
#include "nrf_pwr_mgmt.h"

static bool nrf52_power_event_handler(nrf_pwr_mgmt_evt_t event);

static ret_code_t nrf52_power_initialize(void)
{
	ret_code_t ret = nrf_pwr_mgmt_init();
	APP_ERROR_CHECK(ret);

	NRF_PWR_MGMT_HANDLER_REGISTER(nrf52_power_event_handler, 0);

	return ret;
}

static void nrf52_power_update(void)
{
	nrf_pwr_mgmt_run();
}

static void nrf52_power_feed(void)
{
	nrf_pwr_mgmt_feed();
}

static void nrf52_power_shutdown(platform_power_shutdown_t mode)
{
	switch (mode)
	{
		case PLATFORM_POWER_SLEEP:
			nrf_pwr_mgmt_shutdown(NRF_PWR_MGMT_SHUTDOWN_GOTO_SYSOFF);
			break;
		case PLATFORM_POWER_OFF:
			nrf_pwr_mgmt_shutdown(NRF_PWR_MGMT_SHUTDOWN_STAY_IN_SYSOFF);
			break;
		case PLATFORM_POWER_DFU:
			nrf_pwr_mgmt_shutdown(NRF_PWR_MGMT_SHUTDOWN_GOTO_DFU);
			break;
		case PLATFORM_POWER_RESET:
			nrf_pwr_mgmt_shutdown(NRF_PWR_MGMT_SHUTDOWN_RESET);
			break;
		case PLATFORM_POWER_CONTINUE_SHUTDOWN:
			nrf_pwr_mgmt_shutdown(NRF_PWR_MGMT_SHUTDOWN_CONTINUE);
			break;
	}
}

static bool nrf52_power_event_handler(nrf_pwr_mgmt_evt_t event)
{
	if (platform_power_nrf52.event_handler == NULL)
	{
		return true;
	}

	switch (event)
	{
		case NRF_PWR_MGMT_EVT_PREPARE_WAKEUP:
			return platform_power_nrf52.event_handler(PLATFORM_POWER_EVENT_PREPARE_WAKEUP);
		case NRF_PWR_MGMT_EVT_PREPARE_SYSOFF:
			return platform_power_nrf52.event_handler(PLATFORM_POWER_EVENT_PREPARE_OFF);
		case NRF_PWR_MGMT_EVT_PREPARE_DFU:
			return platform_power_nrf52.event_handler(PLATFORM_POWER_EVENT_PREPARE_DFU);
		case NRF_PWR_MGMT_EVT_PREPARE_RESET:
			return platform_power_nrf52.event_handler(PLATFORM_POWER_EVENT_PREPARE_RESET);
		default:
			return true;
	}
}

platform_power_driver_t platform_power_nrf52 = {
	.initialize = nrf52_power_initialize,
	.update = nrf52_power_update,
	.feed = nrf52_power_feed,
	.shutdown = nrf52_power_shutdown,
};
