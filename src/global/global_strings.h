#pragma once

#define PRODUCT_NAME				"Odiin"
#define PRODUCT_MANUFACTURER		"cmd.wtf"
#define PRODUCT_MANUFACTURER_SHORT	"cmd"
#define PRODUCT_MANUFACTURER_URL	"https://cmd.wtf"

#define PRODUCT_VERSION_MAJOR		0
#define PRODUCT_VERSION_MINOR		9
#define PRODUCT_VERSION_SUB_MINOR	0

#define PRODUCT_USB_VID				0x1209
#define PRODUCT_USB_PID				0xD110

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define PRODUCT_VERSION_STRING		STR(PRODUCT_VERSION_MAJOR) "." \
									STR(PRODUCT_VERSION_MINOR) "." \
									STR(PRODUCT_VERSION_SUB_MINOR)

#ifndef PRODUCT_GIT_HASH
#define PRODUCT_GIT_HASH 			0000000
#endif // PRODUCT_GIT_HASH

#define PRODUCT_NAME_SHORT 			PRODUCT_NAME

#define PRODUCT_NAME_FULL_BUILD		PRODUCT_NAME_SHORT " v" \
									PRODUCT_VERSION_STRING "-" \
									STR(PRODUCT_GIT_HASH)

#if defined(DEBUG)
#define PRODUCT_NAME_LONG			PRODUCT_NAME_FULL_BUILD
#else
#define PRODUCT_NAME_LONG			PRODUCT_NAME_SHORT " v" \
									PRODUCT_VERSION_STRING
#endif


#ifdef __cplusplus
extern "C" {
#endif

extern const char* const LoadingReasons[];
extern const char* const global_strings_loading_reason_random(void);

#ifdef __cplusplus
}
#endif
