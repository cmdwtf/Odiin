#include "display_screen_ui.h"

#include "global/global_strings.h"

#define UI_NAME nfct_active

#define NFCT_UI_DESC_SIZE 128

static lv_obj_t* screen = NULL;
static lv_event_cb_t cancel_callback = NULL;
static lv_obj_t* cancel_button = NULL;
static lv_obj_t* window = NULL;
static char window_title_text[NFCT_UI_DESC_SIZE] = "";

static void nfct_cancel_pressed(lv_obj_t* obj, lv_event_t e)
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

	LV_IMG_DECLARE(nfct_48);
	static splash_window_desc_t desc = {
		.title = "NFC Tag Active",
		.instruction = PRODUCT_NAME_SHORT "'s NFC Tag is active."
		"Move " PRODUCT_NAME_SHORT " close to the reader, or press "
		"the select to exit!",
		.icon = NULL,
		.image = &nfct_48,
		.header_button_text = LV_SYMBOL_LEFT,
		.header_button_cb = nfct_cancel_pressed,
	};

	screen = display_screen_ui_create_splash_window_screen(&desc);
	window = desc.return_window_obj;

	cancel_button = desc.return_header_button_obj;

	// create a label for the active file name or whatever description
	//label_description = lv_label_create(desc.return_window_obj, NULL);
	//lv_label_set_long_mode(label_description, LV_LABEL_LONG_SROLL);
	//lv_obj_set_width(label_description, lv_win_get_width(desc.return_window_obj));
	//lv_label_set_text(label_description, window_title_text);

	//lv_obj_t* windowContent = lv_win_get_content(desc.return_window_obj);
	//lv_coord_t labelHeight = lv_obj_get_height(label_description);
	//lv_obj_set_y(label_description, lv_obj_get_height(windowContent) - labelHeight * 1.5f);


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

void UI_DECLARE_FUNCTION(UI_NAME, set_title)(const char* title)
{
	lv_snprintf(window_title_text, NFCT_UI_DESC_SIZE, "%s", title);

	if (window == NULL)
	{
		return;
	}

	lv_win_set_title(window, title);
}
