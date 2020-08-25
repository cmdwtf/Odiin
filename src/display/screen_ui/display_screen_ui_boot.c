#include "display_screen_ui.h"

#include "crypto/crypto_true_random.h"
#include "global/global_strings.h"

#define UI_NAME boot

static lv_obj_t* screen = NULL;

UI_DECLARE_CREATE(UI_NAME)
{
	if (screen != NULL)
	{
		// #todo #refresh screen
		return screen;
	}

	screen = lv_obj_create(NULL, NULL);

	lv_obj_t* container = lv_cont_create(screen, NULL);

	lv_obj_set_auto_realign(container, true);
	lv_obj_align_origo(container, NULL, LV_ALIGN_CENTER, 0, 0);
	lv_cont_set_fit(container, LV_FIT_NONE);
	lv_cont_set_layout(container, LV_LAYOUT_COLUMN_MID);
	lv_obj_set_width_fit(container, lv_obj_get_width(screen));
	lv_obj_set_y(container, (lv_obj_get_height(screen) / 3) * 2);

	// main content
	lv_obj_t* labelProduct = lv_label_create(container, NULL);
	lv_label_set_long_mode(labelProduct, LV_LABEL_LONG_EXPAND);
	lv_label_set_text(labelProduct, PRODUCT_NAME_LONG);

	// pick a random loading reason
	lv_obj_t* labelReason = lv_label_create(screen, NULL);
	ui_common_set_label_font_theme_small(labelReason);
	lv_obj_refresh_style(labelReason, LV_LABEL_PART_MAIN);
	lv_label_set_long_mode(labelReason, LV_LABEL_LONG_SROLL);
	lv_label_set_align(labelReason, LV_LABEL_ALIGN_LEFT);
	lv_obj_align(labelReason, screen, LV_ALIGN_IN_BOTTOM_LEFT, 0, 0);
	lv_label_set_text(labelReason, global_strings_loading_reason_random());
	lv_obj_set_width_fit(labelReason, lv_obj_get_width(screen));

	return screen;
}

UI_DECLARE_ACTIVATE(UI_NAME)
{
	lv_scr_load(screen);
	// this screen has no intractable parts, no groups to set.
}

void UI_DECLARE_FUNCTION(UI_NAME, set_timeout)(lv_task_cb_t callback, uint32_t period)
{
	lv_task_t* task = lv_task_create(callback, period, LV_TASK_PRIO_HIGHEST, NULL);
	lv_task_once(task);
}
