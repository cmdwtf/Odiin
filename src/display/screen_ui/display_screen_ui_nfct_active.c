#include "display_screen_ui.h"

#include "global/global_strings.h"

#define UI_NAME nfct_active

static lv_obj_t* screen = NULL;
static lv_event_cb_t cancel_callback = NULL;
static lv_obj_t* cancel_button = NULL;

static void nfct_cancel_pressed(lv_obj_t* obj, lv_event_t e)
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

UI_DECLARE_CREATE(UI_NAME)
{
	if (screen != NULL)
	{
		// #todo #refresh screen
		return screen;
	}

	LV_IMG_DECLARE(nfct_48);
	static splash_window_desc_t desc = {
		.title = "NFC Tag Active",
		.instruction = PRODUCT_NAME_SHORT " is currently emulating the "
		"NFC Tag you chose!\n\n"
		"Place " PRODUCT_NAME_SHORT " close to the reader, or press "
		"the X to exit!",
		.icon = NULL,
		.image = &nfct_48,
		.header_button_text = LV_SYMBOL_CLOSE,
		.header_button_cb = nfct_cancel_pressed,
	};

	screen = display_screen_ui_create_splash_window_screen(&desc);

	cancel_button = desc.return_header_button_obj;

	return screen;
}

UI_DECLARE_ACTIVATE(UI_NAME)
{
	lv_scr_load(screen);
	lv_group_remove_all_objs(group);
	lv_group_add_obj(group, cancel_button);
	lv_group_focus_obj(cancel_button);
}

void UI_DECLARE_FUNCTION(UI_NAME, set_cancel_callback)(lv_event_cb_t callback)
{
	cancel_callback = callback;
}
