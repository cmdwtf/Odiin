#include "display_screen_ui.h"

#define UI_NAME main_menu

static lv_obj_t* screen = NULL;

UI_DECLARE_CREATE(UI_NAME)
{
	screen = lv_obj_create(NULL, NULL);

	// main content
	lv_obj_t* labelProduct = lv_label_create(screen, NULL);
	lv_label_set_long_mode(labelProduct, LV_LABEL_LONG_EXPAND);
	lv_label_set_text(labelProduct, "Main Menu Coming Soon!");

	return screen;
}

UI_DECLARE_ACTIVATE(UI_NAME)
{
	lv_scr_load(screen);
	// this screen has no intractable parts, no groups to set.
}
