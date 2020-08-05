#include "global_data.h"

#include <stdint.h>

#include "nrf.h"
#include "nrf_block_dev.h"
#include "nrf_block_dev_sdc.h"
#include "nrf_drv_usbd.h"

#include "app_usbd.h"
#include "app_usbd_core.h"
#include "app_usbd_string_desc.h"
#include "app_usbd_msc.h"
#include "app_sdcard.h"

// This code is in a C file instead of C++, (in addition to in a single file)
// because "app_usbd_msc.h" uses a C-only enum forward declaration.
// Currently, I've just moved the actual enum up in the header, to
// make C++ files happy, but I'm leaving this here as I hope to revert
// to "off the shelf" for the SDK at some point in the future.

#include "global_sdc_block_device.i"

#include "global_usb_msc_class_definition.i"

const nrf_block_dev_sdc_t* get_sdc_block_device(void)
{
	return &__sdcBlockDevice;
}

const app_usbd_msc_t* get_usb_msc_class_definition(void)
{
	return &__usbMscClassDefinition;
}
