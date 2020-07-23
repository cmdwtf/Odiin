/**
 * Copyright (c) 2017 - 2020, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "sdk_common.h"

#if NRF_MODULE_ENABLED(ILI9341)

#include "nrf_lcd.h"
#include "nrfx_spim.h"
#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "nrf_ringbuf.h"
#include "boards.h"
#include "nrf_log.h"

// Set of commands described in ILI9341 datasheet.
#define ILI9341_NOP         0x00
#define ILI9341_SWRESET     0x01
#define ILI9341_RDDID       0x04
#define ILI9341_RDDST       0x09

#define ILI9341_SLPIN       0x10
#define ILI9341_SLPOUT      0x11
#define ILI9341_PTLON       0x12
#define ILI9341_NORON       0x13

#define ILI9341_RDMODE      0x0A
#define ILI9341_RDMADCTL    0x0B
#define ILI9341_RDPIXFMT    0x0C
#define ILI9341_RDIMGFMT    0x0D
#define ILI9341_RDSELFDIAG  0x0F

#define ILI9341_INVOFF      0x20
#define ILI9341_INVON       0x21
#define ILI9341_GAMMASET    0x26
#define ILI9341_DISPOFF     0x28
#define ILI9341_DISPON      0x29

#define ILI9341_CASET       0x2A
#define ILI9341_PASET       0x2B
#define ILI9341_RAMWR       0x2C
#define ILI9341_RAMRD       0x2E

#define ILI9341_PTLAR       0x30
#define ILI9341_MADCTL      0x36
#define ILI9341_VSCRSADD    0x37
#define ILI9341_PIXFMT      0x3A

#define ILI9341_FRMCTR1     0xB1
#define ILI9341_FRMCTR2     0xB2
#define ILI9341_FRMCTR3     0xB3
#define ILI9341_INVCTR      0xB4
#define ILI9341_DFUNCTR     0xB6

#define ILI9341_PWCTR1      0xC0
#define ILI9341_PWCTR2      0xC1
#define ILI9341_PWCTR3      0xC2
#define ILI9341_PWCTR4      0xC3
#define ILI9341_PWCTR5      0xC4
#define ILI9341_VMCTR1      0xC5
#define ILI9341_VMCTR2      0xC7
#define ILI9341_PWCTRSEQ    0xCB
#define ILI9341_PWCTRA      0xCD
#define ILI9341_PWCTRB      0xCF

#define ILI9341_RDID1       0xDA
#define ILI9341_RDID2       0xDB
#define ILI9341_RDID3       0xDC
#define ILI9341_RDID4       0xDD

#define ILI9341_GMCTRP1     0xE0
#define ILI9341_GMCTRN1     0xE1
#define ILI9341_DGMCTR1     0xE2
#define ILI9341_DGMCTR2     0xE3
#define ILI9341_TIMCTRA     0xE8
#define ILI9341_TIMCTRB     0xEA

#define ILI9341_ENGMCTR     0xF2
#define ILI9341_INCTR       0xF6
#define ILI9341_PUMP        0xF7

#define ILI9341_MADCTL_MY  0x80
#define ILI9341_MADCTL_MX  0x40
#define ILI9341_MADCTL_MV  0x20
#define ILI9341_MADCTL_ML  0x10
#define ILI9341_MADCTL_RGB 0x00
#define ILI9341_MADCTL_BGR 0x08
#define ILI9341_MADCTL_MH  0x04

#if (ILI9341_SPI_INSTANCE != 3) && !defined(IL9341_SPI_ALLOW_SLOW_CLOCK)
#error "ILI9341_SPI_INSTANCE isn't set to SPI instance 3, and only 3 will allow clock speeds higher than 8 MHz. To allow this limit of 8 MHz, please define IL9341_SPI_ALLOW_SLOW_CLOCK."
#endif

#if !defined(IL9341_RING_BUFFER_SIZE)
#define IL9341_RING_BUFFER_SIZE 256
#endif

#define ILI9341_SPIM_XFER_FLAGS_NONE 0

#ifdef APP_ERROR_CHECK
#undef APP_ERROR_CHECK
#define APP_ERROR_CHECK(x)	\
	do { if (x != NRF_SUCCESS) NRF_LOG_ERROR("OOF (%d): %d", x, __LINE__); } while (0)
#endif

static const nrfx_spim_t spi = NRFX_SPIM_INSTANCE(ILI9341_SPI_INSTANCE);
NRF_RINGBUF_DEF(ili9341RingBuffer, IL9341_RING_BUFFER_SIZE);
static uint8_t ili9341CmdByteCount = 0;
static uint32_t ili9341DataByteCount = 0;
static bool autoCommitOnFullBuffer = true;
static volatile bool spiTransferInProgress = false;

static inline uint32_t spi_buffer_total_size()
{
	return (ili9341CmdByteCount + ili9341DataByteCount);
}

static inline uint32_t spi_buffer_total_remaining()
{
	return IL9341_RING_BUFFER_SIZE - (ili9341CmdByteCount + ili9341DataByteCount);
}

static inline void spi_event_handler(nrfx_spim_evt_t const * p_event,
									 void *                  p_context)
{
	if (p_event->type == NRFX_SPIM_EVENT_DONE)
	{
		// transfer done, we can go about our lives!
		spiTransferInProgress = false;
	}
}

static inline void spi_commit()
{
	static volatile bool internalLock = false;
	while (spiTransferInProgress || internalLock)
	{
		// let the OS handle things while we wait for the current
		// spi xfer to finish, so we can start a new one.
		__WFE();
	}

	internalLock = true;

	while (spi_buffer_total_size() > 0)
	{
		// mark a transfer as in progress, so we can't start a new one until our current finishes.
		spiTransferInProgress = true;

		// grab data from the buffer
		uint8_t* data = NULL;
		size_t bufferedByteLength = spi_buffer_total_size();
		//size_t totalBufferedByteLength = bufferedByteLength;
		APP_ERROR_CHECK(nrf_ringbuf_get(&ili9341RingBuffer, &data, &bufferedByteLength, false));

		// we won't be reading from the screen.
		uint8_t* dataReturn = NULL;
		uint8_t dataReturnSize = 0;

		uint8_t xferCommandByteCount = ili9341CmdByteCount;
		if (bufferedByteLength < ili9341CmdByteCount)
		{
			// we didn't get all the bytes out of the buffer, probably because it reached the end.
			// we will go ahead and write all these bytes as command bytes, and continue until the buffer
			// has been all sent.
			xferCommandByteCount = bufferedByteLength;
		}

		nrfx_spim_xfer_desc_t xfer_desc = NRFX_SPIM_XFER_TRX(data, bufferedByteLength, dataReturn, dataReturnSize);


		while (true)
		{
			// try to xmit until it works or fails. if it's not ready for a message, we'll just WFE and retry.
			nrfx_err_t xferStatus = nrfx_spim_xfer_dcx(&spi, &xfer_desc, ILI9341_SPIM_XFER_FLAGS_NONE, xferCommandByteCount);

			if (xferStatus == NRF_SUCCESS)
			{
				break;
			}
			else if (xferStatus == NRFX_ERROR_BUSY)
			{
				__WFE();
				continue;
			}
			else
			{
				APP_ERROR_CHECK(xferStatus);
				break;
			}
		}

		ili9341CmdByteCount -= xferCommandByteCount;
		ili9341DataByteCount -= (bufferedByteLength - xferCommandByteCount);

		APP_ERROR_CHECK(nrf_ringbuf_free(&ili9341RingBuffer, bufferedByteLength));
	}

	internalLock = false;
}

static void buffer_command_bytes(const uint8_t* commands, size_t commandsLength)
{
	if (ili9341CmdByteCount > 0 || ili9341DataByteCount > 0)
	{
		NRF_LOG_ERROR("Adding command bytes after the buffer has already been started has not been handled. Please commit before trying to add more command bytes.");
		return;
	}

	APP_ERROR_CHECK(nrf_ringbuf_cpy_put(&ili9341RingBuffer, commands, &commandsLength));
	ili9341CmdByteCount = commandsLength;
}


static void buffer_data_bytes(const uint8_t* data, size_t dataLength)
{
	if (spi_buffer_total_remaining() < dataLength)
	{
		if (autoCommitOnFullBuffer)
		{
			NRF_LOG_WARNING("SPI Ring Buffer full, committing before adding.");
			spi_commit();
		}
		else
		{
			NRF_LOG_ERROR("SPI Ring Buffer would overflow if %d more bytes were added. Please commit before adding more data, or increase the ring buffer size.");
		}
	}

	APP_ERROR_CHECK(nrf_ringbuf_cpy_put(&ili9341RingBuffer, data, &dataLength));
	ili9341DataByteCount += dataLength;
}

static inline void buffer_command(uint8_t c)
{
	buffer_command_bytes(&c, sizeof(c));
}

static inline void buffer_data(uint8_t c)
{
	buffer_data_bytes(&c, sizeof(c));
}

static void set_addr_window(uint16_t x_0, uint16_t y_0, uint16_t x_1, uint16_t y_1)
{
    ASSERT(x_0 <= x_1);
    ASSERT(y_0 <= y_1);

    buffer_command(ILI9341_CASET);
    buffer_data(x_0 >> 8);
    buffer_data(x_0);
    buffer_data(x_1 >> 8);
    buffer_data(x_1);
	spi_commit();
    buffer_command(ILI9341_PASET);
    buffer_data(y_0 >> 8);
    buffer_data(y_0);
    buffer_data(y_1 >> 8);
    buffer_data(y_1);
	spi_commit();
    buffer_command(ILI9341_RAMWR);
	spi_commit();
}

static void command_list(void)
{
    buffer_command(ILI9341_SWRESET);
	spi_commit();
    nrf_delay_ms(120);

    buffer_command(ILI9341_DISPOFF);
	spi_commit();
    nrf_delay_ms(120);

    buffer_command(ILI9341_PWCTRB);
    buffer_data(0x00);
    buffer_data(0XC1);
    buffer_data(0X30);
	spi_commit();

    buffer_command(ILI9341_TIMCTRA);
    buffer_data(0x85);
    buffer_data(0x00);
    buffer_data(0x78);
	spi_commit();

    buffer_command(ILI9341_PWCTRSEQ);
    buffer_data(0x39);
    buffer_data(0x2C);
    buffer_data(0x00);
    buffer_data(0x34);
    buffer_data(0x02);
	spi_commit();

    buffer_command(ILI9341_PUMP);
    buffer_data(0x20);
	spi_commit();

    buffer_command(ILI9341_TIMCTRB);
    buffer_data(0x00);
    buffer_data(0x00);
	spi_commit();

    buffer_command(ILI9341_PWCTR1);
    buffer_data(0x23);
	spi_commit();

    buffer_command(ILI9341_PWCTR2);
    buffer_data(0x10);
	spi_commit();

    buffer_command(ILI9341_VMCTR1);
    buffer_data(0x3e);
    buffer_data(0x28);
	spi_commit();

    buffer_command(ILI9341_VMCTR2);
    buffer_data(0x86);
	spi_commit();

    buffer_command(ILI9341_MADCTL);
    buffer_data(0x48);
	spi_commit();

    buffer_command(ILI9341_VSCRSADD);
    buffer_data(0x00);
	spi_commit();

    buffer_command(ILI9341_PIXFMT);
    buffer_data(0x55);
	spi_commit();

    buffer_command(ILI9341_FRMCTR1);
    buffer_data(0x00);
    buffer_data(0x18);
	spi_commit();

    buffer_command(ILI9341_DFUNCTR);
    buffer_data(0x08);
    buffer_data(0x82);
    buffer_data(0x27);
	spi_commit();

    buffer_command(ILI9341_ENGMCTR);
    buffer_data(0x00);
	spi_commit();

    buffer_command(ILI9341_GAMMASET);
    buffer_data(0x01);
	spi_commit();

    buffer_command(ILI9341_GMCTRP1);
    buffer_data(0x0F);
    buffer_data(0x31);
    buffer_data(0x2B);
    buffer_data(0x0C);
    buffer_data(0x0E);
    buffer_data(0x08);
    buffer_data(0x4E);
    buffer_data(0xF1);
    buffer_data(0x37);
    buffer_data(0x07);
    buffer_data(0x10);
    buffer_data(0x03);
    buffer_data(0x0E);
    buffer_data(0x09);
    buffer_data(0x00);
	spi_commit();

    buffer_command(ILI9341_GMCTRN1);
    buffer_data(0x00);
    buffer_data(0x0E);
    buffer_data(0x14);
    buffer_data(0x03);
    buffer_data(0x11);
    buffer_data(0x07);
    buffer_data(0x31);
    buffer_data(0xC1);
    buffer_data(0x48);
    buffer_data(0x08);
    buffer_data(0x0F);
    buffer_data(0x0C);
    buffer_data(0x31);
    buffer_data(0x36);
    buffer_data(0x0F);
	spi_commit();

    buffer_command(ILI9341_SLPOUT);
	spi_commit();
    nrf_delay_ms(120);

    buffer_command(ILI9341_DISPON);
	spi_commit();
    nrf_delay_ms(120);
}

static ret_code_t hardware_init(void)
{
    ret_code_t err_code;

    nrf_gpio_cfg_output(ILI9341_DC_PIN);
    nrf_gpio_cfg_output(ILI9341_RESET_PIN);
    nrf_gpio_cfg_output(ILI9341_BACKLIGHT_CONTROL_PIN);

	nrfx_spim_config_t spi_config = NRFX_SPIM_DEFAULT_CONFIG;

	// set frequency to max per spim instance.
	// 3 will allow us to operate at 32M, others only 8M.
#if (ILI9341_SPI_INSTANCE == 3) && defined(SPIM_FREQUENCY_FREQUENCY_M32)
	spi_config.frequency = NRF_SPIM_FREQ_32M;
#else
	spi_config.frequency = NRF_SPIM_FREQ_8M;
#endif

    spi_config.sck_pin  = ILI9341_SCK_PIN;
    spi_config.miso_pin = ILI9341_MISO_PIN;
    spi_config.mosi_pin = ILI9341_MOSI_PIN;
    spi_config.ss_pin   = ILI9341_SS_PIN;
	spi_config.dcx_pin  = ILI9341_DC_PIN;
    spi_config.use_hw_ss      = true;
    spi_config.ss_active_high = false;

    err_code = nrfx_spim_init(&spi, &spi_config, spi_event_handler, NULL);
	APP_ERROR_CHECK(err_code);

    nrf_gpio_pin_clear(ILI9341_RESET_PIN);
    nrf_delay_ms(20);
    nrf_gpio_pin_set(ILI9341_RESET_PIN);
    nrf_delay_ms(20);

    nrf_gpio_pin_set(ILI9341_BACKLIGHT_CONTROL_PIN);

    return err_code;
}

static ret_code_t ili9341_init(void)
{
    ret_code_t err_code;

	nrf_ringbuf_init(&ili9341RingBuffer);
	ili9341CmdByteCount = 0;
	ili9341DataByteCount = 0;

    err_code = hardware_init();
    if (err_code != NRF_SUCCESS)
    {
        return err_code;
    }

    command_list();

    return err_code;
}

static void ili9341_uninit(void)
{
    nrfx_spim_uninit(&spi);

    nrf_gpio_pin_clear(ILI9341_BACKLIGHT_CONTROL_PIN);

	nrf_ringbuf_init(&ili9341RingBuffer);
}

static void ili9341_pixel_draw(uint16_t x, uint16_t y, uint32_t color)
{
    set_addr_window(x, y, x, y);

    const uint8_t data[2] = {color >> 8, color};

    buffer_data_bytes(data, sizeof(data));
	spi_commit();
}

static void ili9341_rect_draw(uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint32_t color)
{
    set_addr_window(x, y, x + width - 1, y + height - 1);

    const uint8_t data[2] = {color >> 8, color};

    // Duff's device algorithm for optimizing loop.
    uint32_t i = (height * width + 7) / 8;

/*lint -save -e525 -e616 -e646 */
    switch ((height * width) % 8) {
        case 0:
            do {
                buffer_data_bytes(data, sizeof(data));
        case 7:
                buffer_data_bytes(data, sizeof(data));
        case 6:
                buffer_data_bytes(data, sizeof(data));
        case 5:
                buffer_data_bytes(data, sizeof(data));
        case 4:
                buffer_data_bytes(data, sizeof(data));
        case 3:
                buffer_data_bytes(data, sizeof(data));
        case 2:
                buffer_data_bytes(data, sizeof(data));
        case 1:
                buffer_data_bytes(data, sizeof(data));
				spi_commit();
            } while (--i > 0);
        default:
            break;
    }
