#pragma once

#include "app_usbd_types.h"

namespace Usb
{
	class Listener
	{
	public:
		virtual void OnUsbEvent(app_usbd_event_type_t event) = 0;
	}; // class Listener
} // namespace Usb
