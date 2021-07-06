#include "nxp_ntag21x_emulator.h"

#include "nrf_nfct.h"

#include "../../nfc_log_module.ii"

namespace nfc::nxp::ntag21x
{
	bool Ntag21xEmulator::SetPayload(Payload* payload)
	{
		NfcType2TagEmulator::SetPayload(payload);

		if (payload == nullptr)
		{
			return true;
		}

		// set the UID based on the payload
		size_t length = UniqueIdLength;
		uint8_t id[UniqueIdLength] = { 0 };

		if (payload->GetUniqueIdBytes(id, &length))
		{
			nrf_nfct_nfcid1_set(id, NRF_NFCT_SENSRES_NFCID1_SIZE_DOUBLE);
		}
		else
		{
			NRF_LOG_WARNING("Failed to set UID for payload.");
			return false;
		}

		Payload newPayload(version::Descriptors[payload->GetDataLength() / 450].Data, version::ResponseLength); //450 arbitrary number to make array index work
		memcpy(&versionPayload, &newPayload, version::ResponseLength);

		return true;
	}

	// phew that's a function name.
	void Ntag21xEmulator::SetPasswordAuthenticationAckResponse(uint8_t newAck[password::ResponseLength])
	{
		passwordAuthenticationAck.SetData(newAck, password::ResponseLength);
	}

	void Ntag21xEmulator::OnFieldLost()
	{
		authState = false;
		NfcType2TagEmulator::OnFieldLost();
	}

	void Ntag21xEmulator::OnTagSelected()
	{
		authState = false;
		NfcType2TagEmulator::OnTagSelected();
	}

	void Ntag21xEmulator::OnRxCommand(NfcCmdType commandByte, const uint8_t* data, size_t dataLength)
	{
		// our most commonly used NAK, for convience.
		constexpr uint8_t invalid = (uint8_t)Responses::NAK_INVALID_ARGUMENT;

#define NAK_IF_NOT_ENOUGH_DATA(amt)	\
	if (dataLength < amt)			\
	{ 								\
		NRF_LOG_WARNING("Command expected %d more byte(s), only %d available.", \
			amt, dataLength); 		\
			TxAckNak(invalid);		\
			return; 				\
	}								\

		size_t index = 0;
		Commands ntag21xCommand = (Commands)commandByte;

		switch (ntag21xCommand)
		{
			case Commands::GET_VERSION:
			{
				NRF_LOG_DEBUG("[CMD.NTAG21X] GET_VERSION");
				TxRawPayload(versionPayload);
				return;
			}

			case Commands::FAST_READ:
			{
				NAK_IF_NOT_ENOUGH_DATA(2);
				NRF_LOG_DEBUG("[CMD.NTAG21X] FAST_READ");

				// #auth: actually check page auths [ref:NTAG 10.3]
				if (authState == false)
				{
					NRF_LOG_ERROR("[NFC] FAST_READ attempted without being authed")
					TxAckNak(invalid);
					return;
				}

				// #overflow #auth: ensure addrs in valid, readable memories
				uint8_t startPage = data[index++];
				uint8_t endPage = data[index++];

				TxPayloadPages(startPage, endPage);
				return;
			}

			case Commands::COMP_WRITE:
			{
				NAK_IF_NOT_ENOUGH_DATA(1);
				NRF_LOG_DEBUG("[CMD.NTAG21X] COMP_WRITE");

				// #nyi: NAK & dump for now, until we actually handle the second part of this command.
				NRF_LOG_HEXDUMP_DEBUG(data, dataLength);
				TxAckNak(invalid);
				return;
			}

			case Commands::READ_CNT:
			{
				NAK_IF_NOT_ENOUGH_DATA(1);
				NRF_LOG_DEBUG("[CMD.NTAG21X] READ_CNT");

				// #nyi: NAK for now, until I read the right memory for read count.
				TxAckNak(invalid);
				return;
			}

			case Commands::PWD_AUTH:
			{
				NAK_IF_NOT_ENOUGH_DATA(4);
				NRF_LOG_DEBUG("[CMD.NTAG21X] PWD_AUTH");

				// uint8_t pwd[4] = { 0 };
				// pwd[0] = data[index++];
				// pwd[1] = data[index++];
				// pwd[2] = data[index++];
				// pwd[3] = data[index++];

				NRF_LOG_HEXDUMP_DEBUG(data, dataLength);
				//const uint8_t PACK_BLOCK = 134;
				//const size_t byteLimit = 2;

				// #nyi #auth, actually check auth, lol.
				// for now we'll just accept whatever password they gave us.
				authState = true;

				TxRawPayload(passwordAuthenticationAck);
				return;
			}

			case Commands::READ_SIG:
			{
				NAK_IF_NOT_ENOUGH_DATA(1);
				NRF_LOG_DEBUG("[CMD.NTAG21X] READ_SIG");
				// the other byte with READ_SIG is just 0, as it's RFU, ignore it. [ref:NTAG 10.8]

				// give them our signature
				TxRawPayload(deviceSignaturePayload);
				return;
			}

			// let a parent class handle all other inherited commands
			default:
				NfcType2TagEmulator::OnRxCommand(commandByte, data, dataLength);
				return;
		}

#undef RETURN_IF_NO_DATA_LEFT
	}

} // namespace nfc::nxp::ntag21x
