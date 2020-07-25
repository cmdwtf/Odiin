#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "display_screen_ui_common.h"

#define UI_CREATE(uiName) UI_FUNCTION(uiName, create)()
#define UI_ACTIVATE(uiName, group) UI_FUNCTION(uiName, activate)(group)

	UI_DECLARE(boot);
	void UI_DECLARE_FUNCTION(boot, set_timeout)(lv_task_cb_t callback, uint32_t period);

	UI_DECLARE(usb);

	UI_DECLARE(main_menu);

#ifdef __cplusplus
} /* extern "C" */
#endif
