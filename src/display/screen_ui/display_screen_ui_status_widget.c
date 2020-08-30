#include "display_screen_ui_common.h"

#define STATUS_WIDGET_STRING_SIZE 16

static lv_obj_t* status_widget = NULL;
static char statusBuffer[STATUS_WIDGET_STRING_SIZE] = { 0 };

lv_obj_t* ui_status_widget_get(lv_obj_t* parent)
{
	if (status_widget != NULL)
	{
		lv_obj_set_parent(status_widget, parent);
	}
	else
	{
		status_widget = lv_label_create(parent, NULL);
	}

	//ui_common_set_label_font_theme_small(status_widget);
	lv_label_set_long_mode(status_widget, LV_LABEL_LONG_CROP);
	lv_label_set_align(status_widget, LV_LABEL_ALIGN_RIGHT);
	lv_obj_set_width_fit(status_widget, lv_obj_get_width(parent));
	lv_obj_align(status_widget, parent, LV_ALIGN_IN_TOP_LEFT, 0, 0);
	lv_label_set_text(status_widget, statusBuffer);

	return status_widget;
}

void ui_status_widget_set_percentage(uint8_t battery_percent, bool is_charging)
{
	char* battery_char = NULL;

	if (battery_percent < 20)
	{
		battery_char = LV_SYMBOL_BATTERY_EMPTY;
	}
	else if (battery_percent < 50)
	{
		battery_char = LV_SYMBOL_BATTERY_1;
	}
	else if (battery_percent < 75)
	{
		battery_char = LV_SYMBOL_BATTERY_2;
	}
	else if (battery_percent < 90)
	{
		battery_char = LV_SYMBOL_BATTERY_3;
	}
	else
	{
		battery_char = LV_SYMBOL_BATTERY_FULL;
	}

	// Status widget format:
	// %s - The charge symbol (if is charging, otherwise, as space)
	// ' ' - A single space between the charge symbol and the battery symbol
	// %s - The battery SoC symbol, as defined by the percentages above.
	// ' ' -Another space, to move the content away from the right edge of the screen.
	static const char* const STATUS_WIDGET_FORMAT = "%s %s ";

	lv_snprintf(statusBuffer, STATUS_WIDGET_STRING_SIZE, STATUS_WIDGET_FORMAT,
		is_charging ? LV_SYMBOL_CHARGE : " ", // show a symbol if we're charging
		battery_char // show the current battery state
	);

	lv_label_set_text(status_widget, statusBuffer);
}
