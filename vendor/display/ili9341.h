#pragma once

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "nrf_gfx.h"

// like nrf_lcd_t, but providing a few extra features.
typedef struct
{
	void (*raw_draw)(uint16_t x, uint16_t y, uint16_t width, uint16_t height, const uint16_t* colorBuffer);
	void (*sleep)();
	void (*wake)();
	volatile bool (*ready_for_command)();
	const nrf_lcd_t* p_lcd_base;
    lcd_cb_t* p_lcd_cb;
} nrf_lcd_ex_t;

extern const nrf_lcd_t lcd_ili9341;
extern const nrf_lcd_ex_t lcd_ili9341_ex;

#ifdef __cplusplus
}
#endif // __cplusplus
