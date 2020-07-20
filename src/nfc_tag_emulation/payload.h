#pragma once

#include <cstdint>
#include <cstddef>

namespace nfc_tag_emulation
{
	class Payload
	{
	public:
		Payload() = delete;
		Payload(const uint8_t* initialData, size_t initalDataLength)
			: data(initialData), dataLength(initalDataLength)
		{ }
		virtual ~Payload() = default;
		Payload(const Payload&) = delete;
		Payload& operator=(const Payload&) = delete;
		virtual size_t GetDataLength() const;
		virtual const uint8_t* GetData() const;
		virtual bool GetUniqueIdBytes(uint8_t* idOutput, size_t* idOutputLength) const;
	protected:

		const uint8_t *data = nullptr;
		size_t dataLength = 0;
	};

} // namespace nfc_tag_emulation
