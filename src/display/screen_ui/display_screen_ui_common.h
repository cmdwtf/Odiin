#pragma once

#ifdef __cplusplus
extern "C" {
#endif


	#include "lvgl.h"

	//////////////////////////////////////////////////////////////////////////
	// MessageBox
	typedef struct msgbox_desc_s {
		lv_obj_t* parent;
		lv_group_t* group;
		const char* message_text;
		lv_event_cb_t event_cb;
		const char** button_map;
	} msgbox_desc_t;

	lv_obj_t* ui_common_msgbox_show(msgbox_desc_t* desc);

	//////////////////////////////////////////////////////////////////////////
	// Splash Window
	typedef struct splash_window_desc_s {
		const char* title;
		const char* instruction;
		const char* icon;
	} splash_window_desc_t;

	lv_obj_t* display_screen_ui_create_splash_window_screen(splash_window_desc_t* desc);

	//////////////////////////////////////////////////////////////////////////
	// Label Font switching
	void ui_common_set_label_font_icons64(lv_obj_t* label);
	void ui_common_set_label_font_theme_small(lv_obj_t* label);

	//////////////////////////////////////////////////////////////////////////
	// Macros for building UI screens
#define UI_CREATE_RETURN_TYPE lv_obj_t*
#define UI_FUNCTION(uiName, functionName) display_screen_ui_ ## uiName ## _ ## functionName
#define UI_DECLARE_CREATE(uiName) UI_CREATE_RETURN_TYPE UI_FUNCTION(uiName, create) (void)
#define UI_DECLARE_ACTIVATE(uiName) void UI_FUNCTION(uiName, activate) (lv_group_t* group)
#define UI_DECLARE_FUNCTION(uiName, func) UI_FUNCTION(uiName, func)
#define UI_DECLARE(uiName) UI_DECLARE_CREATE(uiName); UI_DECLARE_ACTIVATE(uiName)


	LV_FONT_CUSTOM_DECLARE;

#ifdef __cplusplus
} /* extern "C" */
#endif
