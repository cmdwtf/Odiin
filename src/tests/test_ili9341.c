#include "tests.h"

#include "sdk_config.h"

#ifdef ILI9341_ENABLED

#include "nrf_gfx.h"
#include "test_gfx_image.h"
#include "app_util_platform.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "boards.h"
#include "app_error.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#define GRAY 0xC618
#define RED 0xF800
#define BLUE 0x001F

#define LINE_STEP 10

#define CIRCLE_RADIUS 10
#define CIRCLE_STEP ((2 * CIRCLE_RADIUS) + 1)

#define BORDER 2

static const char *test_text = "POWMIING GFX!";

extern const nrf_gfx_font_desc_t orkney_24ptFontInfo;
extern const nrf_lcd_t lcd_ili9341;

static const nrf_gfx_font_desc_t *p_font = &orkney_24ptFontInfo;
static const nrf_lcd_t *p_lcd = &lcd_ili9341;

static void gfx_initialization(void)
{
	APP_ERROR_CHECK(nrf_gfx_init(p_lcd));
}

static void brackground_set(void)
{
	nrf_gfx_invert(p_lcd, true);
	nrf_gfx_background_set(p_lcd, nrf52);
	nrf_gfx_invert(p_lcd, false);
}

static void text_print(void)
{
	nrf_gfx_point_t text_start = NRF_GFX_POINT(5, nrf_gfx_height_get(p_lcd) - 50);
	APP_ERROR_CHECK(nrf_gfx_print(p_lcd, &text_start, 0, test_text, p_font, true));
}

static void screen_clear(void)
{
	nrf_gfx_screen_fill(p_lcd, GRAY);
}

static void line_draw(void)
{
	nrf_gfx_line_t my_line = NRF_GFX_LINE(0, 0, 0, nrf_gfx_height_get(p_lcd), 2);
	nrf_gfx_line_t my_line_2 = NRF_GFX_LINE(nrf_gfx_width_get(p_lcd), nrf_gfx_height_get(p_lcd), 0, nrf_gfx_height_get(p_lcd), 1);

	for (uint16_t i = 0; i <= nrf_gfx_width_get(p_lcd); i += LINE_STEP)
	{
		my_line.x_end = i;
		APP_ERROR_CHECK(nrf_gfx_line_draw(p_lcd, &my_line, RED));
	}

	my_line.x_end = nrf_gfx_width_get(p_lcd);

	for (uint16_t i = 0; i <= nrf_gfx_height_get(p_lcd); i += LINE_STEP)
	{
		my_line.y_end = (nrf_gfx_height_get(p_lcd) - i);
		APP_ERROR_CHECK(nrf_gfx_line_draw(p_lcd, &my_line, RED));
	}

	for (uint16_t i = 0; i <= nrf_gfx_height_get(p_lcd); i += LINE_STEP)
	{
		my_line_2.y_end = (nrf_gfx_height_get(p_lcd) - i);
		APP_ERROR_CHECK(nrf_gfx_line_draw(p_lcd, &my_line_2, BLUE));
	}

	my_line_2.y_end = 0;

	for (uint16_t i = 0; i <= nrf_gfx_width_get(p_lcd); i += LINE_STEP)
	{
		my_line_2.x_end = i;
		APP_ERROR_CHECK(nrf_gfx_line_draw(p_lcd, &my_line_2, BLUE));
	}
}

static void circle_draw(void)
{
	nrf_gfx_circle_t my_circle = NRF_GFX_CIRCLE(0, 0, CIRCLE_RADIUS);

	for (uint16_t j = 0; j <= nrf_gfx_height_get(p_lcd); j += CIRCLE_STEP)
	{
		my_circle.y = j;
		for (uint16_t i = 0; i <= nrf_gfx_width_get(p_lcd); i += CIRCLE_STEP)
		{
			my_circle.x = i;
			APP_ERROR_CHECK(nrf_gfx_circle_draw(p_lcd, &my_circle, BLUE, true));
		}
	}

	for (uint16_t j = CIRCLE_RADIUS; j <= nrf_gfx_height_get(p_lcd) + CIRCLE_RADIUS; j += CIRCLE_STEP)
	{
		my_circle.y = j;
		for (uint16_t i = CIRCLE_RADIUS; i <= nrf_gfx_width_get(p_lcd) + CIRCLE_RADIUS; i += CIRCLE_STEP)
		{
			my_circle.x = i;
			APP_ERROR_CHECK(nrf_gfx_circle_draw(p_lcd, &my_circle, RED, false));
		}
	}
}

