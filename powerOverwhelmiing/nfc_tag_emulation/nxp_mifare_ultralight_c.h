#pragma once

#include "nfc_digital_protocol.h"
#include "nfc_type_2_tag.h"

namespace nfc_tag_emulation::nxp_mifare_ultralight_c
{
	using Type2TagCmd = nfc_type_2_tag::Commands;
	using Type2TagRsp = nfc_type_2_tag::Responses;

	enum class Commands : NfcCmdType
	{
		// MIFARE Ultralight C specific commands [ref:MFULC 9.5]
		AUTHENTICATE = 0x1A,
		// #nyi: this isn't usable yet.
	};

	enum class Responses : NfcCmdType
	{
		// MIFARE Ultralight C specific responses [ref:MFULC 9.3]
		ACK = (NfcCmdType)Type2TagRsp::ACK,
		NAK_EEPROM_WRITE_ERROR = 0x02,
		NAK_PARITY_CRC_ERROR = (NfcCmdType)Type2TagRsp::NACK1,
		NAK_OTHER_ERROR = (NfcCmdType)Type2TagRsp::NACK,
		// #nyi: this isn't usable yet.
	};
} // namespace nfc_tag_emulation::nxp_mifare_ultralight_c
