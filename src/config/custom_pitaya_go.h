#pragma once

/** SPI configurations, used for MicroSD Card on the Display */
#define SDC_SCK_PIN						NRF_GPIO_PIN_MAP(0, 16) ///< SDC serial clock (SCK) pin.
#define SDC_MOSI_PIN					NRF_GPIO_PIN_MAP(0, 14) ///< SDC serial data in (DI) pin.
#define SDC_MISO_PIN					NRF_GPIO_PIN_MAP(0, 15) ///< SDC serial data out (DO) pin.
#define SDC_CS_PIN						NRF_GPIO_PIN_MAP(0, 13) ///< SDC chip select (CS) pin.
#define APP_SDCARD_SPI_INSTANCE			0

/** SPI configurations, used for ILI9341 TFT controller */
#define ILI9341_SCK_PIN					NRF_GPIO_PIN_MAP(0, 21)
#define ILI9341_MISO_PIN				NRF_GPIO_PIN_MAP(0, 17)
#define ILI9341_MOSI_PIN				NRF_GPIO_PIN_MAP(0, 22)
#define ILI9341_SS_PIN					NRF_GPIO_PIN_MAP(0, 25)
#define ILI9341_DC_PIN					NRF_GPIO_PIN_MAP(0, 23)
#define ILI9341_RESET_PIN				NRF_GPIO_PIN_MAP(0, 24)
#define ILI9341_BACKLIGHT_CONTROL_PIN	NRF_GPIO_PIN_MAP(0, 20)
#define ILI9341_HEIGHT					320
#define ILI9341_WIDTH					240
#define ILI9341_SPI_INSTANCE			3

/** GPIO configurations, used for user input */
#define INPUT_BUTTON_UP_PIN				NRF_GPIO_PIN_MAP(0, 3)
#define INPUT_BUTTON_DOWN_PIN			NRF_GPIO_PIN_MAP(0, 28)
#define INPUT_BUTTON_LEFT_PIN			NRF_GPIO_PIN_MAP(0, 29)
#define INPUT_BUTTON_RIGHT_PIN			NRF_GPIO_PIN_MAP(0, 5)
#define INPUT_BUTTON_CENTER_PIN			NRF_GPIO_PIN_MAP(0, 4)
#define INPUT_BUTTON_EX1_PIN			NRF_GPIO_PIN_MAP(0, 31)
#define INPUT_BUTTON_EX2_PIN			NRF_GPIO_PIN_MAP(0, 30)

/** UART configurations, used for logging */
#define NRF_LOG_BACKEND_UART_TX_PIN		26

/** APA102 RGB LED*/
#define DISPLAY_APA102_ENABLED			1
#define DISPLAY_APA102_SPIM_INSTANCE	2
#define DISPLAY_APA102_SCK_PIN			NRF_GPIO_PIN_MAP(0, 26)
#define DISPLAY_APA102_MOSI_PIN			NRF_GPIO_PIN_MAP(0, 27)
#define DISPLAY_APA102_COLOR_ORDER		DISPLAY_RGB_COLOR_ORDER_RBG

// APA102 shares pins with the log UART, can only have one.
#if defined(DISPLAY_APA102_ENABLED) && DISPLAY_APA102_ENABLED == 1
#define NRF_LOG_BACKEND_UART_ENABLED 0
#endif // DISPLAY_APA102_ENABLED
