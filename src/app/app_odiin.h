#pragma once
#include <cstdint>

#include "display/display_screen.h"
#include "display/led/display_led_rgb_leds.h"
#include "files/files_fat32.h"
#include "fsm/app_odiin_fsm.h"
#include "input/input_keypad.h"
#include "nfc/nxp/ntag21x/nxp_ntag21x_emulator.h"
#include "usb/usb_msc.h"

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

		void Sleep();
		void PowerOff();
		void RebootToDfu();
		void Reboot();

		bool OnSleep();
		bool OnPowerOff();
		bool OnRebootToDfu();
		bool OnReboot();

	private:
		Odiin();
		Odiin(const Odiin&) = delete;
		Odiin& operator=(const Odiin&) = delete;

		void InitializeLogs();
		void InitializeClocks();
		void InitializeTimers();
		void InitializeBsp();
		void InitializePower();
		void InitializeCrypto();
		void InitializeUsbDevice();
		void InitializeSdCard();
		void InitializeInput();
		void InitializeScreen();
		void InitializeLeds();
		void InitializeNfcTag();
		void StartApplication();

		usb::MassStorageClass* usbMassStorageClass;
		files::Fat32* sdCard;
		input::Keypad* keypad;
		display::led::RgbLeds* statusPixel;
		display::Screen* screen;
		NfcTagEmulator* nfcTagEmulator;

		uint32_t ticksPrevious = 0;

		// #todo: this is not where this should live.
		// but it will do as a kludge for now.
		nfc::nxp::ntag21x::Ntag215Payload payload;
		char activeNfctFilename[FF_MAX_LFN] = { 0 };
	};
} // namespace app


