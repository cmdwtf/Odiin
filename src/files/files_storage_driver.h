#pragma once

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "stdint.h"
#include "stdlib.h"
#include "stdbool.h"

typedef enum
{
	FILES_STORAGE_SUCCESS = 0,
	FILES_STORAGE_ERROR_INTERNAL,
	FILES_STORAGE_ERROR_NO_MEM,
	FILES_STORAGE_ERROR_NOT_SUPPORTED,
	FILES_STORAGE_ERROR_INVALID_PARAM,
	FILES_STORAGE_ERROR_INVALID_STATE,
	FILES_STORAGE_ERROR_INVALID_LENGTH,
	FILES_STORAGE_ERROR_TIMEOUT,
	FILES_STORAGE_ERROR_FORBIDDEN,
	FILES_STORAGE_ERROR_NULL,
	FILES_STORAGE_ERROR_INVALID_ADDR,
	FILES_STORAGE_ERROR_BUSY,
	FILES_STORAGE_ERROR_ALREADY_INITIALIZED,
} files_storage_error_t;

typedef struct files_storage_info_s {
	bool initialized;
	size_t sector_size;
	size_t sector_count;
	size_t block_size;
	size_t block_count;
	int32_t (*configure_qspi)(void);
	const char* name;
} files_storage_info_t;

typedef struct files_storage_driver_s {
	files_storage_error_t (*initialize)(void);
	files_storage_error_t (*uninitialize)(void);
	files_storage_error_t (*read)(uint32_t address, uint8_t* buffer, size_t buffer_size);
	files_storage_error_t (*program)(uint32_t address, const uint8_t* data, size_t data_length);
	files_storage_error_t (*erase_sector)(uint32_t address);
	files_storage_error_t (*sync)(void);
	files_storage_info_t* info;
} files_storage_driver_t;

#ifdef __cplusplus
}
#endif // __cplusplus
