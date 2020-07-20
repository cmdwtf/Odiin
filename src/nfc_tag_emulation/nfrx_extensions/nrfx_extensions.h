#pragma once

#include "nrfx_nfct.h"

/**
 * @brief Sets up frame config to transmit NFC frames with CRC16/Parity/DiscardStart and SOF.
 */
void nrfx_nfct_frame_config_normal();

/**
 * @brief Sets up frame config to transmit NFC frames with no CRC16/Parity/Discard.
 */
void nrfx_nfct_frame_config_short();
