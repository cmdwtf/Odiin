#pragma once

#include "iso14443.h"
#include "nfc_digital_protocol.h"

namespace nfc_tag_emulation::nfc_type_2_tag
{
	using NfcDpCmd = nfc_digital_protocol::Commands;
	enum class Commands : NfcCmdType
	{
		// these should be removed if NfcType2TagEmulator is no longer
		// the class that would handle these (as in, it derives from a Type2TagEmulator)
		SENS_REQ = (NfcCmdType)NfcDpCmd::SENS_REQ,
		ALL_REQ = (NfcCmdType)NfcDpCmd::ALL_REQ,
		SEL_CMD_CL3 = (NfcCmdType)NfcDpCmd::SEL_CMD_CL3,
		SEL_CMD_CL1 = (NfcCmdType)NfcDpCmd::SEL_CMD_CL1,
		SEL_CMD_CL2 = (NfcCmdType)NfcDpCmd::SEL_CMD_CL2,
		SDD_REQ_B2 = (NfcCmdType)NfcDpCmd::SDD_REQ_B2,
		SEL_REQ_B2 = (NfcCmdType)NfcDpCmd::SEL_REQ_B2,
		SLP_REQ_B1 = (NfcCmdType)NfcDpCmd::SLP_REQ_B1,
		SLP_REQ_B2 = (NfcCmdType)NfcDpCmd::SLP_REQ_B2,

		// NFC Forum Type 2 Tag Commands
		READ = 0x30,			 // [ref:NFCT2T 5.1]
		WRITE = 0xA2,			 // [ref:NFCT2T 5.2]
		SECTOR_SELECT_B1 = 0xC2, // [ref:NFCT2T 5.3]
		SECTOR_SELECT_B2 = 0xFF, // [ref:NFCT2T 5.3]
	};

	enum class Responses : NfcCmdType
	{
		// NFC Forum Type 2 Tag Responses (All 4-bit)
		ACK = 0xA,	 // [ref:NFCDP 9.7.2]
		NACK = 0x0,	 // [ref:NFCDP 9.6.2]
		NACK1 = 0x1, // [ref:NFCDP 9.6.2]
		NACK4 = 0x4, // [ref:NFCDP 9.6.2]
		NACK5 = 0x5, // [ref:NFCDP 9.6.2]
	};

	// [ref:NFT2T 2]
	constexpr size_t BytesPerBlock = 4;
	constexpr size_t StaticMemoryLength = 64;
	constexpr size_t DynamicMemoryLengthMinimum = 64;
	constexpr size_t BlocksPerSector = 256;
	constexpr size_t BytesPerSector = BlocksPerSector * BytesPerBlock;

	// [ref:NFT2T 5.1]
	constexpr size_t ReadPayloadLength = 16;

	// helpers
	inline constexpr size_t GetBlockCountFromByteLength(size_t len) { return (len / BytesPerBlock); }
	inline constexpr size_t GetMemoryAddressFromBlockNumber(size_t block) { return block * BytesPerBlock; }
} // namespace nfc_tag_emulation::nfc_type_2_tag
