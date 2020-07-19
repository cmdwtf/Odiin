#pragma once

#define ALWAYS_INLINE __attribute__((always_inline))
#define WEAK __attribute__((weak))
#define NO_RETURN __attribute__((noreturn))
#define NO_OPT __attribute__((optimize("O0")))

void __PANIC() NO_RETURN;
