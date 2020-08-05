#include "input_keypad.h"

#include "input_log_module.ii"

namespace input
{
	bool Keypad::ReadCallback(lv_indev_drv_t* driver, lv_indev_data_t*data)
	{
		Keypad* instance = (Keypad*)driver->user_data;

		if (instance->lastKeyPressed == LV_KEY_NONE)
		{
			// we don't have a key pressed, scan for a new one.
			lv_key_t pressed = GetPressedKey();
			if (pressed != LV_KEY_NONE)
			{
				data->key = pressed;
				data->state = LV_INDEV_STATE_PR;
			}
			else
			{
				data->state = LV_INDEV_STATE_REL;
			}
		}
		else
		{
			// we are currently pressing a key, return it's state.

			if (KeyIsPressed(instance->lastKeyPressed))
			{
				data->state = LV_INDEV_STATE_PR;
			}
			else
			{
				data->state = LV_INDEV_STATE_REL;

				// we let go of the key, so now no key is pressed,
				// we can go back to scanning mode
				instance->lastKeyPressed = LV_KEY_NONE;
			}
		}

		// we aren't doing any buffering, so no need to return true.
		return false;
	}

	Keypad::Keypad()
	{
		input::InitializeHal();
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

		if (lv_disp_get_default() == nullptr)
		{
			NRF_LOG_ERROR("Cannot create Keypad device: lv display must be initialized and assigned first.");
			return;
		}

		lv_indev_drv_t inputDeviceDriver;
		lv_indev_drv_init(&inputDeviceDriver);
		inputDeviceDriver.type = LV_INDEV_TYPE_KEYPAD;
		inputDeviceDriver.read_cb = Keypad::ReadCallback;
		inputDeviceDriver.user_data = this;
		keypadDev = lv_indev_drv_register(&inputDeviceDriver);

		inputGroup = lv_group_create();
		lv_indev_set_group(keypadDev, inputGroup);
	}
}
