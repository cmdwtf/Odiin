#pragma once

#include "app_odiin_fsm.h"

namespace app::fsm
{
	class Boot : public OdiinState
	{
		void entry() override;
		void exit() override;
		void react(BootScreenTimeoutEvent const&) override;
	};

	class NfctActive : public OdiinState
	{
		void entry() override;
		void exit() override;
		void react(NfctDeactivateEvent const&) override;
	};

	class UsbConnected : public OdiinState
	{
		void entry() override;
		void exit() override;
	};

	class About : public OdiinState
	{
		void entry() override;
		void exit() override;
	};

	class Settings : public OdiinState
	{
		void entry() override;
		void exit() override;
	};
} // namespace app::fsm

#include "app_fsm_state_menu_base.hpp"
