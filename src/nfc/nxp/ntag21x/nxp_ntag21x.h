#pragma once

#include <cstddef>

#include "../../type_2_tag/nfc_type_2_tag.h"

namespace nfc::nxp::ntag21x
{
	using Type2TagCmd = type_2_tag::Commands;
	using Type2TagRsp = type_2_tag::Responses;

	// Commands specific to NTAG21X [ref:NTAG 9.1]
	enum class Commands : NfcCmdType
	{
		GET_VERSION = 0x60,
		FAST_READ = 0x3A,
		COMP_WRITE = 0xA0,
		READ_CNT = 0x39,
		PWD_AUTH = 0x1B,
		READ_SIG = 0x3C,
	};

	enum class Responses : NfcCmdType
	{
		// NTAG21X specific responses (all 4 bits) [ref:NTAG 9.3]
		ACK = (NfcCmdType)Type2TagRsp::ACK,
		NAK_INVALID_ARGUMENT = (NfcCmdType)Type2TagRsp::NACK,  // invalid argument, i.e. invalid page address
		NAK_PARITY_CRC_ERROR = (NfcCmdType)Type2TagRsp::NACK1, // parity or CRC error
		NAK_INVALID_AUTHENTICATION_COUNTER_OVERFLOW = (NfcCmdType)Type2TagRsp::NACK4,
		NAK_EEPROM_WRITE_ERROR = (NfcCmdType)Type2TagRsp::NACK5,

		// NTAG21X REQA/WUPA responses [ref:NTAG 9.4]
		ATQA_RESPONSE_B1 = 0x00,
		ATQA_RESPONSE_B2 = 0x44,
		SAK_RESPONSE = 0x00,
	};

	// [ref:NTAG 10.1]
	namespace version
	{
		using FieldType = uint8_t;
		constexpr size_t ResponseLength = 8;

		enum class Header : FieldType
		{
			FixedDefault = 0x00,
		};

		enum class Vendor : FieldType
		{
			NxpSemiconductors = 0x04,
		};

		enum class Type : FieldType
		{
			Ntag = 0x04,
		};

		enum class Subtype : FieldType
		{
			Subtype50pF = 0x02,
		};

		enum class Major : FieldType
		{
			Major1 = 0x01,
		};

		enum class Minor : FieldType
		{
			Minior0 = 0x00,
		};

		enum class Storage : FieldType
		{
			Size144Bytes = 0x0F,
			Size504Bytes = 0x11,
			Size888Bytes = 0x13,
		};

		enum class Protcol : FieldType
		{
			Iso14443 = 0x03,
		};

		// [ref:NTAG 10.1]
		typedef struct PACKED
		{
			union
			{
				FieldType Data[ResponseLength] = {0};
				struct
				{
					Header FixedHeader;
					Vendor VendorID;
					Type ProductType;
					Subtype ProductSubtype;
					Major MajorProductVersion;
					Minor MinorProductVersion;
					Storage StorageSize;
					Protcol ProtocolType;
				};
			};

		} Descriptor;

		// [ref:NTAG 10.5]
		constexpr Descriptor Ntag213 =
			{
				(FieldType)Header::FixedDefault,
				(FieldType)Vendor::NxpSemiconductors,
				(FieldType)Type::Ntag,
				(FieldType)Subtype::Subtype50pF,
				(FieldType)Major::Major1,
				(FieldType)Minor::Minior0,
				(FieldType)Storage::Size144Bytes,
				(FieldType)Protcol::Iso14443,
		};
		constexpr Descriptor Ntag215 =
			{
				(FieldType)Header::FixedDefault,
				(FieldType)Vendor::NxpSemiconductors,
				(FieldType)Type::Ntag,
				(FieldType)Subtype::Subtype50pF,
				(FieldType)Major::Major1,
				(FieldType)Minor::Minior0,
				(FieldType)Storage::Size504Bytes,
				(FieldType)Protcol::Iso14443,
		};
		constexpr Descriptor Ntag216 =
			{
				(FieldType)Header::FixedDefault,
				(FieldType)Vendor::NxpSemiconductors,
				(FieldType)Type::Ntag,
				(FieldType)Subtype::Subtype50pF,
				(FieldType)Major::Major1,
				(FieldType)Minor::Minior0,
				(FieldType)Storage::Size888Bytes,
				(FieldType)Protcol::Iso14443,
		};

		static constexpr Descriptor Descriptors[] = {Ntag213, Ntag215, Ntag216};

	} // namespace version

	namespace signature
	{
		// [ref:NTAG 10.8]
		constexpr size_t ResponseLength = 32;

		// #crypto: generate a nice looking signature, I guess.
		// clang-format off
		constexpr uint8_t DeviceSignature[ResponseLength] =
		{
				0xD3, 0xC0, 0xD3, 0x00, 0xC0, 0x01, 0xBA, 0xBE,
				0xD3, 0xC0, 0xD3, 0x00, 0xC0, 0x01, 0xBA, 0xBE,
				0xD3, 0xC0, 0xD3, 0x00, 0xC0, 0x01, 0xBA, 0xBE,
				0xD3, 0xC0, 0xD3, 0x00, 0xC0, 0x01, 0xBA, 0xBE,
		};
		// clang-format on

	} // namespace signature

	namespace password
	{
		// [ref:NTAG 10.7]
		constexpr size_t ResponseLength = 2;

		constexpr uint8_t GenericPasswordAck[ResponseLength] = {
			0x00,
			0x00,
		};
	} // namespace password

	// [ref:NTAG 2.1]
	// #cleanup: this could probably be organized better/elsewhere
	namespace capacities
	{
		namespace ntag213
		{
			constexpr size_t TotalCapacity = 180;
			constexpr size_t AvailableMemory = 144;
			constexpr size_t TotalPages = type_2_tag::GetBlockCountFromByteLength(TotalCapacity);
		} // namespace ntag213

		namespace ntag215
		{
			constexpr size_t TotalCapacity = 540;
			constexpr size_t AvailableMemory = 504;
			constexpr size_t TotalPages = type_2_tag::GetBlockCountFromByteLength(TotalCapacity);
		} // namespace ntag215

		namespace ntag216
		{
			constexpr size_t TotalCapacity = 924;
			constexpr size_t AvailableMemory = 888;
			constexpr size_t TotalPages = type_2_tag::GetBlockCountFromByteLength(TotalCapacity);
		} // namespace ntag216
	}     // namespace capacities

	// [ref:NTAG 1.3, 8.5.1]
	constexpr size_t UniqueIdLength = 7;

	// [ref:NTAG 2.1]
	// NTAGs refer to blocks as pages, so these are provided as aliases for the block names in nfc_type_2_tag.
	constexpr size_t BytesPerPage = type_2_tag::BytesPerBlock;
	inline constexpr size_t GetPageCountFromByteLength(size_t len)
	{
		return type_2_tag::GetBlockCountFromByteLength(len);
	}
	inline constexpr size_t GetMemoryAddressFromPageNumber(size_t page)
	{
		return type_2_tag::GetMemoryAddressFromBlockNumber(page);
	}
} // namespace nfc::nxp::ntag21x

#include "nxp_ntag21x_payloads.hpp"
