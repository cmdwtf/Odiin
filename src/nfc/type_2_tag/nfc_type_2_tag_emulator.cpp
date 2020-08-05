#include "nfc_type_2_tag_emulator.h"

#include <cstring>
#include <algorithm>

#include "../nfrx_extensions/nrfx_extensions.h"

#include "../nfc_log_module.ii"

namespace nfc::type_2_tag
{
	NfcType2TagEmulator* NfcType2TagEmulator::eventCallbackTarget = nullptr;

/* Mask of all possible interrupts that are relevant for data reception. */
#define NRFX_NFCT_RX_INT_MASK (NRF_NFCT_INT_RXFRAMESTART_MASK | \
                               NRF_NFCT_INT_RXFRAMEEND_MASK   | \
                               NRF_NFCT_INT_RXERROR_MASK)

/* Mask of all possible interrupts that are relevant for data transmission. */
#define NRFX_NFCT_TX_INT_MASK (NRF_NFCT_INT_TXFRAMESTART_MASK | \
                               NRF_NFCT_INT_TXFRAMEEND_MASK)


/* Mask of all possible errors from the @ref NRF_NFCT_EVENT_RXERROR event. */
#define NRFX_NFCT_FRAME_STATUS_RX_ALL_MASK (NRF_NFCT_RX_FRAME_STATUS_CRC_MASK    | \
                                            NRF_NFCT_RX_FRAME_STATUS_PARITY_MASK | \
                                            NRF_NFCT_RX_FRAME_STATUS_OVERRUN_MASK)

/* Mask of all possible errors from the @ref NRF_NFCT_EVENT_ERROR event. */
#if defined (NRF52832_XXAA) || defined(NRF52832_XXAB)
#define NRFX_NFCT_ERROR_STATUS_ALL_MASK (NRF_NFCT_ERROR_FRAMEDELAYTIMEOUT_MASK | \
                                         NRF_NFCT_ERROR_NFCFIELDTOOSTRONG_MASK | \
                                         NRF_NFCT_ERROR_NFCFIELDTOOWEAK_MASK)
#else
#define NRFX_NFCT_ERROR_STATUS_ALL_MASK (NRF_NFCT_ERROR_FRAMEDELAYTIMEOUT_MASK)
#endif

