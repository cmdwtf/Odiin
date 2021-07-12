#include "app_fsm_states.h"

#include "display/screen_ui/display_screen_ui.h"
#include "input/input_keypad.h"

namespace app::fsm
{
	void UsbConnected::entry()
	{
		LOG_STATE_ENTER(UsbConnected);
		UI_CREATE(usb);
		UI_ACTIVATE(usb, Keypad->GetInputGroup());
	}

	void UsbConnected::exit()
	{
		LOG_STATE_EXIT(UsbConnected);
	}
} // namespace app::fsm
