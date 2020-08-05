#include "app/app_odiin.h"

int main(int argc, char** argv)
{
	app::Odiin* odiin = app::Odiin::GetInstance();

    while (1)
    {
		odiin->Update();

		// why wfe/sev/wfe? event clearing and sleep for power optimization.
		// see: https://devzone.nordicsemi.com/f/nordic-q-a/10424/nrf51422-won-t-sleep
        __WFE();
        __SEV();
        __WFE();
    }
}
