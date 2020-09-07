#include "display_screen.h"

#include "app_timer.h"
#include "boards.h"
#include "ili9341.h"
#include "lvgl.h"
#include "nrf_gfx.h"

#include "screen_ui/display_screen_ui.h"
#include "led/display_led_pwm.h"

#include "display_log_module.ii"

APP_TIMER_DEF(display_screen_tick_timer);

namespace display
{
	namespace
	{
		//////////////////////////////////////////////////////////////////////////
		// Display Buffer
		constexpr uint32_t displayBufferPixelCount = LV_HOR_RES_MAX * 10; // 10 scanlines is suggested.
		static lv_disp_buf_t displayBuffer;
		static lv_color_t displayBuffer0[displayBufferPixelCount];
		static lv_color_t displayBuffer1[displayBufferPixelCount];

		//////////////////////////////////////////////////////////////////////////
		// Display Driver
		static const nrf_lcd_t *lcd = &lcd_ili9341;			// the graphics hardware
		static const nrf_lcd_ex_t *lcdEx = &lcd_ili9341_ex;	// the graphics hardware, bonus fns
		lv_disp_t* display = nullptr;						// the graphics middleware
		void lvFlushCallback(lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p);

		extern const nrf_lcd_t nrf_lcd_ili9341;

		//////////////////////////////////////////////////////////////////////////
		// Backlight driver

		static led::RgbLedColorBufferDescriptor* GetBacklightBufferDescriptor()
		{
			static led::RgbLedColorBuffer<1> data;
			return &data;
		}

		static const display_led_rgb_driver_t* BacklightDriver = &display_led_pwm;

		static const display_led_rgb_driver_config_t* GetBacklightPwmDriverConfig()
		{
			DISPLAY_LED_RGB_DRIVER_CONFIG_DEFINE(pwm_cfg, 1);
			pwm_cfg.pins[0].pin = ILI9341_BACKLIGHT_CONTROL_PIN;
			pwm_cfg.invert_polarity = false;
			return &pwm_cfg;
		}
	}

	Screen::Screen(input::Keypad* _keypad, float initialBacklight /*= 1.0f*/) :
		backlight(GetBacklightBufferDescriptor(), BacklightDriver, GetBacklightPwmDriverConfig())
	{
		if (initialized)
		{
			NRF_LOG_INFO("A Display::Screen was created after one was already initialized. This use case is not supported.");
			return;
		}

		keypad = _keypad;

		NRF_LOG_INFO("Initializing gfx hardware...");
		ret_code_t initResult = nrf_gfx_init(lcd);

		if (initResult != NRF_SUCCESS)
		{
			NRF_LOG_ERROR("Failed to initialize gfx hardware!");
			APP_ERROR_CHECK(initResult);
			return;
		}

		// and init the backlight, too.
		InitializeBacklight(initialBacklight);

		NRF_LOG_VERBOSE("Initializing gfx lvgl...");
		lv_init();

		NRF_LOG_VERBOSE("Creating timer event for gfx...");
		ret_code_t timerResult = app_timer_create(&display_screen_tick_timer,
												  APP_TIMER_MODE_REPEATED,
												  Screen::Tick);
		APP_ERROR_CHECK(timerResult);

		NRF_LOG_VERBOSE("Initializing gfx display buffers...");
		lv_disp_buf_init(&displayBuffer, displayBuffer0, displayBuffer1, displayBufferPixelCount);

		NRF_LOG_VERBOSE("Initializing gfx display driver...");
		lv_disp_drv_t displayDriver; // docs say this can be local.
		lv_disp_drv_init(&displayDriver);

		NRF_LOG_VERBOSE("Registering gfx display driver...");
		displayDriver.buffer = &displayBuffer;
		displayDriver.flush_cb = lvFlushCallback;
		// displayDriver.monitor_cb = nullptr; // #perf monitoring later
		displayDriver.rotated = 1;
		displayDriver.color_chroma_key = LV_COLOR_MAGENTA;
		displayDriver.user_data = this;
		display = lv_disp_drv_register(&displayDriver);

		if (displayDriver.rotated)
		{
			lcd->lcd_rotation_set(NRF_LCD_ROTATE_90);
		}

		NRF_LOG_VERBOSE("Starting gfx timer...");
		uint32_t ticks = APP_TIMER_TICKS(GraphicsTickMs);
		timerResult = app_timer_start(display_screen_tick_timer, ticks, this);
		APP_ERROR_CHECK(timerResult);

		NRF_LOG_INFO("Gfx ready!");

		initialized = true;
	}

