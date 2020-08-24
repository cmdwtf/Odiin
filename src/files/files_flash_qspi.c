#include "files_flash_qspi.h"

#include "app_error.h"
#include "boards.h"
#include "nrfx_qspi.h"

#include "files_log_module.ii"

// return sucess if operation succeeded, or negative version of the error if it didn't
#define FLASH_QSPI_RETURN(result) return (result == NRFX_SUCCESS ? FILES_STORAGE_SUCCESS : -result)

static files_storage_error_t flash_qspi_initialize(void)
{
	if (files_flash_qspi_driver.info == NULL)
	{
		return FILES_STORAGE_ERROR_NULL;
	}

	if (files_flash_qspi_driver.info->initialized)
	{
		return FILES_STORAGE_ERROR_ALREADY_INITIALIZED;
	}

	nrfx_qspi_config_t config = NRFX_QSPI_DEFAULT_CONFIG;

	// rather than try and fight the sdk_config.h
	// to get the pins defined right per platform,
	// I'm just manually assigning them here.
	config.pins.sck_pin = BSP_QSPI_SCK_PIN;
	config.pins.csn_pin = BSP_QSPI_CSN_PIN;
	config.pins.io0_pin = BSP_QSPI_IO0_PIN;
	config.pins.io1_pin = BSP_QSPI_IO1_PIN;
	config.pins.io2_pin = BSP_QSPI_IO2_PIN;
	config.pins.io3_pin = BSP_QSPI_IO3_PIN;

	// for now, we will use blocking
	// qspi operations, so no handler or context to pass.
	nrfx_qspi_handler_t qspi_handler = NULL;
	void* context = NULL;

	nrfx_err_t result = nrfx_qspi_init(&config, qspi_handler, context);

	APP_ERROR_CHECK(result);

	files_flash_qspi_driver.info->initialized = true;

	NRF_LOG_VERBOSE("Flash initialized.");

	if (files_flash_qspi_driver.info->configure_qspi != NULL)
	{
		NRF_LOG_VERBOSE("Configuring QSPI communication.");

		if (files_flash_qspi_driver.info->configure_qspi() == NRFX_SUCCESS)
		{
			NRF_LOG_VERBOSE("QSPI command sent successfully, re-initializing in QSPI mode.")

			nrfx_qspi_uninit();
			files_flash_qspi_driver.info->initialized = false;

			config.prot_if.readoc = NRF_QSPI_READOC_READ4IO;
			config.prot_if.writeoc = NRF_QSPI_WRITEOC_PP4IO;
			result = nrfx_qspi_init(&config, qspi_handler, NULL);

			APP_ERROR_CHECK(result);

			files_flash_qspi_driver.info->initialized = true;
			NRF_LOG_VERBOSE("QSPI re-initialized.")

			return FILES_STORAGE_SUCCESS;
		}
		else
		{
			NRF_LOG_WARNING("Failed to send QSPI configuration command. Speeds may be limited to SPI.");
		}
	}
	else
	{
		NRF_LOG_WARNING("Flash initialized sucessfully, but the storage driver didn't have a QSPI configure function. Speeds may be limited to SPI.");
	}

	return FILES_STORAGE_SUCCESS;
}

static files_storage_error_t flash_qspi_uninitialize(void)
{
	if (files_flash_qspi_driver.info->initialized == false)
	{
		return FILES_STORAGE_SUCCESS;
	}

	nrfx_qspi_uninit();
	files_flash_qspi_driver.info->initialized = false;

	NRF_LOG_VERBOSE("Uninitialized QSPI Flash.");

	return FILES_STORAGE_SUCCESS;
}

static files_storage_error_t flash_qspi_read(uint32_t address, uint8_t* buffer, size_t buffer_size)
{
	nrfx_err_t result = nrfx_qspi_read(buffer, buffer_size, address);
	FLASH_QSPI_RETURN(result);
}

static files_storage_error_t flash_qspi_program(uint32_t address, const uint8_t* data, size_t data_length)
{
	nrfx_err_t result = nrfx_qspi_write(data, data_length, address);
	FLASH_QSPI_RETURN(result);
}

static files_storage_error_t flash_qspi_erase_sector(uint32_t address)
{
	nrfx_err_t result = nrfx_qspi_erase(files_flash_qspi_driver.info->sector_size, address);
	FLASH_QSPI_RETURN(result);
}

static files_storage_error_t flash_qspi_sync(void)
{
	// we are using qspi in blocking mode,
	// with no buffers. nothing to sync.
	return FILES_STORAGE_SUCCESS;
}

files_storage_driver_t files_flash_qspi_driver = {
	.initialize = flash_qspi_initialize,
	.uninitialize = flash_qspi_uninitialize,
	.read = flash_qspi_read,
	.program = flash_qspi_program,
	.erase_sector = flash_qspi_erase_sector,
	.sync = flash_qspi_sync,
	.info = NULL,
};
