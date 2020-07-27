#pragma once

#include "nxp_ntag21x.h"

namespace nfc_tag_emulation::nxp_ntag21x
{
	class Ntag21XPayload : public Payload
	{
	public:
		Ntag21XPayload(const uint8_t* tagMemory, size_t memorySize) : Payload(tagMemory, memorySize) { }
		virtual ~Ntag21XPayload() = default;
		virtual bool GetUniqueIdBytes(uint8_t* idOutput, size_t* idOutputLength) const override;
	};

	template<size_t capacity>
	class Ntag21XContainedPayload : public Ntag21XPayload
	{
		// if we are containing the whole payload, we need to adhere to one of the standard capacities
		static_assert(capacity == capacities::ntag213::TotalCapacity ||
						capacity == capacities::ntag215::TotalCapacity ||
						capacity == capacities::ntag216::TotalCapacity);
	public:

		Ntag21XContainedPayload() : Ntag21XPayload(tagMemory, capacity)
		{

		}

		static constexpr size_t TagMemoryCapacity = capacity;

		uint8_t* GetRawTagMemory() { return tagMemory; }

	protected:
		uint8_t tagMemory[capacity] = { 0 };
	};

	class Ntag213Payload : public Ntag21XContainedPayload<capacities::ntag213::TotalCapacity> {};
	class Ntag215Payload : public Ntag21XContainedPayload<capacities::ntag215::TotalCapacity> {};
	class Ntag216Payload : public Ntag21XContainedPayload<capacities::ntag216::TotalCapacity> {};
} // namespace nfc_tag_emulation::nxp_ntag21x