/*lint -restore */
}

static void ili9341_dummy_display(void)
{
    /* No implementation needed. */
}

static void ili9341_rotation_set(nrf_lcd_rotation_t rotation)
{
    buffer_command(ILI9341_MADCTL);
    switch (rotation) {
        case NRF_LCD_ROTATE_0:
            buffer_data(ILI9341_MADCTL_MX | ILI9341_MADCTL_BGR);
            break;
        case NRF_LCD_ROTATE_90:
            buffer_data(ILI9341_MADCTL_MV | ILI9341_MADCTL_BGR);
            break;
        case NRF_LCD_ROTATE_180:
            buffer_data(ILI9341_MADCTL_MY | ILI9341_MADCTL_BGR);
            break;
        case NRF_LCD_ROTATE_270:
            buffer_data(ILI9341_MADCTL_MX | ILI9341_MADCTL_MY | ILI9341_MADCTL_MV | ILI9341_MADCTL_BGR);
            break;
        default:
            break;
    }
	spi_commit();
}

static void ili9341_display_invert(bool invert)
{
    buffer_command(invert ? ILI9341_INVON : ILI9341_INVOFF);
	spi_commit();
}

static lcd_cb_t ili9341_cb = {
    .height = ILI9341_HEIGHT,
    .width = ILI9341_WIDTH
};


const nrf_lcd_t nrf_lcd_ili9341 = {
    .lcd_init = ili9341_init,
    .lcd_uninit = ili9341_uninit,
    .lcd_pixel_draw = ili9341_pixel_draw,
    .lcd_rect_draw = ili9341_rect_draw,
    .lcd_display = ili9341_dummy_display,
    .lcd_rotation_set = ili9341_rotation_set,
    .lcd_display_invert = ili9341_display_invert,
    .p_lcd_cb = &ili9341_cb
};

#endif // NRF_MODULE_ENABLED(ILI9341)
