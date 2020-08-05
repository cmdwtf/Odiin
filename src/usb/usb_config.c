#include "usb_config.h"

#include <string.h>

#include "nrf_assert.h"

#define USB_PRODUCT_STRING_SIZE (32)

uint8_t g_extern_usb_device_manufacturer[USB_PRODUCT_STRING_SIZE + 1];
uint8_t g_extern_usb_device_product[USB_PRODUCT_STRING_SIZE + 1];

void app_usbd_product_strings_generate(void)
{
	ASSERT(strlen(PRODUCT_MANUFACTURER) <= USB_PRODUCT_STRING_SIZE);
	ASSERT(strlen(PRODUCT_NAME_SHORT) <= USB_PRODUCT_STRING_SIZE);

	memcpy(g_extern_usb_device_manufacturer, PRODUCT_MANUFACTURER, strlen(PRODUCT_MANUFACTURER));
	memcpy(g_extern_usb_device_product, PRODUCT_NAME_SHORT, strlen(PRODUCT_NAME_SHORT));
}
