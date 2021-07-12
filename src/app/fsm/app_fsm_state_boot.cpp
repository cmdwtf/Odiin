#include "app_fsm_states.h"

#include "app/app_odiin.h"
#include "app/app_settings.h"
#include "app_fsm_state_menu_main.hpp"
#include "display/screen_ui/display_screen_ui.h"

namespace app::fsm
{
	void Boot::entry()
	{
		LOG_STATE_ENTER(Boot);
		UI_CREATE(boot);
		UI_ACTIVATE(boot, Keypad->GetInputGroup());
		UI_FUNCTION(boot, set_timeout)
		([](lv_task_t*)
		 { dispatch(BootScreenTimeoutEvent()); },
		 SETTINGS.boot_screen_timeout_ms);
	}

	void Boot::exit()
	{
		LOG_STATE_EXIT(Boot);
	}

	void Boot::react(BootScreenTimeoutEvent const&)
	{
		transit<MenuMain>();
	}
} // namespace app::fsm
