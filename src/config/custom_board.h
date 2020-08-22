/**
* Copyright (c) 2019 makerdiary
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
* * Redistributions of source code must retain the above copyright
*   notice, this list of conditions and the following disclaimer.
*
* * Redistributions in binary form must reproduce the above
*   copyright notice, this list of conditions and the following
*   disclaimer in the documentation and/or other materials provided
*   with the distribution.

* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
* OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/

#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined(PITAYA_GO)
#include "pitaya_go.h"
#include "custom_pitaya_go.h"
#elif defined(NRF52840_M2)
#include "nrf52840_m2.h"
#else
#error "Board is not defined"
#endif

/** Override the buttons definitions from the dev board headers, as we have lots more now.*/
#undef BUTTONS_NUMBER
#undef BUTTON_1
#undef BUTTONS_LIST
#undef BSP_BUTTON_0

// 7 buttons - 5 way switch, plus two ex buttons.
// we will ignore the pitaya_go SMD buttons
#define BUTTONS_NUMBER 7

// the three "direct" presses (stick center press, 2 ex buttons)
// will be the first 3 buttons. then the directional pushes on the nav switch.
#define BSP_BUTTON_0					INPUT_BUTTON_CENTER_PIN
#define BSP_BUTTON_1					INPUT_BUTTON_EX1_PIN
#define BSP_BUTTON_2					INPUT_BUTTON_EX2_PIN
#define BSP_BUTTON_3					INPUT_BUTTON_UP_PIN
#define BSP_BUTTON_4					INPUT_BUTTON_DOWN_PIN
#define BSP_BUTTON_5					INPUT_BUTTON_LEFT_PIN
#define BSP_BUTTON_6					INPUT_BUTTON_RIGHT_PIN

#define BUTTON_START					0
#define BUTTON_CENTER					0
#define BUTTON_EX1						1
#define BUTTON_EX2						2
#define BUTTON_UP						3
#define BUTTON_DOWN						4
#define BUTTON_LEFT						5
#define BUTTON_RIGHT					6
#define BUTTON_STOP						6

#define BUTTONS_LIST { BSP_BUTTON_0, BSP_BUTTON_1, BSP_BUTTON_2, BSP_BUTTON_3, BSP_BUTTON_4, BSP_BUTTON_5, BSP_BUTTON_6 }

#ifdef __cplusplus
}
#endif

#endif // CUSTOM_BOARD_H
