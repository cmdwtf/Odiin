#pragma once
#include <cstdint>

#include "usb/usb_msc.h"

#include "display/display_screen.h"
#include "files/files_fat32.h"
#include "fsm/app_odiin_fsm.h"
#include "input/input_keypad.h"
#include "nfc/nxp/ntag21x/nxp_ntag21x_emulator.h"

using NfcTagEmulator = nfc::nxp::ntag21x::Ntag21xEmulator;
using NtagPayload = nfc::nxp::ntag21x::Ntag21XPayload;

namespace app
{
	class Odiin : public usb::Listener
	{
		using StateMachine = fsm::OdiinState;
	public:
		static Odiin* GetInstance();
		static files::Fat32* GetSdCard();

		~Odiin();
		void Update();

    	template<typename E>
		inline void SendEvent(E const& ev) { StateMachine::dispatch(ev); }

		void SetNfcTagPayload(const char* filename);
		void SetNfcTagEnabled(bool enabled);
		const char* GetActiveNfcTagPayloadFilename();

		virtual void UsbWillEnable(app_usbd_event_type_t event) override;
		virtual void UsbDidDisable(app_usbd_event_type_t event) override;
	private:
		Odiin();
		Odiin(const Odiin&) = delete;
		Odiin& operator=(const Odiin&) = delete;

		void InitializeLogs();
		void InitializeClocks();
		void InitializeTimers();
		void InitializeBsp();
		void InitializeCrypto();
		void InitializeUsbDevice();
		void InitializeSdCard();
		void InitializeInput();
		void InitializeScreen();
		void InitializeNfcTag();
		void StartApplication();

		usb::MassStorageClass* usbMassStorageClass;
		files::Fat32* sdCard;
		input::Keypad* keypad;
		display::Screen* screen;
		NfcTagEmulator* nfcTagEmulator;

		// #todo: this is not where this should live.
		// but it will do as a kludge for now.
		nfc::nxp::ntag21x::Ntag215Payload payload;
		char activeNfctFilename[FF_MAX_LFN] = { 0 };
	};
} // namespace app


