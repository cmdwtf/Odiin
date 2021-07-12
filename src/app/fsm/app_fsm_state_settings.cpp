#include "app_fsm_states.h"

#include "app/app_odiin.h"
#include "app/app_settings.h"
#include "display/screen_ui/display_screen_ui.h"
#include "input/input_keypad.h"

namespace app::fsm
{
	void Settings::entry()
	{
		LOG_STATE_ENTER(Settings);

		UI_CREATE(settings);
		UI_ACTIVATE(settings, Keypad->GetInputGroup());
		UI_FUNCTION(settings, set_done_callback)
		([]()
		 { dispatch(GoHomeEvent()); });

		UI_FUNCTION(settings, set_brightness_callback)
		([](float level)
		 { Odiin->SetBacklightBrightness(level); });

		UI_FUNCTION(settings, set_select_crypto_keys_callback)
		([]() { /*#todo*/ });

		UI_FUNCTION(settings, set_clear_crypto_keys_callback)
		([]() { /*#todo*/ });

		UI_FUNCTION(settings, set_enter_dfu_callback)
		([]()
		 { Odiin->RebootToDfu(); });
	}

	void Settings::exit()
	{
		Odiin->SaveSettings();
		LOG_STATE_EXIT(Settings);
	}
} // namespace app::fsm
