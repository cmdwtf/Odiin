#include "display_screen_ui.h"

#include "global/global_strings.h"

#define UI_NAME usb

static lv_obj_t* screen = NULL;

UI_DECLARE_CREATE(UI_NAME)
{
	if (screen != NULL)
	{
		// nothing to refresh.
		return screen;
	}

	static splash_window_desc_t desc = {
		.title = "USB Connected",
		.instruction = PRODUCT_NAME_SHORT " is currently connected as a "
		"USB device.\n\n"
		"Please disconnect the USB cable when you're "
		"ready to use " PRODUCT_NAME_SHORT " again!",
		.icon = LV_SYMBOL_USB,
	};

	screen = display_screen_ui_create_splash_window_screen(&desc);

	return screen;
}

UI_DECLARE_ACTIVATE(UI_NAME)
{
	lv_scr_load(screen);
	// this screen has no intractable parts, no groups to set.

	// add status widget
	ui_status_widget_get(screen);
}
