#include "app_utilities.h"
#include "app_logs.h"
#include "boards.h"
#include "nrf_delay.h"

void __PANIC()
{
	E("PANIC!");
	app_log_panic();

	while (true)
	{
		for (int i = 0; i < LEDS_NUMBER; i++)
		{
			bsp_board_led_invert(i);
			nrf_delay_ms(50);
		}
	}
}

void app_error_handler(ret_code_t error_code, uint32_t line_num, const uint8_t * p_file_name)
{
	NRF_LOG_ERROR("Application Error! Code: 0x%04X - %s:%d", error_code, p_file_name, line_num);
	__PANIC();
}

void app_error_fault_handler(uint32_t id, uint32_t pc, uint32_t info)
	{
	NRF_LOG_ERROR("Received a fault! id: 0x%08x, pc: 0x%08x, info: 0x%08x", id, pc, info);
	error_info_t errInfo = *((error_info_t*)info);
	NRF_LOG_ERROR("Error Code: 0x%04X - %s:%d", errInfo.err_code, errInfo.p_file_name, errInfo.line_num);
	__PANIC();
}
