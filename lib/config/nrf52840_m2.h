/**
* Copyright (c) 2019 makerdiary
* All rights reserved.
* 
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
* * Redistributions of source code must retain the above copyright
*   notice, this list of conditions and the following disclaimer.
*
* * Redistributions in binary form must reproduce the above
*   copyright notice, this list of conditions and the following
*   disclaimer in the documentation and/or other materials provided
*   with the distribution.

* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
* OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/
#ifndef NRF52840_M2_H
#define NRF52840_M2_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_saadc.h"
#include "nrf_gpio.h"


// LED definitions for nRF52840-M2
// Each LED color is considered a separate LED
// LED_1 is mounted on the M.2 Dock and connected to D2(P1.07)
#define LEDS_NUMBER    4

#define LED_1          NRF_GPIO_PIN_MAP(1,7)  // Green LED on the M.2 Dock
#define LED_2          NRF_GPIO_PIN_MAP(0,30) // Red LED
#define LED_3          NRF_GPIO_PIN_MAP(0,29) // Green LED
#define LED_4          NRF_GPIO_PIN_MAP(0,31) // Blue LED
#define LED_START      LED_1
#define LED_STOP       LED_4

#define LEDS_ACTIVE_STATE 0

#define LEDS_LIST { LED_1, LED_2, LED_3, LED_4 }

#define LEDS_INV_MASK  LEDS_MASK

#define BSP_LED_0      LED_1
#define BSP_LED_1      LED_2
#define BSP_LED_2      LED_3
#define BSP_LED_3      LED_4

// The button is mounted on the M.2 Dock
#define BUTTONS_NUMBER 1

#define BUTTON_1       NRF_GPIO_PIN_MAP(0,19)
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { BUTTON_1 }

#define BSP_BUTTON_0   BUTTON_1

// Used for USB DFU trigger
#define BSP_SELF_PINRESET_PIN      NRF_GPIO_PIN_MAP(0,27)

/** UART configurations, only used for debug&test */
#define RX_PIN_NUMBER              NRF_GPIO_PIN_MAP(0,15)
#define TX_PIN_NUMBER              NRF_GPIO_PIN_MAP(0,16)
#define RTS_PIN_NUMBER             NRF_GPIO_PIN_MAP(0,14)
#define CTS_PIN_NUMBER             NRF_GPIO_PIN_MAP(0,13)
#define HWFC                       true

/** QSPI configurations, used for MX25R6435F flash */
#define BSP_QSPI_SCK_PIN           NRF_GPIO_PIN_MAP(1,11)
#define BSP_QSPI_CSN_PIN           NRF_GPIO_PIN_MAP(1,13)
#define BSP_QSPI_IO0_PIN           NRF_GPIO_PIN_MAP(1,10)
#define BSP_QSPI_IO1_PIN           NRF_GPIO_PIN_MAP(1,14)
#define BSP_QSPI_IO2_PIN           NRF_GPIO_PIN_MAP(1,15)
#define BSP_QSPI_IO3_PIN           NRF_GPIO_PIN_MAP(1,12)

/** SPI configurations, used for MicroSD Card */
#define SDC_SCK_PIN                NRF_GPIO_PIN_MAP(0,11)  ///< SDC serial clock (SCK) pin.
#define SDC_MOSI_PIN               NRF_GPIO_PIN_MAP(0,12)  ///< SDC serial data in (DI) pin.
#define SDC_MISO_PIN               NRF_GPIO_PIN_MAP(1,8)   ///< SDC serial data out (DO) pin.
#define SDC_CS_PIN                 NRF_GPIO_PIN_MAP(0,7)   ///< SDC chip select (CS) pin.

/** SPI configurations, used for ST7789V TFT controller */
#define ST7789_SCK_PIN             NRF_GPIO_PIN_MAP(0,11)  ///< ST7789V serial clock (SCK) pin.
#define ST7789_MOSI_PIN            NRF_GPIO_PIN_MAP(0,12)  ///< ST7789V serial data in (DI) pin.
#define ST7789_MISO_PIN            NRF_GPIO_PIN_MAP(1,8)   ///< ST7789V serial data out (DO) pin. NOT USED!
#define ST7789_SS_PIN              NRF_GPIO_PIN_MAP(0,6)   ///< ST7789V chip select (CS) pin.

#define ST7789_DC_PIN              NRF_GPIO_PIN_MAP(0,8)   ///< ST7789V CMD/DATA select (DC) pin.
#define ST7789_RST_PIN             NRF_GPIO_PIN_MAP(1,9)   ///< ST7789V RESET (RST) pin.
#define ST7789_BL_CTRL_PIN         NRF_GPIO_PIN_MAP(0,20)  ///< ST7789V backlight control pin.

/** Battery configurations */
/* Low when the battery is in charging.
 * When charging is complete and when charger is disabled, it becomes high-impendence */
#define BATT_CHRG_PIN                    NRF_GPIO_PIN_MAP(0,25)
#define BATT_VSENSE_PIN                  NRF_GPIO_PIN_MAP(0,5)
#define BATT_VSENSE_AIN                  NRF_SAADC_INPUT_AIN3

