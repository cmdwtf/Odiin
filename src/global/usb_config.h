#pragma once

#include <stdint.h>
#include "app_usbd_langid.h"
#include "global_strings.h"

#define USB_VID									PRODUCT_USB_VID
#define USB_PID									PRODUCT_USB_PID

#define USB_DEVICE_VERSION_MAJOR				PRODUCT_VERSION_MAJOR
#define USB_DEVICE_VERSION_MINIOR				PRODUCT_VERSION_MINOR
#define USB_DEVICE_VERSION_SUB_MINOR			PRODUCT_VERSION_SUB_MINOR

#define USB_DEVICE_SELF_POWERED					1 // 1 for yes 'self powered', 0 for needs power
#define USB_DEVICE_MAX_POWER					100 // in mA

#define USB_DEVICE_USE_UTF8_STRINGS				1 // 1 for yes 'uses utf8', 0 for ASCII only

#define USB_DEVICE_LANGUAGE_IDS					APP_USBD_LANG_AND_SUBLANG(APP_USBD_LANG_ENGLISH, APP_USBD_SUBLANG_ENGLISH_US)

#define USB_DEVICE_MANUFACTURER					PRODUCT_MANUFACTURER
#define USB_DEVICE_PRODUCT						PRODUCT_NAME_SHORT
#define USB_DEVICE_SERIAL						"000000000001" // #todo generate serial
#define USB_DEVICE_CONFIGURATION_MODE_STRING	"Default configuration"

// Default values for user strings.
// This value stores all application specific user strings with the default initialization.
// The setup is done by X-macros.
//  Expected macro parameters:
//  X(mnemonic, [=str_idx], ...)
//  -  mnemonic: Mnemonic of the string descriptor that would be added to
//               @ref app_usbd_string_desc_idx_t enumerator.
//  -  str_idx : String index value, can be set or left empty.
//               For example, WinUSB driver requires descriptor to be present on 0xEE index.
//               Then use X(USBD_STRING_WINUSB, =0xEE, (APP_USBD_STRING_DESC(...)))
//  -  ...     : List of string descriptors for each defined language.
#define USB_STRINGS_USER \
	X(APP_USER_1, , APP_USBD_STRING_DESC(PRODUCT_MANUFACTURER_URL)) \
	X(APP_USER_2, , APP_USBD_STRING_DESC(PRODUCT_MANUFACTURER))