#define NRFX_NFCT_ALL_RELEVANT_INT_MASK ( \
		NRFX_NFCT_RX_INT_MASK	| \
		NRFX_NFCT_TX_INT_MASK	| \
		NRFX_NFCT_FRAME_STATUS_RX_ALL_MASK | \
		NRFX_NFCT_ERROR_STATUS_ALL_MASK)

	NfcType2TagEmulator::NfcType2TagEmulator() :
		nrfxNfcConfig{
			.rxtx_int_mask = NRFX_NFCT_ALL_RELEVANT_INT_MASK,
			.cb = NfcType2TagEmulator::NfcEventCallbackTrampoline,
		}
	{
		// nothing to do for now.
	}

	NfcType2TagEmulator::~NfcType2TagEmulator()
	{
		if (eventCallbackTarget == this)
		{
			nrfx_nfct_uninit();
			eventCallbackTarget = nullptr;
			initialized = false;
		}
	}

	bool NfcType2TagEmulator::Initialize()
	{
		// check to see if we are the only one initializing.
		if (eventCallbackTarget != nullptr)
		{
			// we only support one callbacktarget/emulator.
			// multiplexing may be in the future, but not today.
			NRF_LOG_ERROR("Another NFC Tag emulator is already initialized, can't initialize.");
			return false;
		}

		eventCallbackTarget = this;

		NRF_LOG_DEBUG("Initializing Type 2 Tag NFCT via nrfx. (0x%04X)", nrfxNfcConfig.rxtx_int_mask);

		nrfx_err_t initResult = nrfx_nfct_init(&nrfxNfcConfig);

		if (initResult != NRFX_SUCCESS)
		{
			NRF_LOG_ERROR("Initialize failure: %d", initResult);
			return false;
		}

		// default frame config seems fine for now...
		//uint8_t txFrameConfigFlags = nrf_nfct_tx_frame_config_get();
		//nrf_nfct_tx_frame_config_set(txFrameConfigFlags);

		initialized = true;
		return initialized;
	}

	bool NfcType2TagEmulator::SetPayload(Payload* payload)
	{
		currentPayload = payload;
		NRF_LOG_VERBOSE("Payload set @%p", payload);
		return true;
	}

	void NfcType2TagEmulator::ClearPayload()
	{
		SetPayload(nullptr);
	}

	bool NfcType2TagEmulator::EnableTag()
	{
		if (initialized == false)
		{
			NRF_LOG_WARNING("Cannot enable tag, emulator not initialized.");
			return false;
		}

		if (enabled == true)
		{
			// already enabled, nothing to do.
			return true;
		}

		NRF_LOG_INFO("Tag enabled.");
    	nrfx_nfct_enable();
		enabled = true;
		return enabled;
	}

	bool NfcType2TagEmulator::DisableTag()
	{
		if (initialized == false)
		{
			NRF_LOG_WARNING("Cannot disable tag, emulator not initialized.");
			return false;
		}

		if (enabled == false)
		{
			// already disabled, nothing to do.
			return true;
		}

		NRF_LOG_INFO("Tag disabled.");
		nrfx_nfct_disable();
		enabled = false;
		return !enabled;
	}

	void NfcType2TagEmulator::OnFieldDetected()
	{
		NRF_LOG_VERBOSE("FIELD DETECTED");
		// Silicon anomaly 116
		// see https://github.com/NordicSemiconductor/nrfx/issues/46#issuecomment-433029728
		nrfx_nfct_state_force(NRFX_NFCT_STATE_ACTIVATED);
	}

	void NfcType2TagEmulator::OnFieldLost()
	{
		NRF_LOG_VERBOSE("FIELD LOST");
		tagSelected = false;
	}

	void NfcType2TagEmulator::OnTagSelected()
	{
		NRF_LOG_INFO("SELECTED");
		tagSelected = true;
		StartFrameRx();
	}

	void NfcType2TagEmulator::OnRxFrameStart()
	{
		NRF_LOG_VERBOSE("RX START");
	}

	void NfcType2TagEmulator::OnRxFrameEnd(const nrfx_nfct_evt_rx_frameend_t& rxFrameEnd)
	{
		NRF_LOG_VERBOSE("RX END");

		if (rxPending == 0)
		{
			const uint8_t* data = rxFrameEnd.rx_data.p_data;
			const uint32_t length = rxFrameEnd.rx_data.data_size;
			NRF_LOG_WARNING("[NFC] RX: %d byte frame dropped.", length);

			// dump the packet if it's not so crazy.
			if (length > 0 && length <= 8)
			{
				NRF_HEXDUMP_VERBOSE(data, length);
			}

			return;
		}

		rxPending--;

		const size_t frameSize = rxFrameEnd.rx_data.data_size;

		if (frameSize == 0)
		{
			NRF_LOG_WARNING("RX: Received a frame with 0 bytes?");
			return;
		}

		// first byte is the command, other data follows.
		NfcCmdType command = rxFrameEnd.rx_data.p_data[0];
		const uint8_t* data = rxFrameEnd.rx_data.p_data + 1;
		const uint32_t dataLength = frameSize - 1;

		// this is where the fun begins.
		NRF_LOG_VERBOSE("RX: Handing %d byte frame.", frameSize);

		OnRxCommand(command, data, dataLength);
	}

	void NfcType2TagEmulator::OnRxCommand(NfcCmdType commandByte, const uint8_t* data, size_t dataLength)
	{
		// our most commonly used NAK, for convience.
		constexpr uint8_t invalid = (uint8_t)Responses::NACK;

#define NAK_IF_NOT_ENOUGH_DATA(amt)	\
	if (dataLength < amt)			\
	{ 								\
		NRF_LOG_WARNING("Command expected %d more byte(s), only %d available.", \
			amt, dataLength); 		\
			TxAckNak(invalid);		\
			return; 				\
	}								\

		size_t index = 0;
		Commands t2tCommand = (Commands)commandByte;

		switch (t2tCommand)
		{
			case Commands::READ:
			{
				NAK_IF_NOT_ENOUGH_DATA(1);
				uint8_t startBlock = data[index++];
				uint8_t endBlock = startBlock + 3;
				size_t startAddress = type_2_tag::GetMemoryAddressFromBlockNumber(startBlock);
				size_t endAddress = type_2_tag::GetMemoryAddressFromBlockNumber(endBlock+1) - 1;
				NRF_LOG_DEBUG("[CMD.T2T] CMD_READ: Blocks %d-%d (0x%04X-0x%04X)", startBlock, endBlock, startAddress, endAddress);
				TxPayloadPages(startBlock, endBlock);
				return;
			}

			case Commands::WRITE:
			{
				// not yet implemented
				NRF_LOG_WARNING("[CMD.T2T] CMD_WRITE: NYI (Sent NAK)");
				TxAckNak(invalid);
				return;
			}

			case Commands::SLP_REQ_B1:
			{
				NAK_IF_NOT_ENOUGH_DATA(1);
				if ((Commands)data[index++] == Commands::SLP_REQ_B2)
				{
					NRF_LOG_DEBUG("[CMD.T2T] SLP_REQ: Going to sleep.");
					nrfx_nfct_init_substate_force(NRFX_NFCT_ACTIVE_STATE_SLEEP);

					// sleeping implicitly means we're unselected. reader will
					// reselect us to talk again!
					tagSelected = false;
				}
				return;
			}

			default:
				NRF_LOG_WARNING("[CMD.T2T] {0x%02X}: Unknown/unhandled command, ignored.", t2tCommand);
				return;
		}

#undef NAK_IF_NOT_ENOUGH_DATA
	}

	void NfcType2TagEmulator::OnTxFrameStart(const nrfx_nfct_evt_tx_framestart_t& txFrameStart)
	{
		NRF_LOG_VERBOSE("TX START");
	}

	void NfcType2TagEmulator::OnTxFrameEnd()
	{
		NRF_LOG_VERBOSE("TX END");
		StartFrameRx();
	}

	void NfcType2TagEmulator::OnError(const nrfx_nfct_evt_error_t& error)
	{
		switch (error.reason)
		{
			case NRFX_NFCT_ERROR_FRAMEDELAYTIMEOUT:
				if (tagSelected)
				{
					// a frame delay is only worrysome if we are selected.
					NRF_LOG_ERROR("Frame Delay");
				}
				break;
			default:
				NRF_LOG_ERROR("[Event] Error, unknown reason: (%d)", error.reason);
				break;
		}
	}

	void NfcType2TagEmulator::NfcEventCallback(nrfx_nfct_evt_t const * event)
	{
		// bounce the events into the handlers.
		switch (event->evt_id)
		{
			case NRFX_NFCT_EVT_FIELD_DETECTED:
				OnFieldDetected();
				break;

			case NRFX_NFCT_EVT_FIELD_LOST:
				OnFieldLost();
				break;

			case NRFX_NFCT_EVT_SELECTED:
				OnTagSelected();
				break;

			case NRFX_NFCT_EVT_RX_FRAMESTART:
				OnRxFrameStart();
				break;

			case NRFX_NFCT_EVT_RX_FRAMEEND:
				OnRxFrameEnd(event->params.rx_frameend);
				break;

			case NRFX_NFCT_EVT_TX_FRAMESTART:
				OnTxFrameStart(event->params.tx_framestart);
				break;

			case NRFX_NFCT_EVT_TX_FRAMEEND:
				OnTxFrameEnd();
				break;

			case NRFX_NFCT_EVT_ERROR:
				OnError(event->params.error);
				break;

			default:
				NRF_LOG_WARNING("Unknown Event: %d", event->evt_id);
				break;
		}
	}

	void NfcType2TagEmulator::StartFrameRx()
	{
		static uint8_t incomingBuffer[NFCTAGEMU_RX_BUFFER_SIZE] = { 0 };
		memset(incomingBuffer, 0, NFCTAGEMU_RX_BUFFER_SIZE);

		nrfx_nfct_data_desc_t data =
		{
			.data_size = NFCTAGEMU_RX_BUFFER_SIZE,
			.p_data = incomingBuffer,
		};

		// start the rx, and increase the number of receives we are waiting on.
		rxPending++;
		nrfx_nfct_rx(&data);
	}

	bool NfcType2TagEmulator::TxAckNak(NfcCmdType reason) const
	{
		static_assert(sizeof(NfcCmdType) <= sizeof(uint8_t));
		static uint8_t data;
		data = reason;

		nrfx_nfct_data_desc_t frameDesc =
		{
			.data_size = 4,
			.p_data = &data,
		};

		nrfx_nfct_frame_config_short();
		nrfx_nfct_tx_bits(&frameDesc, NRF_NFCT_FRAME_DELAY_MODE_WINDOWGRID);
		return true;
	}

	bool NfcType2TagEmulator::TxPayloadPages(uint8_t startPage, uint8_t endPage) const
	{
		if (startPage > endPage)
		{
			NRF_LOG_WARNING("Start page requested (%d) was less than end page (%d). Will not TX.", startPage, endPage)
			return false;
		}

		static uint8_t payloadBuffer[NFCTAGEMU_TX_BUFFER_SIZE] = { 0 };
		memset(payloadBuffer, 0, NFCTAGEMU_TX_BUFFER_SIZE);

		size_t dataStart = type_2_tag::GetMemoryAddressFromBlockNumber(startPage);
		size_t dataEnd = type_2_tag::GetMemoryAddressFromBlockNumber(endPage) + type_2_tag::BytesPerBlock;
		size_t requestedBytes = dataEnd - dataStart;
		size_t dataLeft = currentPayload->GetDataLength() - dataStart;

		size_t payloadLength = std::min(
			std::min(dataLeft, requestedBytes),
			(size_t)NFCTAGEMU_TX_BUFFER_SIZE
		);

		memcpy(payloadBuffer, currentPayload->GetData() + dataStart, payloadLength);

		NRF_LOG_VERBOSE("TX: Block %d - Block %d (0x%04X - 0x%04X, %d bytes)", startPage, endPage, dataStart, dataEnd-1, payloadLength);
		NRF_HEXDUMP_VERBOSE(payloadBuffer, payloadLength);

		TxRawData(payloadBuffer, payloadLength);
		return true;
	}

	bool NfcType2TagEmulator::TxRawPayload(const Payload& payload) const
	{
		return TxRawData(payload.GetData(), payload.GetDataLength());
	}

	bool NfcType2TagEmulator::TxRawData(const uint8_t* data, size_t dataLength) const
	{
		const uint8_t* txTarget = data;

		// make sure we're using a DMA-accessable address (i.e. is in RAM)
		// if our payload isn't in RAM, copy it if we can, or fail otherwise.
		if (nrfx_is_in_ram(data) == false)
		{
			if (dataLength <= NFCTAGEMU_FLASH_RAM_BUFFER_SIZE)
			{
				std::memcpy((void*)flashCopy, data, dataLength);
				txTarget = flashCopy;
			}
			else
			{
				NRF_LOG_ERROR("TX: Failure. Payload buffer memory address a flash address.");
				NRF_LOG_ERROR("Unable to copy flash memory to RAM (buffer to small), can't transmit.");
				return false;
			}
		}

		// Setup the outgoing buffer
		nrfx_nfct_data_desc_t frameDesc =
		{
			.data_size = dataLength,
			.p_data = txTarget,
		};

		// ensure the frame config is set to normal
		nrfx_nfct_frame_config_normal();

		nrfx_err_t result = nrfx_nfct_tx(&frameDesc, NRF_NFCT_FRAME_DELAY_MODE_WINDOWGRID);

		if (result != NRFX_SUCCESS)
		{
			NRF_LOG_ERROR("Failed to start Tx: %d", result);
			return false;
		}

		return true;
	}

} // namespace nfc::type_2_tag
