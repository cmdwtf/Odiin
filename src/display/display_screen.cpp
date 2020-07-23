#include "display_screen.h"

#include "display_log_module.ii"

#include "ili9341.h"

namespace Display
{
	namespace
	{
		extern "C" const nrf_gfx_font_desc_t orkney_8ptFontInfo;
		extern "C"  const nrf_gfx_font_desc_t orkney_24ptFontInfo;

		// #todo: configurable font
		static const nrf_gfx_font_desc_t *fontSmall = &orkney_8ptFontInfo;
		static const nrf_gfx_font_desc_t *fontBig = &orkney_24ptFontInfo;
		static const nrf_lcd_t *lcd = &lcd_ili9341;
	}

	Screen::Screen()
	{
		NRF_LOG_INFO("Initializing gfx...");
		ret_code_t initResult = nrf_gfx_init(lcd);

		if (initResult == NRF_SUCCESS)
		{
			NRF_LOG_INFO("Gfx ready!");
			initialized = true;
		}
		else
		{
			APP_ERROR_CHECK(initResult);
		}
	}

	Screen::~Screen()
	{
		if (initialized)
		{
			nrf_gfx_uninit(lcd);
			initialized = false;
			NRF_LOG_INFO("Gfx uninitialized.");
		}
	}

	void Screen::ClearBackground(color_t clearColor /*= BLACK*/)
	{
		nrf_gfx_screen_fill(lcd, clearColor);
	}

	void Screen::DrawText(const char* text, coord_t x, coord_t y, color_t fontColor /*= WHITE*/, bool wordWrap /*= true*/, bool big /*= true*/)
	{
		nrf_gfx_point_t location = NRF_GFX_POINT(x, y);
		APP_ERROR_CHECK(nrf_gfx_print(lcd, &location, fontColor, text, (big ? fontBig : fontSmall), wordWrap));
	}

} // namespace Display
