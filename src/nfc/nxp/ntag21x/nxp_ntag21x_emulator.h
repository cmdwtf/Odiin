#pragma once

#include "nxp_ntag21x.h"
#include "nxp_ntag21x_payloads.hpp"
#include "../../type_2_tag/nfc_type_2_tag_emulator.h"

namespace nfc::nxp::ntag21x
{
	class Ntag21xEmulator : public type_2_tag::NfcType2TagEmulator
	{
		public:
			virtual bool SetPayload(Payload* payload) override;
			virtual void SetPasswordAuthenticationAckResponse(uint8_t newAck[password::ResponseLength]);
		protected:
			bool authState = false;
			virtual void OnFieldLost() override;
			virtual void OnTagSelected() override;
			virtual void OnRxCommand(NfcCmdType commandByte, const uint8_t* data, size_t dataLength) override;
		private:
			Payload versionPayload{version::Ntag215.Data, version::ResponseLength};
			ContainedPayload<password::ResponseLength> passwordAuthenticationAck{password::GenericPasswordAck, password::ResponseLength};
			Payload deviceSignaturePayload{signature::DeviceSignature, signature::ResponseLength};
	};

	bool GetIDBytes(const Ntag21XPayload *payload, uint8_t *idOutput, uint8_t *idOutputLength);
}
