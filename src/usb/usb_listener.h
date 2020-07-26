#pragma once

#include "app_usbd_types.h"

namespace Usb
{
	class Listener
	{
	public:
		virtual void UsbWillEnable(app_usbd_event_type_t event) { }
		virtual void UsbDidDisable(app_usbd_event_type_t event) { }
	}; // class Listener
} // namespace Usb
