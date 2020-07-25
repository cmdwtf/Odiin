#pragma once

#define PRODUCT_NAME				"Odiin"
#define PRODUCT_MANUFACTURER		"cmd.wtf"
#define PRODUCT_MANUFACTURER_SHORT	"cmd"
#define PRODUCT_MANUFACTURER_URL	"https://cmd.wtf"

#define PRODUCT_VERSION_MAJOR		0
#define PRODUCT_VERSION_MINOR		0
#define PRODUCT_VERSION_SUB_MINOR	1

#define PRODUCT_USB_VID				0xC001
#define PRODUCT_USB_PID				0xB4B3

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define PRODUCT_VERSION_STRING		STR(PRODUCT_VERSION_MAJOR) "." \
									STR(PRODUCT_VERSION_MINOR) "." \
									STR(PRODUCT_VERSION_SUB_MINOR)

#ifndef PRODUCT_GIT_HASH
#define PRODUCT_GIT_HASH 			"no-git-hash"
#endif // PRODUCT_GIT_HASH

#define PRODUCT_NAME_SHORT 			PRODUCT_NAME
#define PRODUCT_NAME_LONG			PRODUCT_NAME_SHORT " v" \
									PRODUCT_VERSION_STRING "." \
									PRODUCT_GIT_HASH

#ifdef __cplusplus
extern "C" {
#endif

extern const char* const LoadingReasons[];

#ifdef __cplusplus
}
#endif
