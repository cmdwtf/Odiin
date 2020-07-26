#include "display_screen_ui.h"

#define UI_NAME list_menu

static lv_obj_t* screen = NULL;
static lv_obj_t* window = NULL;
static lv_obj_t* options = NULL;
lv_event_cb_t option_clicked = NULL;
static menu_option_desc_t* menuOptions = NULL;
static size_t menuOptionsCount = 0;
static char menuTitle[LV_FS_MAX_PATH_LENGTH] = "<Untitled Menu>";

static void display_screen_ui_list_menu_refresh_options();
static void display_screen_ui_list_menu_button_click(lv_obj_t* obj, lv_event_t e);

UI_DECLARE_CREATE(UI_NAME)
{
	if (screen != NULL)
	{
		// #todo #refresh screen
		return screen;
	}

	screen = lv_obj_create(NULL, NULL);

	// main content
	window = lv_win_create(screen, NULL);
	lv_win_set_title(window, menuTitle);

    lv_page_set_scrl_layout(lv_win_get_content(window), LV_LAYOUT_PRETTY_MID);

	// main content
	display_screen_ui_list_menu_refresh_options();

	return screen;
}

UI_DECLARE_ACTIVATE(UI_NAME)
{
	lv_scr_load(screen);
	lv_group_remove_all_objs(group);
	lv_group_add_obj(group, options);
}

void UI_DECLARE_FUNCTION(UI_NAME, set_options)(menu_option_desc_t options[], size_t numOptions)
{
	menuOptions = options;
	menuOptionsCount = numOptions;
	display_screen_ui_list_menu_refresh_options();
}

void UI_DECLARE_FUNCTION(UI_NAME, set_title)(const char* title)
{
	lv_snprintf(menuTitle, LV_FS_MAX_PATH_LENGTH, "%s", title);

	if (window == NULL)
	{
		return;
	}

	lv_win_set_title(window, menuTitle);
}

void UI_DECLARE_FUNCTION(UI_NAME, set_option_clicked_cb)(lv_event_cb_t callback)
{
	option_clicked = callback;
}

static void display_screen_ui_list_menu_button_click(lv_obj_t* obj, lv_event_t e)
{
	if (e == LV_EVENT_CLICKED)
	{
		// does the menu item have a specific callback?
		menu_option_desc_t* menu_data = (menu_option_desc_t*)obj->user_data;
		if (menu_data->click_cb != NULL)
		{
			lv_group_t* g = (lv_group_t*)lv_obj_get_group(options);
			menu_data->click_cb(menu_data, g);
		}

		// general callback
		if (option_clicked != NULL)
		{
			option_clicked(obj, e);
		}
	}
}

static void display_screen_ui_list_menu_refresh_options()
{
	// can't refresh if we don't have a screen.
	if (screen == NULL)
	{
		return;
	}

	if (options == NULL)
	{
		options = lv_list_create(window, NULL);
		lv_list_set_scroll_propagation(options, true);
		lv_obj_t* content = lv_win_get_content(window);


		// fit this control on the screen nicely!
		lv_disp_size_t disp_size = lv_disp_get_size_category(NULL);
		lv_coord_t grid_h = lv_page_get_height_grid(content, 1, 1);
		lv_coord_t grid_w;
		if (disp_size <= LV_DISP_SIZE_SMALL) grid_w = lv_page_get_width_grid(content, 1, 1);
		else grid_w = lv_page_get_width_grid(content, 2, 1);
    	lv_obj_set_size(options, grid_w, grid_h);
    	//lv_obj_set_size(options, lv_obj_get_width_fit(content), lv_obj_get_height_fit(content));
	}
	else
	{
		// delete any existing options
		lv_list_clean(options);
	}

	for (size_t scan = 0; scan < menuOptionsCount; ++scan)
	{
		menu_option_desc_t* opt = &menuOptions[scan];
    	lv_obj_t* btn = lv_list_add_btn(options, opt->prefix, opt->option);
		lv_label_set_long_mode(lv_list_get_btn_label(btn), LV_LABEL_LONG_DOT);
		lv_obj_set_click(btn, true);
		lv_obj_set_event_cb(btn, display_screen_ui_list_menu_button_click);
		btn->user_data = opt;
	}
}
