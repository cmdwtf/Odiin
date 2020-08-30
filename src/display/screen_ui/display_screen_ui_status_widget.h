#pragma once

#ifdef __cplusplus
extern "C" {
#endif

	#include "lvgl.h"

	lv_obj_t* ui_status_widget_get();
	void ui_status_widget_set_percentage(uint8_t battery_percent, bool is_charging);

#ifdef __cplusplus
}
#endif
