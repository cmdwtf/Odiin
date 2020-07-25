#include "display_screen_ui.h"

#include "global/global_strings.h"

#define UI_NAME nfct_active

static lv_obj_t* screen = NULL;
static lv_event_cb_t cancel_callback = NULL;

static void nfct_cancel_pressed(lv_obj_t* obj, lv_event_t e)
{
	if (cancel_callback != NULL)
	{
		cancel_callback(obj, e);
	}

	lv_win_close_event_cb(obj, e);
}

UI_DECLARE_CREATE(UI_NAME)
{
	if (screen != NULL)
	{
		return screen;
	}

	LV_IMG_DECLARE(nfct_48);
	static splash_window_desc_t desc = {
		.title = "NFC Tag Active",
		.instruction = PRODUCT_NAME_SHORT " is currently emulating the "
		"NFC Tag you chose!.\n\n"
		"Place " PRODUCT_NAME_SHORT " close to the reader, or press "
		"the X to exit!",
		.icon = NULL,
		.image = &nfct_48,
		.header_button_text = LV_SYMBOL_CLOSE,
		.header_button_cb = nfct_cancel_pressed,
	};

	screen = display_screen_ui_create_splash_window_screen(&desc);

	return screen;
}

UI_DECLARE_ACTIVATE(UI_NAME)
{
	lv_scr_load(screen);
	// this screen has no intractable parts, no groups to set.
}

void UI_DECLARE_FUNCTION(UI_NAME, set_cancel_callback)(lv_event_cb_t callback)
{
	cancel_callback = callback;
}
