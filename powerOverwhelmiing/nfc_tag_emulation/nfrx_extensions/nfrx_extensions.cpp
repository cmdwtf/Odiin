#include "nrfx_extensions.h"

void nrfx_nfct_frame_config_normal()
{
	    // Set tx frame config to normal: parity, discard start, sof enabled, crc16 enabled.
    uint8_t tx_frame_config = NFCT_TXD_FRAMECONFIG_PARITY_Msk |
                                NFCT_TXD_FRAMECONFIG_DISCARDMODE_DiscardStart |
                                NFCT_TXD_FRAMECONFIG_SOF_Msk |
                                NFCT_TXD_FRAMECONFIG_CRCMODETX_Msk;
    nrf_nfct_tx_frame_config_set(tx_frame_config);
}

void nrfx_nfct_frame_config_short()
{
    // configure tx frame for SoF only. (No CRC16, Parity, Discard)
    uint8_t tx_frame_config = NFCT_TXD_FRAMECONFIG_SOF_Msk;
    nrf_nfct_tx_frame_config_set(tx_frame_config);
}
