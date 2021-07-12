#include "app_fsm_state_menu_base.hpp"

namespace app::fsm
{
	void MenuOptionPressedCallback(menu_option_desc_t* o, lv_group_t* group)
	{
		app::fsm::MenuOptionPressedEvent ev;
		ev.Option = o;
		app::Odiin::GetInstance()->SendEvent(ev);
	}

	void MenuOptionPressedCallbackNyi(menu_option_desc_t* o, lv_group_t* group)
	{
		NRF_LOG_INFO("Menu Option `%s` clicked, NYI", NRF_LOG_PUSH((char*)o->option));

		static const char* buttonMap[] = {"Aw, man.", ""};

		static msgbox_desc_t desc;
		desc.parent = lv_scr_act();
		desc.group = group;
		desc.message_text = "Oof, this feature isn't implemented yet. Sorry!";
		desc.button_map = buttonMap;

		ui_common_msgbox_show(&desc);
	}
} // namespace app::fsm
