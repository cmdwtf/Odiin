#include "app/app_odiin.h"

int main(int argc, char** argv)
{
	app::Odiin* odiin = app::Odiin::GetInstance();

    while (1)
    {
		odiin->Update();
    }
}
