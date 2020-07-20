
#pragma once

#include "iso14443.h"

namespace nfc_tag_emulation::nfc_digital_protocol
{
	using IsoCmd = iso_14443a::Commands;

	enum class Commands : NfcCmdType
	{
		// NFC-A Commands inherited from ISO/IEC 14443.
		SENS_REQ = (NfcCmdType)IsoCmd::REQA,						  // 7-bit [ref:NFCDP 4.6.2]
		ALL_REQ = (NfcCmdType)IsoCmd::WUPA,							  // 7-bit [ref:NFCDP 4.6.1]
		SEL_CMD_CL1 = (NfcCmdType)IsoCmd::ANTI_COLLISION_CL1,		  // [ref:NFCDP 4.7.1]
		SEL_CMD_CL2 = (NfcCmdType)IsoCmd::ANTI_COLLISION_CL2,		  // [ref:NFCDP 4.7.1]
		SEL_CMD_CL3 = (NfcCmdType)IsoCmd::ANTI_COLLISION_CL3,		  // [ref:NFCDP 4.7.1]
		SDD_REQ_B2 = (NfcCmdType)IsoCmd::AC_DATA_LENGTH_NO_DATA,	  // [ref:NFCDP 4.7.1]
		SEL_REQ_B2 = (NfcCmdType)IsoCmd::AC_DATA_LENGTH_5_DATA_BYTES, // [ref:NFCDP 4.8.1]
		SLP_REQ_B1 = (NfcCmdType)IsoCmd::HLTA_B1,					  // [ref:NFCDP 4.9]
		SLP_REQ_B2 = (NfcCmdType)IsoCmd::HLTA_B2,					  // [ref:NFCDP 4.9]
	};
} // namespace nfc_tag_emulation::nfc_digital_protocol
