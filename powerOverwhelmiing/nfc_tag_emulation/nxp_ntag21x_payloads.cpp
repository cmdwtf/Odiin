#include "nxp_ntag21x_payloads.hpp"

#include "nfc_log_module.ii"

namespace nfc_tag_emulation::nxp_ntag21x
{
	bool Ntag21XPayload::GetUniqueIdBytes(uint8_t* idOutput, size_t* idOutputLength) const
	{
		if (GetDataLength() < 8)
		{
			NRF_LOG_ERROR("A NTAG21X payload needs at least 8 bytes to extract an ID from.");
		}

		if (*idOutputLength < nxp_ntag21x::UniqueIdLength)
		{
			NRF_LOG_ERROR("Please allocate at least %d bytes for a double length ID (NRF_NFCT_SENSRES_NFCID1_SIZE_DOUBLE).", nxp_ntag21x::UniqueIdLength);
			return false;
		}

		// [ref:NTAG 8.5.1]
		*idOutputLength = 7;
		idOutput[0] = data[0];
		idOutput[1] = data[1];
		idOutput[2] = data[2];
		// data[3] is the check block 0/cascade byte, skip it, hardware will generate it.
		idOutput[3] = data[4];
		idOutput[4] = data[5];
		idOutput[5] = data[6];
		idOutput[6] = data[7];
		// data[8] is the check block 1 byte, we don't need it, hardware will generate it.
		return true;
	}
}
