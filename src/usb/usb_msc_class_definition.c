#include "nrf.h"
#include "nrf_block_dev.h"
#include "nrf_block_dev_ram.h"
#include "nrf_block_dev_empty.h"
#include "nrf_block_dev_qspi.h"
#include "nrf_block_dev_sdc.h"
#include "nrf_drv_usbd.h"

#include "app_usbd.h"
#include "app_usbd_core.h"
#include "app_usbd_string_desc.h"
#include "app_usbd_msc.h"

#include "usb_config.h"

// This code is in a C file instead of C++,
// because "app_usbd_msc.h" uses a C-only enum forward declaration.
// Currently, I've just moved the actual enum up in the header, to
// make C++ files happy, but I'm leaving this here as I hope to revert
// to "off the shelf" for the SDK at some point in the future.

static void EventHandler(app_usbd_class_inst_t const *classInstance,
						 app_usbd_msc_user_event_t event)

{
	UNUSED_PARAMETER(classInstance);
	UNUSED_PARAMETER(event);
}


//Windows fails to format volumes smaller than 190KB
#define RAM_BLOCK_DEVICE_SIZE (380 * 512)
uint8_t usbMscBlockDevRam_buff[RAM_BLOCK_DEVICE_SIZE];

// ram block device define
NRF_BLOCK_DEV_RAM_DEFINE(
	usbMscBlockDevRam,
	NRF_BLOCK_DEV_RAM_CONFIG(512, usbMscBlockDevRam_buff, sizeof(usbMscBlockDevRam_buff)),
	NFR_BLOCK_DEV_INFO_CONFIG(USB_DEVICE_MANUFACTURER, "RAM", "1.00"));

#define BLOCKDEV_LIST() (                                	\
	NRF_BLOCKDEV_BASE_ADDR(usbMscBlockDevRam, block_dev),   \
)

#define ENDPOINT_LIST() APP_USBD_MSC_ENDPOINT_LIST(1, 1)

#define MSC_WORKBUFFER_SIZE (1024)

// create class instance
APP_USBD_MSC_GLOBAL_DEF(usbMscClassDefinition,
						0,
						EventHandler,
						ENDPOINT_LIST(),
						BLOCKDEV_LIST(),
						MSC_WORKBUFFER_SIZE);
