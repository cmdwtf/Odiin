#include <stdint.h>

#include "boards.h"
#include "bsp.h"
#include "app_timer.h"
#include "app_error.h"
#include "nrfx_nfct.h"

#include "nfc_tag_emulation/nxp_ntag21x_emulator.h"
#include "app/app_logs.h"

using NtagPayload = nfc_tag_emulation::nxp_ntag21x::Ntag21XPayload;

nfc_tag_emulation::nxp_ntag21x::Ntag21xEmulator ntag215Emulator;

// a payload to test with
extern const uint8_t t2tTesterBin[540];
NtagPayload tester(t2tTesterBin, 540);
NtagPayload* targetPayload = &tester;

// low frequency clock init for app timer.
void clock_initialization()
{
    NRF_CLOCK->LFCLKSRC            = (CLOCK_LFCLKSRC_SRC_Xtal << CLOCK_LFCLKSRC_SRC_Pos);
    NRF_CLOCK->EVENTS_LFCLKSTARTED = 0;
    NRF_CLOCK->TASKS_LFCLKSTART    = 1;

    while (NRF_CLOCK->EVENTS_LFCLKSTARTED == 0)
    {
        // Do nothing.
    }
}

// event handler for board support events (a la button)
void bsp_evt_handler(bsp_event_t evt)
{
    switch (evt)
    {
        case BSP_EVENT_KEY_0:
			I("Button pressed. No handler yet.");
			break;
        default:
			D("[BSP] Unhandled event: %d", evt);
            break;
    }
}

// configure bsp
void bsp_configuration()
{
    uint32_t err_code;

	const uint32_t bspFlags = BSP_INIT_LEDS | BSP_INIT_BUTTONS;

    err_code = bsp_init(bspFlags, bsp_evt_handler);
    APP_ERROR_CHECK(err_code);
}

int main(int argc, char** argv)
{
    app_log_init();

	D("=====================================");
	I("Application starting.");

	clock_initialization();

    uint32_t err_code = app_timer_init();
    APP_ERROR_CHECK(err_code);

	bsp_configuration();

    // Setup NFC Tag
	ntag215Emulator.Initialize();

	// Set the initial payload
	ntag215Emulator.SetPayload(targetPayload);

	// And turn the tag on!
	ntag215Emulator.EnableTag();

	D("Application waiting for events!");
    while (1)
    {
		// flush logs, and wait for events.
        app_log_flush();
		// why wfe/sev/wfe? event clearing and sleep for power optimization.
		// see: https://devzone.nordicsemi.com/f/nordic-q-a/10424/nrf51422-won-t-sleep
        __WFE();
        __SEV();
        __WFE();
    }
}
