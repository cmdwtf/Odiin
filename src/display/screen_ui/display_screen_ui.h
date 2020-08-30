#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "display_screen_ui_common.h"
#include "display_screen_ui_status_widget.h"

#define UI_CREATE(uiName) UI_FUNCTION(uiName, create)()
#define UI_ACTIVATE(uiName, group) UI_FUNCTION(uiName, activate)(group)

	UI_DECLARE(about);
	void UI_DECLARE_FUNCTION(about, set_cancel_callback)(lv_event_cb_t callback);

	UI_DECLARE(boot);
	void UI_DECLARE_FUNCTION(boot, set_timeout)(lv_task_cb_t callback, uint32_t period);

	UI_DECLARE(list_menu);
	void UI_DECLARE_FUNCTION(list_menu, set_options)(menu_option_desc_t options[], size_t numOptions);
	void UI_DECLARE_FUNCTION(list_menu, set_title)(const char* title);
	void UI_DECLARE_FUNCTION(list_menu, set_back_clicked_cb)(ui_common_simple_cb callback);
	void UI_DECLARE_FUNCTION(list_menu, set_option_selected_cb)(lv_event_cb_t callback);

	UI_DECLARE(nfct_active);
	void UI_DECLARE_FUNCTION(nfct_active, set_cancel_callback)(lv_event_cb_t callback);
	void UI_DECLARE_FUNCTION(nfct_active, set_title)(const char* title);

	UI_DECLARE(settings);
	void UI_DECLARE_FUNCTION(settings, set_done_callback)(ui_common_simple_cb cb);
	void UI_DECLARE_FUNCTION(settings, set_brightness_callback)(ui_common_float_cb cb);

	UI_DECLARE(usb);

#ifdef __cplusplus
} /* extern "C" */
#endif
