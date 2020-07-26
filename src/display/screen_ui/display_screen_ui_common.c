#include "display_screen_ui_common.h"

//////////////////////////////////////////////////////////////////////////
// Static Helpers

static void display_screen_ui_event_noop(lv_obj_t* obj, lv_event_t e)
{
	(void)obj;
	(void)e;
}

//////////////////////////////////////////////////////////////////////////
// MessageBox

static void msgbox_event_cb(lv_obj_t* msgbox, lv_event_t e)
{
	if (e == LV_EVENT_CLICKED) {
		uint16_t b = lv_msgbox_get_active_btn(msgbox);
		if (b == 0 || b == 1) {
			lv_obj_del(msgbox);
			lv_obj_reset_style_list(lv_layer_top(), LV_OBJ_PART_MAIN);
			lv_obj_set_click(lv_layer_top(), false);
		}
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
		lv_group_focus_freeze(desc->group, true);
		lv_group_focus_obj(messageBox);
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

	// window button
	if (desc->header_button_text != NULL)
	{
		// Add button to the header
		lv_obj_t* btn = lv_win_add_btn(window, desc->header_button_text);

		if (desc->header_button_cb != NULL)
		{
			lv_obj_set_event_cb(btn, desc->header_button_cb);
		}
		else
		{
			lv_obj_set_event_cb(btn, display_screen_ui_event_noop);
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
		lv_obj_set_y(labelIcon, (lv_obj_get_height(content) / 3) * 2);
	}

	if (desc->image != NULL)
	{
		lv_obj_t* image = lv_img_create(window, NULL);
		lv_img_set_src(image, desc->image);
		lv_obj_align(image, NULL, LV_ALIGN_CENTER, 0, 0);
		lv_obj_set_y(image, (lv_obj_get_height(content) / 2));
	}

	return screen;
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
