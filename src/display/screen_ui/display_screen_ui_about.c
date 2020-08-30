#include "display_screen_ui.h"

#include "global/global_strings.h"

#define UI_NAME about

static lv_obj_t* screen = NULL;
static lv_event_cb_t cancel_callback = NULL;
static lv_obj_t* cancel_button = NULL;
static lv_obj_t* window = NULL;

static void about_cancel_pressed(lv_obj_t* obj, lv_event_t e)
{
	if (e == LV_EVENT_CLICKED)
	{
		if (cancel_callback != NULL)
		{
			cancel_callback(obj, e);
		}
		else
		{
			// they aren't handling cancel,
			// we will delete our window
			// so we can be created again in the future.
			lv_win_close_event_cb(obj, e);
			lv_obj_del(screen);
			screen = NULL;
		}
	}
}

UI_DECLARE_CREATE(UI_NAME)
{
	if (screen != NULL)
	{
		cancel_callback = NULL;
		return screen;
	}

	LV_IMG_DECLARE(odiin_icon_48);
	static splash_window_desc_t desc = {
		.title = "About " PRODUCT_NAME_LONG,
		.instruction = PRODUCT_NAME_FULL_BUILD "\r\n"
		"By " PRODUCT_MANUFACTURER_SHORT " (" PRODUCT_MANUFACTURER_URL ")\r\n"
		"\r\n"
		"Dedicated to my incredible wife, Jordan.",
		.icon = NULL,
		.image = &odiin_icon_48,
		.header_button_text = LV_SYMBOL_LEFT,
		.header_button_cb = about_cancel_pressed,
	};

	screen = display_screen_ui_create_splash_window_screen(&desc);
	window = desc.return_window_obj;

	cancel_button = desc.return_header_button_obj;

	// bump the image down.
	lv_obj_set_y(desc.return_image_obj, lv_obj_get_y(desc.return_image_obj) + 40);

	return screen;
}

UI_DECLARE_ACTIVATE(UI_NAME)
{
	lv_scr_load(screen);
	lv_group_remove_all_objs(group);
	lv_group_add_obj(group, cancel_button);
	lv_group_focus_obj(cancel_button);

	// add status widget
	ui_status_widget_get(screen);
}

void UI_DECLARE_FUNCTION(UI_NAME, set_cancel_callback)(lv_event_cb_t callback)
{
	cancel_callback = callback;
}