#define BATT_MEAS_INTERVAL_MS            2000 // Measurement interval [ms].
#define BATT_MEAS_LOW_BATT_LIMIT_MV      3100 // Cutoff voltage [mV].
#define BATT_MEAS_FULL_BATT_LIMIT_MV     4190 // Full charge definition [mV].
#define BATT_MEAS_VOLTAGE_TO_SOC_ELEMENTS 111 // Number of elements in the state of charge vector.
#define BATT_MEAS_VOLTAGE_TO_SOC_DELTA_MV  10 // mV between each element in the SoC vector.
#define BATT_VOLTAGE_DIVIDER_FACTOR         2 // Voltage divider factor: (R1+R2)/R2 = (1Mohm + 1Mohm)/1Mohm = 2

/** Converts voltage to state of charge (SoC) [%]. The first element corresponds to the voltage 
BATT_MEAS_LOW_BATT_LIMIT_MV and each element is BATT_MEAS_VOLTAGE_TO_SOC_DELTA_MV higher than the previous.
Numbers are obtained via model fed with experimental data. */
static const uint8_t BATT_MEAS_VOLTAGE_TO_SOC[] = { 
 0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,
 2,  2,  2,  2,  2,  2,  2,  2,  3,  3,  3,  3,  3,  3,  3,  4,  4,  4,  4,  4,
 4,  5,  5,  5,  6,  6,  7,  7,  8,  8,  9,  9, 10, 11, 12, 13, 13, 14, 15, 16,
18, 19, 22, 25, 28, 32, 36, 40, 44, 47, 51, 53, 56, 58, 60, 62, 64, 66, 67, 69,
71, 72, 74, 76, 77, 79, 81, 82, 84, 85, 85, 86, 86, 86, 87, 88, 88, 89, 90, 91,
91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 100};


// Arduino board mappings
#define ARDUINO_SCL_PIN             NRF_GPIO_PIN_MAP(1, 6)    // SCL signal pin
#define ARDUINO_SDA_PIN             NRF_GPIO_PIN_MAP(1, 5)    // SDA signal pin

#define ARDUINO_13_PIN              NRF_GPIO_PIN_MAP(1, 7)   // Digital pin 13
#define ARDUINO_12_PIN              NRF_GPIO_PIN_MAP(1, 4)   // Digital pin 12
#define ARDUINO_11_PIN              NRF_GPIO_PIN_MAP(1, 3)   // Digital pin 11
#define ARDUINO_10_PIN              NRF_GPIO_PIN_MAP(1, 2)   // Digital pin 10
#define ARDUINO_9_PIN               NRF_GPIO_PIN_MAP(1, 1)   // Digital pin 9
#define ARDUINO_8_PIN               NRF_GPIO_PIN_MAP(1, 0)   // Digital pin 8

#define ARDUINO_7_PIN               NRF_GPIO_PIN_MAP(0, 24)  // Digital pin 7
#define ARDUINO_6_PIN               NRF_GPIO_PIN_MAP(0, 23)  // Digital pin 6
#define ARDUINO_5_PIN               NRF_GPIO_PIN_MAP(0, 22)  // Digital pin 5
#define ARDUINO_4_PIN               NRF_GPIO_PIN_MAP(0, 21)  // Digital pin 4
#define ARDUINO_3_PIN               NRF_GPIO_PIN_MAP(0, 20)  // Digital pin 3
#define ARDUINO_2_PIN               NRF_GPIO_PIN_MAP(0, 19)  // Digital pin 2
#define ARDUINO_1_PIN               NRF_GPIO_PIN_MAP(0, 16)  // Digital pin 1
#define ARDUINO_0_PIN               NRF_GPIO_PIN_MAP(0, 15)  // Digital pin 0

#define ARDUINO_A0_PIN              2     // Analog channel 0
#define ARDUINO_A1_PIN              3     // Analog channel 1
#define ARDUINO_A2_PIN              28    // Analog channel 2
#define ARDUINO_A3_PIN              27    // Note: Used for GPIO(P0.27), NOT ADC
#define ARDUINO_A4_PIN              26    // Note: Used for GPIO(P0.26), NOT ADC
#define ARDUINO_A5_PIN              4     // Analog channel 5

#define GPIOS_LIST { \
    ARDUINO_0_PIN, \
    ARDUINO_1_PIN, \
    ARDUINO_2_PIN, \
    ARDUINO_3_PIN, \
    ARDUINO_4_PIN, \
    ARDUINO_5_PIN, \
    ARDUINO_6_PIN, \
    ARDUINO_7_PIN, \
    ARDUINO_8_PIN, \
    ARDUINO_9_PIN, \
    ARDUINO_10_PIN, \
    ARDUINO_11_PIN, \
    ARDUINO_12_PIN, \
    ARDUINO_13_PIN, \
    ARDUINO_SDA_PIN, \
    ARDUINO_SCL_PIN, \
    ARDUINO_A0_PIN, \
    ARDUINO_A1_PIN, \
    ARDUINO_A2_PIN, \
    ARDUINO_A3_PIN, \
    ARDUINO_A4_PIN, \
    ARDUINO_A5_PIN }

#define GPIOS_NUMBER  22

#ifdef __cplusplus
}
#endif

#endif // NRF52840_M2_H
