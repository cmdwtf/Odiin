#include "app_fsm_states.h"

#include "cwalk.h"

#include "app/app_odiin.h"
#include "app/app_settings.h"
#include "app_fsm_state_menu_files.hpp"
#include "display/screen_ui/display_screen_ui.h"

namespace app::fsm
{
	void NfctActive::entry()
	{
		LOG_STATE_ENTER(NfctActive);

		// enable the nfct peripheral
		Odiin->SetNfcTagEnabled(true);

		Led->SetModeNfct();

		// setup the UI
		UI_CREATE(nfct_active);
		UI_ACTIVATE(nfct_active, Keypad->GetInputGroup());
		UI_FUNCTION(nfct_active, set_cancel_callback)
		([](lv_obj_t*, lv_event_t)
		 { dispatch(NfctDeactivateEvent()); });

		const char* baseName;
		size_t baseNameLength;
		cwk_path_get_basename(Odiin->GetActiveNfcTagPayloadFilename(), &baseName, &baseNameLength);
		UI_FUNCTION(nfct_active, set_title)
		(baseName);
	}

	void NfctActive::exit()
	{
		Led->SetModeMenu();
		Odiin->SetNfcTagEnabled(false);
		LOG_STATE_EXIT(NfctActive);
	}

	void NfctActive::react(NfctDeactivateEvent const&)
	{
		transit<MenuFiles>();
	}
} // namespace app::fsm
