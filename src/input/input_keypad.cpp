#include "input_keypad.h"

#include "nrf52840_m2.h"
#include "bsp.h"

#include "input_log_module.ii"

namespace Input
{
	bool keyboard_read(lv_indev_drv_t * drv, lv_indev_data_t*data)
	{
		data->key = LV_KEY_ENTER; // hard coded for debug!

		if(bsp_button_is_pressed(0))
		{
			data->state = LV_INDEV_STATE_PR;
		}
		else
		{
			data->state = LV_INDEV_STATE_REL;
		}

		return false; /*No buffering now so no more data read*/
	}

	Keypad::Keypad()
	{

	}

	Keypad::~Keypad()
	{

	}

	lv_group_t* Keypad::GetInputGroup()
	{
		// create the device on the fly when someone first tries to get the group.
		// the framework should be ready by then.
		if (inputGroup == nullptr)
		{
			CreateDevice();
		}

		return inputGroup;
	}

	void Keypad::CreateDevice()
	{
		// already created.
		if (keypadDev != nullptr)
		{
			return;
		}

		lv_indev_drv_t indev_drv;
		lv_indev_drv_init(&indev_drv);
		indev_drv.type = LV_INDEV_TYPE_KEYPAD;
		indev_drv.read_cb = keyboard_read;
		keypadDev = lv_indev_drv_register(&indev_drv);

		inputGroup = lv_group_create();
		lv_indev_set_group(keypadDev, inputGroup);
	}
}
