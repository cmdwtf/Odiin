#include <cstdint>

#include "usb/usb_msc.h"
#include "files/sdcard.h"
#include "input/input_keypad.h"
#include "display/display_screen.h"
#include "nfc_tag_emulation/nxp_ntag21x_emulator.h"

using NfcTagEmulator = nfc_tag_emulation::nxp_ntag21x::Ntag21xEmulator;
using NtagPayload = nfc_tag_emulation::nxp_ntag21x::Ntag21XPayload;

namespace App
{
	class Odiin
	{
	public:
		static Odiin* GetInstance();
		static Files::SdCard& GetSdCard();
		~Odiin();
		void Update();

		void SetNfcTagPayload(nfc_tag_emulation::Payload* pl);
		void SetNfcTagEnabled(bool enabled);
	private:
		Odiin();
		Odiin(const Odiin&) = delete;
		Odiin& operator=(const Odiin&) = delete;

		void InitializeLogs();
		void InitializeClocks();
		void InitializeTimers();
		void InitializeBsp();
		void InitializeUsbDevice();
		void InitializeSdCard();
		void InitializeInput();
		void InitializeScreen();
		void InitializeNfcTag();

		Usb::MassStorageClass* usbMassStorageClass;
		Files::SdCard* sdCard;
		Input::Keypad* keypad;
		Display::Screen* screen;
		NfcTagEmulator* nfcTagEmulator;
	};
} // namespace App


