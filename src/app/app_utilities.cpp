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
