#pragma once

#include <cstdint>

namespace nfc_tag_emulation
{
	using NfcCmdType = uint8_t;

	namespace iso_14443a
	{
		// [ref:ISO1443]
		enum class Commands : NfcCmdType
		{
			REQA = 0x26,
			WUPA = 0x52,
			ANTI_COLLISION_CL1 = 0x93,
			ANTI_COLLISION_CL2 = 0x95,
			ANTI_COLLISION_CL3 = 0x97,
			AC_DATA_LENGTH_NO_DATA = 0x20,
			AC_DATA_LENGTH_5_DATA_BYTES = 0x70,
			HLTA_B1 = 0x50,
			HLTA_B2 = 0x00,
		};
	} // namespace Iso14443A

} // namespace nfc_tag_emulation
