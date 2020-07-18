#pragma once

#define ALWAYS_INLINE __attribute__((always_inline))
#define WEAK __attribute__((weak))
#define NO_RETURN __attribute__((noreturn))

void __PANIC() NO_RETURN;
