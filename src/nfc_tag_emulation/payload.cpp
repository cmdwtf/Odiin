#include "payload.h"
#include "nfc_log_module.ii"

namespace nfc_tag_emulation
{
	size_t Payload::GetDataLength() const
	{
		return dataLength;
	}

	const uint8_t *Payload::GetData() const
	{
		return data;
	}

	bool Payload::GetUniqueIdBytes(uint8_t* idOutput, size_t* idOutputLength) const
	{
		// a payload by default doesn't have a unique id!
		return false;
	}
} // namespace nfc_tag_emulation
