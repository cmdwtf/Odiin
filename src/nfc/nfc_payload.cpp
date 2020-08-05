#include "nfc_payload.h"

#include "nfc_log_module.ii"

namespace nfc
{
	size_t Payload::GetDataLength() const
	{
		return dataLength;
	}

	const uint8_t *Payload::GetData() const
	{
		return data;
	}

	void Payload::SetData(const uint8_t* newData, size_t newDataLength)
	{
		ASSERT(writable);
		ASSERT(newDataLength <= dataLength);
		ASSERT(writableData != nullptr);

		memcpy(writableData, newData, dataLength);
	}

	bool Payload::GetUniqueIdBytes(uint8_t* idOutput, size_t* idOutputLength) const
	{
		// a payload by default doesn't have a unique id!
		return false;
	}
} // namespace nfc
