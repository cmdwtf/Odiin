/////////////////////////////////////////////////////////////////////
// APA102 RGB LED Support (also the very similar SK9822)
//
// First off, big props to Tim, who's work picking apart RGB LEDs
// is absolutely invaluable to bumbling fools like myself.
//
// Firstly, https://cpldcpu.wordpress.com/2014/11/30/understanding-the-apa102-superled/
// explains the data format of the APA102/SK9822 far better than the datasheets.
// As well, it explains the need for the end frame, and why you need more bits
// if you have longer strings of LEDs.
//
// As well, https://cpldcpu.wordpress.com/2016/12/13/sk9822-a-clone-of-the-apa102/
// explains the difference between the APA102 and the SK9822. Namely that they are
// very similar, but have plenty of tiny differences!
//
// That page also explains a protocol that will update both the APA102 *or*
// the SK9822, which is what is implemented here, minus the extended end frame for now.
//
// Supposedly, the APA102/SK9822 will drive at 24 or 30 MHz clock rates, but
// on the nRF52840, the only SPIM instance that suports higher than 8 MHz is
// SPIM3, which we will assume is taken by something higher priority, like a display.

#include "sdk_common.h"

#if defined(DISPLAY_APA102_ENABLED) && DISPLAY_APA102_ENABLED == 1

#include "display_apa102.h"

#include <stdbool.h>

#include "nrf_gpio.h"
#include "nrfx_spim.h"

#include "display_log_module.ii"

#define DISPLAY_APA102_FRAME_SIZE		4 // frames are 32 bits

static const uint8_t DISPLAY_APA102_BRIGTNESS_BASE_VALUE = 0b11100000;
static const nrfx_spim_t spi = NRFX_SPIM_INSTANCE(DISPLAY_APA102_SPIM_INSTANCE);

static bool display_apa102_initialized = false;

static inline void spi_write(const uint8_t* data, size_t data_length)
{
	const uint32_t flags = 0;
	nrfx_spim_xfer_desc_t xfer = NRFX_SPIM_XFER_TX(data, data_length);
	nrfx_err_t err = nrfx_spim_xfer(&spi, &xfer, flags);
	APP_ERROR_CHECK(err);
}

static ret_code_t display_apa102_initialize()
{
	if (display_apa102_initialized)
	{
		NRF_LOG_WARNING("display_apa102 already initialized.");
		return NRF_ERROR_MODULE_ALREADY_INITIALIZED;
	}

	nrfx_spim_config_t spi_config = NRFX_SPIM_DEFAULT_CONFIG;
    spi_config.sck_pin   = DISPLAY_APA102_SCK_PIN;
    spi_config.mosi_pin  = DISPLAY_APA102_MOSI_PIN;
    spi_config.miso_pin  = NRFX_SPIM_PIN_NOT_USED;
	spi_config.frequency = NRF_SPIM_FREQ_8M;
	spi_config.mode      = NRF_SPIM_MODE_0;

    nrfx_err_t err_code = nrfx_spim_init(&spi, &spi_config, NULL, NULL);
	APP_ERROR_CHECK(err_code);

	display_apa102_initialized = true;

	return err_code;
}

static void display_apa102_uninitialize()
{
	nrfx_spim_uninit(&spi);
	display_apa102_initialized = false;
}

static void display_apa102_set_leds(const display_rgb_led_color_t* led_colors, size_t led_count, uint8_t brightness)
{
	if (display_apa102_initialized == false)
	{
		return;
	}

	// reference value frames
	// they're not actually const, because we need them *not* in flash, and instead in ram.
	static uint8_t zero_frame[DISPLAY_APA102_FRAME_SIZE] = { 0x00, 0x00, 0x00, 0x00 };

	// constant frames
	static const uint8_t* start_frame = zero_frame;
	static const uint8_t* end_frame = zero_frame;
	static const uint8_t* sk9822_reset_frame = zero_frame;

	// start frame
	spi_write(start_frame, DISPLAY_APA102_FRAME_SIZE);

	uint8_t real_brightness = DISPLAY_APA102_BRIGTNESS_BASE_VALUE | (brightness & DISPLAY_APA102_BRIGHTNESS_MAX);

	for (size_t scan = 0; scan < led_count; ++scan)
	{
		const display_rgb_led_color_t* color = &led_colors[scan];

		uint8_t led_frame[DISPLAY_APA102_FRAME_SIZE] = { real_brightness,
#if (DISPLAY_APA102_COLOR_ORDER == DISPLAY_RGB_COLOR_ORDER_RGB)
		color->red, color->green, color->blue };
#elif (DISPLAY_APA102_COLOR_ORDER == DISPLAY_RGB_COLOR_ORDER_RBG)
		color->red, color->blue, color->green };
#elif (DISPLAY_APA102_COLOR_ORDER == DISPLAY_RGB_COLOR_ORDER_GRB)
		color->green, color->red, color->blue };
#elif (DISPLAY_APA102_COLOR_ORDER == DISPLAY_RGB_COLOR_ORDER_GBR)
		color->green, color->blue, color->red };
#elif (DISPLAY_APA102_COLOR_ORDER == DISPLAY_RGB_COLOR_ORDER_BRG)
		color->blue, color->red, color->green };
#elif (DISPLAY_APA102_COLOR_ORDER == DISPLAY_RGB_COLOR_ORDER_BGR)
		color->blue, color->green, color->red };
#else
#error "Unsupported color order."
#endif // DISPLAY_APA102_COLOR_ORDER

		spi_write(led_frame, DISPLAY_APA102_FRAME_SIZE);
	}

#if defined(DISPLAY_APA102_ENABLE_SK9822_RESET_FRAME) && DISPLAY_APA102_ENABLE_SK9822_RESET_FRAME == 1
	// sk9822 reset frame
	spi_write(sk9822_reset_frame, DISPLAY_APA102_FRAME_SIZE);
#endif // DISPLAY_APA102_ENABLE_SK9822_RESET_FRAME

	// end frame
	// this will only work for up to 64 leds (see cpldcpu post),
	// but that's enough for my purposes, so it can be future me's problem to fix.
	spi_write(end_frame, DISPLAY_APA102_FRAME_SIZE);
}

const display_rgb_led_driver_t display_apa102 = {
	.initialize = display_apa102_initialize,
	.uninitialize = display_apa102_uninitialize,
	.set_leds = display_apa102_set_leds,
	.default_brightness = DISPLAY_APA102_BRIGHTNESS_DEFAULT,
	.name = "APA102",
};

#endif // DISPLAY_APA102_ENABLED