	Screen::~Screen()
	{
		if (initialized)
		{
			BacklightOffImmediate();
			lv_deinit();
			nrf_gfx_uninit(lcd);
			initialized = false;
			NRF_LOG_INFO("Gfx uninitialized.");
		}
	}

	void Screen::InitializeBacklight(float initialBrightness)
	{
		NRF_LOG_VERBOSE("Starting backlight PWM...");
		lastBacklightBrightness = initialBrightness;
		BacklightOn();
	}

	void Screen::Update(float timeDelta)
	{
		if (initialized)
		{
			lv_task_handler();
			backlight.Update(timeDelta);
		}
	}

	void Screen::Tick(void* context)
	{
		Screen* that = (Screen*)context;
		if (that->initialized)
		{
			lv_tick_inc(GraphicsTickMs);
		}
	}

	void Screen::BacklightOn()
	{
		static led::effect::Interpolate animateOn(
			led::effect::Color(0),
			led::effect::ColorFromFloat(lastBacklightBrightness),
			BacklightAnimationDurationSlow
		);
		animateOn.Reset();
		backlight.SetEffect(&animateOn);
	}

	void Screen::BacklightOff()
	{
		static led::effect::Interpolate animateOff(
			led::effect::ColorFromFloat(lastBacklightBrightness),
			led::effect::Color(0),
			BacklightAnimationDurationSlow
		);
		animateOff.Reset();
		backlight.SetEffect(&animateOff);
	}

	void Screen::BacklightOffImmediate()
	{
		// no animation, just turn it off.
		static led::effect::Static off(
			led::effect::Color(0)
		);
		off.Reset();
		backlight.SetEffect(&off);
	}

	void Screen::SetBacklightBrightness(float brightnessPercent)
	{
		static led::effect::Interpolate animate(
			led::effect::ColorFromFloat(lastBacklightBrightness),
			led::effect::ColorFromFloat(brightnessPercent),
			BacklightAnimationDurationFast
		);

		// our colors may change, so since the static constructor only rusn once, set them.
		animate.SetStartColor(led::effect::ColorFromFloat(lastBacklightBrightness));
		animate.SetEndColor(led::effect::ColorFromFloat(brightnessPercent));

		animate.Reset();

		backlight.SetEffect(&animate);

		// store new 'last' brightness.
		lastBacklightBrightness = brightnessPercent;
	}

	void Screen::SetBatteryStatus(uint8_t stateOfCharge, bool isCharging)
	{
		ui_status_widget_set_percentage(stateOfCharge, isCharging);
	}

	void Screen::DisplaySleep()
	{
		if (initialized)
		{
			lcdEx->sleep();
		}
	}

	void Screen::DisplayWake()
	{
		if (initialized)
		{
			lcdEx->wake();
		}
	}

	namespace
	{
		void lvFlushCallback(lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p)
		{
			lv_coord_t hres = disp_drv->rotated == 0 ? disp_drv->hor_res : disp_drv->ver_res;
			lv_coord_t vres = disp_drv->rotated == 0 ? disp_drv->ver_res : disp_drv->hor_res;

			// Return if the area is out the screen
			if(area->x2 < 0 || area->y2 < 0 || area->x1 > hres - 1 || area->y1 > vres - 1)
			{

				lv_disp_flush_ready(disp_drv);
				return;
			}

			// grab our width and hight to give to the draw
			uint16_t x = area->x1;
			uint16_t y = area->y1;
			uint16_t width = lv_area_get_width(area);
			uint16_t height = lv_area_get_height(area);

			// make sure we actually fit our data before we go passing it all willy nilly.
			static_assert(sizeof(uint16_t) == sizeof(lv_color_t));

			// we are all set up to draw. we just need to wait and make sure
			// that the driver is ready for us to actually hand it the next bit.
			while (lcdEx->ready_for_command() == false)
			{
				__WFE();
			}

			// ship it!
			lcdEx->raw_draw(x, y, width, height, (const uint16_t*)color_p);

			lv_disp_flush_ready(disp_drv);
		}
	}

} // namespace display
