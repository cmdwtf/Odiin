
#if defined(__VSCODE__CPP__)
// make vs code linter happy
#include "app_usbd_msc.h"
#endif // __VSCODE__CPP__

static void usb_msc_class_event_handler(app_usbd_class_inst_t const *classInstance,
						 				app_usbd_msc_user_event_t event)

{
	UNUSED_PARAMETER(classInstance);
	UNUSED_PARAMETER(event);
}

#define MSC_USB_INTERFACE_NUMBER	0

#define ENDPOINT_LIST() APP_USBD_MSC_ENDPOINT_LIST(1, 1)

// The blockdev list should have each block device we want to represent in it.
#define BLOCKDEV_LIST() (                                   \
    NRF_BLOCKDEV_BASE_ADDR(SDC_BLOCK_DEVICE, block_dev)		\
)

#define MSC_WORKBUFFER_SIZE (2048)

// create class instance
APP_USBD_MSC_GLOBAL_DEF(USB_MSC_CLASS_DEFINITION,
						MSC_USB_INTERFACE_NUMBER,
						usb_msc_class_event_handler,
						ENDPOINT_LIST(),
						BLOCKDEV_LIST(),
						MSC_WORKBUFFER_SIZE);
