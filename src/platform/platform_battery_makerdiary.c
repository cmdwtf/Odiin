#include "platform_battery.h"

#include "app_error.h"
#include "boards.h"
#include "nrf_pwr_mgmt.h"
#include "nrfx_saadc.h"
#include "sdk_common.h"

static uint16_t makerdiary_voltage_mv = 0;
static uint8_t makerdiary_charge_percent = 0;
static bool makerdiary_is_charging = false;

#define MAKERDIARY_SAADC_CHANNEL 0

static void saadc_callback_noop(nrfx_saadc_evt_t const* p_event)
{
	//if (p_event->type == NRFX_SAADC_EVT_DONE) { }
}

static ret_code_t makerdiary_battery_initialize(void)
{
	ret_code_t err_code;

	nrfx_saadc_config_t saadc_config = NRFX_SAADC_DEFAULT_CONFIG;
	nrf_saadc_channel_config_t channel_config = NRFX_SAADC_DEFAULT_CHANNEL_CONFIG_SE(BATT_VSENSE_AIN);

	nrf_gpio_cfg_input(BATT_CHRG_PIN, NRF_GPIO_PIN_NOPULL);

	// Burst enabled to oversample the SAADC.
	channel_config.burst    = NRF_SAADC_BURST_ENABLED;
	channel_config.acq_time = NRF_SAADC_ACQTIME_40US;

	// initialize the adc. callback can't be NULL, so we have a noop callbck.
	err_code = nrfx_saadc_init(&saadc_config, saadc_callback_noop);
	APP_ERROR_CHECK(err_code);

	err_code = nrfx_saadc_channel_init(MAKERDIARY_SAADC_CHANNEL, &channel_config);
	APP_ERROR_CHECK(err_code);

	return err_code;
}

static void makerdiary_battery_update(void)
{
	// based on code from battery_status example
	ret_code_t err_code;
	nrf_saadc_value_t adc_value = 0;

	err_code = nrfx_saadc_sample_convert(MAKERDIARY_SAADC_CHANNEL, &adc_value);
	APP_ERROR_CHECK(err_code);

	makerdiary_voltage_mv = adc_value * 3600 * BATT_VOLTAGE_DIVIDER_FACTOR / 1024;

	int16_t soc_vector_element = (makerdiary_voltage_mv - BATT_MEAS_LOW_BATT_LIMIT_MV) /
								 BATT_MEAS_VOLTAGE_TO_SOC_DELTA_MV;

	// Ensure that only valid vector entries are used.
	if (soc_vector_element < 0)
	{
		soc_vector_element = 0;
	}
	else if (soc_vector_element > (BATT_MEAS_VOLTAGE_TO_SOC_ELEMENTS - 1))
	{
		soc_vector_element = (BATT_MEAS_VOLTAGE_TO_SOC_ELEMENTS - 1);
	}

	makerdiary_charge_percent = BATT_MEAS_VOLTAGE_TO_SOC[soc_vector_element];

	makerdiary_is_charging = !(bool)nrf_gpio_pin_read(BATT_CHRG_PIN);
}

static uint8_t makerdiary_battery_get_percentage(void)
{
	return makerdiary_charge_percent;
}

static uint16_t makerdiary_battery_get_voltage(void)
{
	return makerdiary_voltage_mv;
}

static bool makerdiary_battery_get_is_charging(void)
{
	return makerdiary_is_charging;
}

platform_battery_driver_t platform_battery_makerdiary = {
	.initialize = makerdiary_battery_initialize,
	.update = makerdiary_battery_update,
	.get_battery_percent = makerdiary_battery_get_percentage,
	.get_battery_voltage = makerdiary_battery_get_voltage,
	.get_battery_is_charging = makerdiary_battery_get_is_charging,
};