static void rect_draw(void)
{
	nrf_gfx_rect_t my_rect = NRF_GFX_RECT(nrf_gfx_width_get(p_lcd) / 2,
										  nrf_gfx_height_get(p_lcd) / nrf_gfx_width_get(p_lcd),
										  nrf_gfx_height_get(p_lcd),
										  BORDER);
	nrf_gfx_rect_t my_rect_fill = NRF_GFX_RECT(nrf_gfx_width_get(p_lcd) / 2,
											   nrf_gfx_height_get(p_lcd) / nrf_gfx_width_get(p_lcd),
											   nrf_gfx_height_get(p_lcd),
											   BORDER);

	nrf_gfx_rotation_set(p_lcd, NRF_LCD_ROTATE_90);

	for (uint16_t i = 0, j = 0;
		 i <= (nrf_gfx_width_get(p_lcd) - (2 * BORDER)) / 2 &&
		 j <= (nrf_gfx_height_get(p_lcd) - (2 * BORDER)) / 2;
		 i += 6, j += 8)
	{
		my_rect.x = i;
		my_rect.y = j;
		my_rect_fill.x = i + BORDER;
		my_rect_fill.y = j + BORDER;
		my_rect.width = nrf_gfx_width_get(p_lcd) - i * 2;
		my_rect.height = nrf_gfx_height_get(p_lcd) - j * 2;
		my_rect_fill.width = nrf_gfx_width_get(p_lcd) - i * 2 - (2 * BORDER);
		my_rect_fill.height = nrf_gfx_height_get(p_lcd) - j * 2 - (2 * BORDER);

		// Draw using pseudo-random colors.
		APP_ERROR_CHECK(nrf_gfx_rect_draw(p_lcd, &my_rect, 2, ((i + j) * 10), false));
		APP_ERROR_CHECK(nrf_gfx_rect_draw(p_lcd, &my_rect_fill, 2, (UINT16_MAX - (i + j) * 10), true));
	}

	nrf_gfx_rotation_set(p_lcd, NRF_LCD_ROTATE_0);
}

#define GFX_TEST_LOG(...) \
	do { NRF_LOG_INFO(__VA_ARGS__); } while(0); \
	NRF_LOG_FLUSH();

void TEST_Gfx()
{
	GFX_TEST_LOG("TEST_Gfx start");
	gfx_initialization();

	uint32_t waitTimeMs = 1000;

	while (1)
	{
		GFX_TEST_LOG("background_set()");
		brackground_set();
		GFX_TEST_LOG("text_print()");
		text_print();
		GFX_TEST_LOG("waiting...");
		nrf_delay_ms(waitTimeMs);
		GFX_TEST_LOG("screen_clear()");
		screen_clear();
		GFX_TEST_LOG("line_draw()");
		line_draw();
		GFX_TEST_LOG("waiting...");
		nrf_delay_ms(waitTimeMs);
		GFX_TEST_LOG("screen_clear()");
		screen_clear();
		GFX_TEST_LOG("circle_draw()");
		circle_draw();
		GFX_TEST_LOG("waiting...");
		nrf_delay_ms(waitTimeMs);
		GFX_TEST_LOG("screen_clear");
		screen_clear();
		GFX_TEST_LOG("rect_draw()");
		rect_draw();
		GFX_TEST_LOG("waiting...");
		nrf_delay_ms(waitTimeMs);
	}
}

#endif // ILI9341_ENABLED
