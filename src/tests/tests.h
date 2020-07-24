#pragma once

// Okay these aren't real unit tests, and if you want those, you should look elsewhere, or make a PR 😂

#ifdef __cplusplus
#define C_LINKAGE extern "C"
#else
#define C_LINKAGE
#endif

void TEST_ReadDirectories();
C_LINKAGE void TEST_lv_demo_widgets();
