#include "app_fsm_states.h"

#include "app/app_status_led.h"
#include "display/screen_ui/display_screen_ui.h"
#include "input/input_keypad.h"

namespace app::fsm
{
	void About::entry()
	{
		LOG_STATE_ENTER(About);

		Led->SetModeFun();

		UI_CREATE(about);
		UI_ACTIVATE(about, Keypad->GetInputGroup());
		UI_FUNCTION(about, set_cancel_callback)
		([](lv_obj_t*, lv_event_t)
		 { dispatch(GoHomeEvent()); });
	}

	void About::exit()
	{
		LOG_STATE_EXIT(About);
	}
} // namespace app::fsm
