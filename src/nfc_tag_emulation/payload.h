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
			: data(initialData), writableData(nullptr), dataLength(initalDataLength), writable(false)
		{ }
		Payload(uint8_t* initialData, size_t initalDataLength)
			: data(initialData), writableData(initialData), dataLength(initalDataLength), writable(true)
		{ }
		virtual ~Payload() = default;
		Payload(const Payload&) = delete;
		Payload& operator=(const Payload&) = delete;
		virtual size_t GetDataLength() const;
		virtual const uint8_t* GetData() const;
		virtual void SetData(const uint8_t* data, size_t length);
		virtual bool GetUniqueIdBytes(uint8_t* idOutput, size_t* idOutputLength) const;
	protected:

		const uint8_t* data = nullptr;
		uint8_t* writableData = nullptr;
		size_t dataLength = 0;
		bool writable = false;
	};

	template<size_t capacity>
	class ContainedPayload : public Payload
	{
		uint8_t tagMemory[capacity] = { 0 };
	public:
		ContainedPayload() : Payload(payloadMemory, capacity)
		{

		}

		ContainedPayload(const uint8_t* initialPayloadMemory, size_t initialPayloadLength) : ContainedPayload()
		{
			SetData(initialPayloadMemory, initialPayloadLength);
		}

		static constexpr size_t TagMemoryCapacity = capacity;
	protected:
		uint8_t payloadMemory[capacity] = { 0 };
	};

} // namespace nfc_tag_emulation
