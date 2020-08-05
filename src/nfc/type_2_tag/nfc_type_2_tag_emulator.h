#pragma once

#include "../nfc_payload.h"
#include "nfc_type_2_tag.h"
#include "nrfx_nfct.h"

namespace nfc::type_2_tag
{
	class NfcType2TagEmulator
	{
	public:
		NfcType2TagEmulator();
		virtual ~NfcType2TagEmulator();
		NfcType2TagEmulator(const NfcType2TagEmulator&) = delete;
		NfcType2TagEmulator& operator=(const NfcType2TagEmulator&) = delete;
		virtual bool Initialize();
		inline bool IsInitialized() { return initialized; }
		virtual bool SetPayload(Payload* payload);
		void ClearPayload();
		virtual bool EnableTag();
		virtual bool DisableTag();
		bool IsEnabled() { return enabled; }
	protected:
		Payload* currentPayload;
		int rxPending = 0;
		bool tagSelected = false;

		// hardware events
		virtual void OnFieldDetected();
		virtual void OnFieldLost();
		virtual void OnTagSelected();
		virtual void OnRxFrameStart();
		void OnRxFrameEnd(const nrfx_nfct_evt_rx_frameend_t& rxFrameEnd);
		virtual void OnRxCommand(NfcCmdType commandByte, const uint8_t* data, size_t dataLength);
		virtual void OnTxFrameStart(const nrfx_nfct_evt_tx_framestart_t& txFrameStart);
		virtual void OnTxFrameEnd();
		virtual void OnError(const nrfx_nfct_evt_error_t& error);

		// functionality that should be usable from children too
		void StartFrameRx();
		bool TxAckNak(NfcCmdType reason) const;
		bool TxPayloadPages(uint8_t startPage, uint8_t endPage) const;
		bool TxRawPayload(const Payload& payload) const;
		bool TxRawData(const uint8_t* data, size_t dataLength) const;

	private:
		uint8_t flashCopy[NFCTAGEMU_FLASH_RAM_BUFFER_SIZE] = { 0 };
		static NfcType2TagEmulator* eventCallbackTarget;
		bool initialized = false;
		bool enabled = false;
		nrfx_nfct_config_t nrfxNfcConfig;
		virtual void NfcEventCallback(nrfx_nfct_evt_t const * event);
		static void NfcEventCallbackTrampoline(nrfx_nfct_evt_t const * event)
		{
			if (eventCallbackTarget == nullptr)
			{
				return;
			}

			eventCallbackTarget->NfcEventCallback(event);
		}
	};
} // namespace nfc::type_2_tag
