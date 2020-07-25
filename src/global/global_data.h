#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "app_usbd_msc.h"
#include "nrf_block_dev_sdc.h"

const nrf_block_dev_sdc_t* get_sdc_block_device(void);
const app_usbd_msc_t* get_usb_msc_class_definition(void);

#ifdef __cplusplus
}
#endif
