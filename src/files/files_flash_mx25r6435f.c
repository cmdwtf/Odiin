#include "files_flash_mx25r6435f.h"

#include "app_error.h"
#include "nrfx_qspi.h"

// via makerdiary qspi example and
// https://www.macronix.com/Lists/Datasheet/Attachments/7428/MX25R6435F,%20Wide%20Range,%2064Mb,%20v1.4.pdf
#define QSPI_STD_CMD_WRSR   	0x01
#define QSPI_STD_CMD_RSTEN  	0x66
#define QSPI_STD_CMD_RST    	0x99
#define QSPI_CMD_ENABLE_QSPI	0x40

int32_t files_flash_mx25r6435f_configure_qspi(void)
{
    nrfx_err_t err_code;
    nrf_qspi_cinstr_conf_t cinstr_cfg = {
        .opcode    = QSPI_STD_CMD_RSTEN,
        .length    = NRF_QSPI_CINSTR_LEN_1B,
        .io2_level = true,
        .io3_level = true,
        .wipwait   = true,
        .wren      = true
    };

    // Send reset enable
    err_code = nrfx_qspi_cinstr_xfer(&cinstr_cfg, NULL, NULL);
    APP_ERROR_CHECK(err_code);

    // Send reset command
    cinstr_cfg.opcode = QSPI_STD_CMD_RST;
    err_code = nrfx_qspi_cinstr_xfer(&cinstr_cfg, NULL, NULL);
    APP_ERROR_CHECK(err_code);

    // Switch to qspi mode
    cinstr_cfg.opcode = QSPI_STD_CMD_WRSR;
    cinstr_cfg.length = NRF_QSPI_CINSTR_LEN_2B;
    uint8_t enable_qspi_cmd = QSPI_CMD_ENABLE_QSPI;
    err_code = nrfx_qspi_cinstr_xfer(&cinstr_cfg, &enable_qspi_cmd, NULL);
    APP_ERROR_CHECK(err_code);

	return NRFX_SUCCESS;
}

// [ref: 1.General]
static const int32_t bytes_in_kb = 1024;
static const int32_t kb_in_mb = 1024;
static const int32_t files_flash_mx25r6435f_size_bytes = 64 * kb_in_mb * bytes_in_kb;
static const int32_t files_flash_mx25r6435f_sector_size =  4 * bytes_in_kb;
//static const int32_t files_flash_mx25r6435f_block_size_sm = 32 * bytes_in_kb;
static const int32_t files_flash_mx25r6435f_block_size_lg = 64 * bytes_in_kb;
static const int32_t files_flash_mx25r6435f_sector_count = files_flash_mx25r6435f_size_bytes / files_flash_mx25r6435f_sector_size;
//static const int32_t files_flash_mx25r6435f_block_count_sm = files_flash_mx25r6435f_size_bytes / files_flash_mx25r6435f_block_size_sm;
static const int32_t files_flash_mx25r6435f_block_count_lg = files_flash_mx25r6435f_size_bytes / files_flash_mx25r6435f_block_size_lg;

files_storage_info_t files_flash_mx25r6435f_info = {
	.initialized = false,
	.configure_qspi = files_flash_mx25r6435f_configure_qspi,

	.sector_size = files_flash_mx25r6435f_sector_size,
	.sector_count = files_flash_mx25r6435f_sector_count,

	.block_size = files_flash_mx25r6435f_block_size_lg,
	.block_count = files_flash_mx25r6435f_block_count_lg,

	.name = "MX25R6435F",
};
