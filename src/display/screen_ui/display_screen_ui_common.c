#include "display_screen_ui_common.h"

//////////////////////////////////////////////////////////////////////////
// Static Helpers

static void display_screen_ui_list_menu_option_button_event(lv_obj_t* obj, lv_event_t e)
{
	(void)obj;
	(void)e;
}

//////////////////////////////////////////////////////////////////////////
// MessageBox

static void msgbox_event_cb(lv_obj_t* msgbox, lv_event_t e)
{
	if (e == LV_EVENT_CLICKED) {
		//uint16_t b = lv_msgbox_get_active_btn(msgbox);
		msgbox_desc_t* desc = (msgbox_desc_t*)msgbox->user_data;
		lv_group_focus_freeze(desc->group, false);
		lv_obj_del(msgbox);
		//lv_obj_reset_style_list(lv_layer_top(), LV_OBJ_PART_MAIN);
		//lv_obj_set_click(lv_layer_top(), false);
	}
}

lv_obj_t* ui_common_msgbox_show(msgbox_desc_t* desc)
{
	static const char* defaultButtons[] = { "OK", "" };

	lv_obj_t* messageBox = lv_msgbox_create(desc->parent, NULL);

	// content
	lv_msgbox_set_text(messageBox, desc->message_text);
	lv_msgbox_add_btns(messageBox, desc->button_map == NULL ? defaultButtons : desc->button_map);

	// button highlight
	//lv_obj_t* buttonMatrix = lv_msgbox_get_btnmatrix(messageBox);
	//lv_btnmatrix_set_btn_ctrl(buttonMatrix, 1, LV_BTNMATRIX_CTRL_CHECK_STATE);

	lv_obj_set_event_cb(messageBox, msgbox_event_cb);

	// positioning
	lv_obj_align(messageBox, NULL, LV_ALIGN_CENTER, 0, 0);

	messageBox->user_data = desc;

	if (desc->group != NULL) {
		lv_group_add_obj(desc->group, messageBox);
		lv_group_focus_obj(messageBox);
		lv_btnmatrix_set_focused_btn(lv_msgbox_get_btnmatrix(messageBox), 0);
		lv_group_focus_freeze(desc->group, true);
	}

	return messageBox;
}

//////////////////////////////////////////////////////////////////////////
// Splash Window

lv_obj_t* display_screen_ui_create_splash_window_screen(splash_window_desc_t* desc)
{
	lv_obj_t* screen = lv_obj_create(NULL, NULL);

	// window
	lv_obj_t* window = lv_win_create(screen, NULL);
	lv_win_set_title(window, desc->title);

	lv_win_set_scrollbar_mode(window, LV_SCROLLBAR_MODE_HIDE);

	desc->return_window_obj = window;

	// window button
	if (desc->header_button_text != NULL)
	{
		// Add button to the header
		lv_obj_t* btn = lv_win_add_btn_left(window, desc->header_button_text);
		ui_common_set_window_button_style(btn);

		if (desc->header_button_cb != NULL)
		{
			lv_obj_set_event_cb(btn, desc->header_button_cb);
		}
		else
		{
			lv_obj_set_event_cb(btn, display_screen_ui_list_menu_option_button_event);
		}

		desc->return_header_button_obj = btn;
	}

	// main content
	lv_obj_t* labelInstructions = lv_label_create(window, NULL);
	lv_label_set_long_mode(labelInstructions, LV_LABEL_LONG_BREAK);
	lv_obj_set_width(labelInstructions, lv_win_get_width(window));
	lv_label_set_text(labelInstructions, desc->instruction);

	// icon or image
	lv_obj_t* content = lv_win_get_content(window);

	if (desc->icon != NULL)
	{
		lv_obj_t* labelIcon = lv_label_create(window, NULL);
		ui_common_set_label_font_icons64(labelIcon);
		lv_obj_set_width(labelIcon, lv_win_get_width(window));
		lv_label_set_text(labelIcon, desc->icon);
		lv_obj_align(labelIcon, NULL, LV_ALIGN_CENTER, 0, 0);
		lv_obj_set_y(labelIcon, (lv_obj_get_height(content) / 3) * 2 - 3);
		desc->return_icon_obj = labelIcon;
	}

	if (desc->image != NULL)
	{
		lv_obj_t* image = lv_img_create(window, NULL);
		lv_img_set_src(image, desc->image);
		lv_obj_align(image, NULL, LV_ALIGN_CENTER, 0, 0);
		lv_obj_set_y(image, (lv_obj_get_height(content) / 2) - 3);
		desc->return_image_obj = image;
	}

	return screen;
}

//////////////////////////////////////////////////////////////////////////
// Styles

void ui_common_set_window_button_style(lv_obj_t* button)
{
	lv_obj_set_style_local_border_width(button, LV_BTN_PART_MAIN, LV_STATE_FOCUSED, 2);
	lv_obj_set_style_local_border_color(button, LV_BTN_PART_MAIN, LV_STATE_FOCUSED, LV_THEME_DEFAULT_COLOR_PRIMARY);

	lv_obj_set_style_local_border_width(button, LV_BTN_PART_MAIN, LV_STATE_FOCUSED | LV_STATE_PRESSED, 2);
	lv_obj_set_style_local_border_color(button, LV_BTN_PART_MAIN, LV_STATE_FOCUSED | LV_STATE_PRESSED, LV_THEME_DEFAULT_COLOR_SECONDARY);
}

//////////////////////////////////////////////////////////////////////////
// Label Font switching

void ui_common_set_label_font_icons64(lv_obj_t* label)
{
	static lv_style_t styleIconFont64;
	lv_style_init(&styleIconFont64);
	lv_style_set_text_font(&styleIconFont64, LV_STATE_DEFAULT, &icons_64);
	lv_obj_add_style(label, LV_LABEL_PART_MAIN, &styleIconFont64);
}

void ui_common_set_label_font_theme_small(lv_obj_t* label)
{
	static lv_style_t styleThemeSmall;
	lv_style_init(&styleThemeSmall);
	lv_style_set_text_font(&styleThemeSmall, LV_STATE_DEFAULT, LV_THEME_DEFAULT_FONT_SMALL);
	lv_obj_add_style(label, LV_LABEL_PART_MAIN, &styleThemeSmall);
}


//////////////////////////////////////////////////////////////////////////
// Callback Helpers

static lv_group_t* callback_helpers_active_group = NULL;

void ui_common_cb_set_active_group(lv_group_t* group)
{
	callback_helpers_active_group = group;
}

void ui_common_up_down_focus_cb(lv_obj_t* obj, lv_event_t e)
{
	if (e == LV_EVENT_KEY)
	{
		uint32_t key = *((uint32_t*)lv_event_get_data());
		switch (key)
		{
			case LV_KEY_UP:
				lv_group_focus_prev(callback_helpers_active_group);
				break;
			case LV_KEY_DOWN:
				lv_group_focus_next(callback_helpers_active_group);
				break;
			default:
				break;
		}
	}
}
