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
#ifndef PITAYA_GO_H
#define PITAYA_GO_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_saadc.h"
#include "nrf_gpio.h"

/**
 * @brief Enumerator used for Pin definitions.
 */
typedef enum
{
    P13 = NRF_GPIO_PIN_MAP(0,13),
    P14 = NRF_GPIO_PIN_MAP(0,14),
    P15 = NRF_GPIO_PIN_MAP(0,15),
    P16 = NRF_GPIO_PIN_MAP(0,16),
    P17 = NRF_GPIO_PIN_MAP(0,17),
    P20 = NRF_GPIO_PIN_MAP(0,20),
    P21 = NRF_GPIO_PIN_MAP(0,21),
    P22 = NRF_GPIO_PIN_MAP(0,22),
    P23 = NRF_GPIO_PIN_MAP(0,23),
    P24 = NRF_GPIO_PIN_MAP(0,24),
    P25 = NRF_GPIO_PIN_MAP(0,25),
    P26 = NRF_GPIO_PIN_MAP(0,26),
    P27 = NRF_GPIO_PIN_MAP(0,27),
    A1  = NRF_GPIO_PIN_MAP(0,3),
    A2  = NRF_GPIO_PIN_MAP(0,4),
    A3  = NRF_GPIO_PIN_MAP(0,5),
    A4  = NRF_GPIO_PIN_MAP(0,28),
    A5  = NRF_GPIO_PIN_MAP(0,29),
    A6  = NRF_GPIO_PIN_MAP(0,30),
    A7  = NRF_GPIO_PIN_MAP(0,31)
} pitaya_go_pin_no_t;


// LED definitions for Pitaya-Go
// Each LED color is considered a separate LED
#define LEDS_NUMBER    3

#define LED_R          NRF_GPIO_PIN_MAP(1,10)
#define LED_G          NRF_GPIO_PIN_MAP(1,11)
#define LED_B          NRF_GPIO_PIN_MAP(1,12)

#define LED_1          LED_G
#define LED_2          LED_R
#define LED_3          LED_B

#define LEDS_ACTIVE_STATE 0

#define LEDS_LIST { LED_1, LED_2, LED_3 }

#define LEDS_INV_MASK  LEDS_MASK

#define BSP_LED_0      LED_1
#define BSP_LED_1      LED_2
#define BSP_LED_2      LED_3

#define LED_G_IDX      0
#define LED_R_IDX      1
#define LED_B_IDX      2

// There is only one button for the application
// as the second button is used for a RESET.
#define BUTTONS_NUMBER 1

#define BUTTON_1       NRF_GPIO_PIN_MAP(1,0)
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { BUTTON_1 }

#define BSP_BUTTON_0   BUTTON_1

#define BSP_SELF_PINRESET_PIN NRF_GPIO_PIN_MAP(0,19)

/** UART configurations, only used for debug&test */
#define RX_PIN_NUMBER              NRF_GPIO_PIN_MAP(0,27)
#define TX_PIN_NUMBER              NRF_GPIO_PIN_MAP(0,26)
#define HWFC                       (false)

/** QSPI configurations, used for MX25R6435F flash */
#define BSP_QSPI_SCK_PIN           NRF_GPIO_PIN_MAP(1,4)
#define BSP_QSPI_CSN_PIN           NRF_GPIO_PIN_MAP(1,3)
#define BSP_QSPI_IO0_PIN           NRF_GPIO_PIN_MAP(1,6)
#define BSP_QSPI_IO1_PIN           NRF_GPIO_PIN_MAP(1,1)
#define BSP_QSPI_IO2_PIN           NRF_GPIO_PIN_MAP(1,5)
#define BSP_QSPI_IO3_PIN           NRF_GPIO_PIN_MAP(1,2)

/** WINC1500 default configurations. */

/*
   ---------------------------------------
   ---------- PIN configurations ---------
   ---------------------------------------
*/
#define CONF_WINC_PIN_CHIP_ENABLE  NRF_GPIO_PIN_MAP(1,9)
#define CONF_WINC_PIN_WAKE         NRF_GPIO_PIN_MAP(1,14)
#define CONF_WINC_PIN_RESET        NRF_GPIO_PIN_MAP(0,12)

/*
   ---------------------------------------
   ---------- SPI configurations ---------
   ---------------------------------------
*/
#define CONF_WINC_USE_SPI		   (1)

/** SPI pin and instance configurations. */
#define CONF_WINC_SPI_INSTANCE     3
#define CONF_WINC_SPI_CS_GPIO      NRF_GPIO_PIN_MAP(0,11)
#define CONF_WINC_SPI_CLK_GPIO     NRF_GPIO_PIN_MAP(0,8)
#define CONF_WINC_SPI_MOSI_GPIO    NRF_GPIO_PIN_MAP(1,8)
#define CONF_WINC_SPI_MISO_GPIO    NRF_GPIO_PIN_MAP(0,7)

/** SPI interrupt pin. */
#define CONF_WINC_SPI_INT_PIN      NRF_GPIO_PIN_MAP(0,6)


/** Battery configurations */
/* Low when the battery is in charging.
 * When charging is complete and when charger is disabled, it becomes high-impendence */
#define BATT_CHRG_PIN                    NRF_GPIO_PIN_MAP(1,13)
#define BATT_PGOOD_PIN                   NRF_GPIO_PIN_MAP(1,15)  // Low when a valid USB input source is detected.
#define BATT_VSENSE_PIN                  NRF_GPIO_PIN_MAP(0,2)
#define BATT_VSENSE_AIN                  NRF_SAADC_INPUT_AIN0

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


#ifdef __cplusplus
}
#endif

#endif // PITAYA_GO_H
