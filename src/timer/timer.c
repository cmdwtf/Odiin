// timer based on Nordic's counter.
// see nRF5 SDK License for license info.
#include "timer.h"

#include "nrfx_rtc.h"
#include "nrfx_clock.h"

static const nrfx_rtc_t timer_rtc = NRFX_RTC_INSTANCE(TIMER_RTC_INSTANCE);

static void timer_rtc_handler(nrfx_rtc_int_type_t event)
{
	if (event == NRFX_RTC_INT_OVERFLOW)
	{
		// overflowing isn't good. someone left the timer on,
		// or something is hung.
		APP_ERROR_CHECK(NRF_ERROR_TIMEOUT);
	}
}

void timer_initialize(void)
{
	APP_ERROR_CHECK(nrfx_clock_init(NULL));
	nrfx_clock_lfclk_start();

	nrfx_rtc_config_t config = NRFX_RTC_DEFAULT_CONFIG;
	config.prescaler = RTC_FREQ_TO_PRESCALER(TIMER_TICK_FREQUENCY);
	APP_ERROR_CHECK(nrfx_rtc_init(&timer_rtc, &config, timer_rtc_handler));

	// we don't need the tick event.
	nrfx_rtc_tick_disable(&timer_rtc);
}

void timer_start(void)
{
	nrfx_rtc_counter_clear(&timer_rtc);
	nrfx_rtc_enable(&timer_rtc);
}

void timer_stop(void)
{
	nrfx_rtc_disable(&timer_rtc);
}

uint32_t timer_get_ticks(void)
{
	return nrfx_rtc_counter_get(&timer_rtc);
}

float timer_get_elapsed_seconds(void)
{
	uint32_t ticks = timer_get_ticks();
	return (float)ticks / TIMER_TICK_FREQUENCY;
}
