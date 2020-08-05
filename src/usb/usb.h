#pragma once

#include "app_usbd.h"
#include "usb_listener.h"

namespace usb
{
	namespace device
	{
		struct class_info_t
		{
			const app_usbd_class_inst_t* classInstance;
			const void* context;
			const char* name;
		};

		using EventCallback = void (*)(app_usbd_event_type_t);
		bool Initialize(bool supportsPowerDetection = true);
		bool IsInitialized();
		bool Enable();
		bool Disable();
		bool IsEnabled();
		bool RegisterDeviceClass(const class_info_t* const deviceClass);
		bool RegisterListener(Listener* listener);

		// Update should be called in the main loop before or after __WFE.
		void Update();

		const uint8_t* const GetSerialNumber();

	} // namespace device
} // namespace Usb
