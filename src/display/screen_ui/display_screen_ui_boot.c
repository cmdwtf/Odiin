#include "display_screen_ui.h"

#include "crypto/crypto_true_random.h"
#include "global/global_strings.h"

#define UI_NAME boot

static lv_obj_t* screen = NULL;
static lv_obj_t* container = NULL;
static lv_obj_t* label_product = NULL;
static lv_obj_t* label_reason = NULL;

UI_DECLARE_CREATE(UI_NAME)
{
	if (screen != NULL)
	{
		// pick a new random loading reason
		lv_label_set_text(label_reason, global_strings_loading_reason_random());
		return screen;
	}

	screen = lv_obj_create(NULL, NULL);

	container = lv_cont_create(screen, NULL);
	lv_obj_set_auto_realign(container, true);
	lv_obj_align_origo(container, NULL, LV_ALIGN_CENTER, 0, 0);
	lv_cont_set_fit(container, LV_FIT_NONE);
	lv_cont_set_layout(container, LV_LAYOUT_COLUMN_MID);
	lv_obj_set_width_fit(container, lv_obj_get_width(screen));
	lv_obj_set_y(container, (lv_obj_get_height(screen) / 3) * 2);

	// main content
	label_product = lv_label_create(container, NULL);
	lv_label_set_long_mode(label_product, LV_LABEL_LONG_EXPAND);
	lv_label_set_text(label_product, PRODUCT_NAME_LONG);

	// pick a random loading reason
	label_reason = lv_label_create(screen, NULL);
	ui_common_set_label_font_theme_small(label_reason);
	lv_obj_refresh_style(label_reason, LV_LABEL_PART_MAIN, LV_STYLE_PROP_ALL);
	lv_label_set_long_mode(label_reason, LV_LABEL_LONG_SROLL);
	lv_label_set_align(label_reason, LV_LABEL_ALIGN_LEFT);
	lv_obj_align(label_reason, screen, LV_ALIGN_IN_BOTTOM_LEFT, 0, 0);
	lv_label_set_text(label_reason, global_strings_loading_reason_random());
	lv_obj_set_width_fit(label_reason, lv_obj_get_width(screen));

	return screen;
}

UI_DECLARE_ACTIVATE(UI_NAME)
{
	lv_scr_load(screen);
	lv_group_set_focus_cb(group, NULL);
	lv_group_remove_all_objs(group);
	// this screen has no intractable parts, no groups to set.

	// add status widget
	ui_status_widget_get(screen);
}

void UI_DECLARE_FUNCTION(UI_NAME, set_timeout)(lv_task_cb_t callback, uint32_t period)
{
	lv_task_t* task = lv_task_create(callback, period, LV_TASK_PRIO_HIGHEST, NULL);
	lv_task_once(task);
}
