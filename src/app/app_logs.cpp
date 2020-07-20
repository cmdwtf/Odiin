#include "app_logs.h"

#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#include "app_usbd.h"

void app_log_init()
{
	ret_code_t err_code = NRF_LOG_INIT(app_usbd_sof_timestamp_get);
	APP_ERROR_CHECK(err_code);

	NRF_LOG_DEFAULT_BACKENDS_INIT();
}

void app_log_panic()
{
	NRF_LOG_FINAL_FLUSH();
	nrf_log_panic();
}

void app_log_flush()
{
	NRF_LOG_FLUSH();
}
