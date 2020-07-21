
#if defined(__VSCODE__CPP__)
// make vs code linter happy
#include "nrf_block_dev_sdc.h"
#endif // __VSCODE__CPP__

#include "nrf52840_m2.h"

#define SDC_BLOCK_DEVICE __sdcBlockDevice
#define USB_MSC_CLASS_DEFINITION __usbMscClassDefinition

// Define the SD Card Block Device
NRF_BLOCK_DEV_SDC_DEFINE(
	SDC_BLOCK_DEVICE,
	NRF_BLOCK_DEV_SDC_CONFIG(
		SDC_SECTOR_SIZE,
		APP_SDCARD_CONFIG(SDC_MOSI_PIN, SDC_MISO_PIN, SDC_SCK_PIN, SDC_CS_PIN)
	),
	NFR_BLOCK_DEV_INFO_CONFIG(USB_DEVICE_MANUFACTURER, "SDC", "1.00")
);
