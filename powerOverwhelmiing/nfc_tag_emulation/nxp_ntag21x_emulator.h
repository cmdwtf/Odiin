#pragma once

#include "nxp_ntag21x.h"
#include "nxp_ntag21x_payloads.hpp"
#include "nfc_type_2_tag_emulator.h"

namespace nfc_tag_emulation::nxp_ntag21x
{
	class Ntag21xEmulator : public nfc_type_2_tag::NfcType2TagEmulator
	{
		public:
			virtual bool SetPayload(Payload* payload) override;
		protected:
			bool authState = false;
			virtual void OnFieldLost() override;
			virtual void OnTagSelected() override;
			virtual void OnRxCommand(NfcCmdType commandByte, const uint8_t* data, size_t dataLength);
		private:
			Payload defaultVersionPayload{version::Ntag215.Data, version::ResponseLength};
			Payload defaultPasswordAuthenticationAck{signature::GenericPasswordAck, sizeof(signature::GenericPasswordAck)};
			Payload defaultDeviceSignaturePayload{signature::DeviceSignature, signature::ResponseLength};
	};

	bool GetIDBytes(const Ntag21XPayload *payload, uint8_t *idOutput, uint8_t *idOutputLength);
}
