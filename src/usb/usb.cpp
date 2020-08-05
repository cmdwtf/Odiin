#include "usb.h"

#include <map>
#include <list>
using std::list;
using std::map;

#include "app_usbd_serial_num.h"
#include "nrf_drv_clock.h"

#include "usb_log_module.ii"

namespace Usb
{
	namespace Device
	{
		namespace
		{
			bool initialized = false;
			bool enabled = false;
			bool connected = false;
			bool supportsPowerDetection = false;
			map<const app_usbd_class_inst_t*, const class_info_t*> classRegistry;
			void UsbdEventHandler(app_usbd_event_type_t event);
			void UsbdAppendAllClasses();
			static const app_usbd_config_t usbd_config = {
				.ev_state_proc = UsbdEventHandler
			};
			list<Listener*> eventListeners;
		} // namespace

		bool Initialize(bool _supportsPowerDetection /*= true*/)
		{
			if (initialized)
			{
				return true;
			}

			app_usbd_serial_num_generate();
			app_usbd_product_strings_generate();

			ret_code_t ret = app_usbd_init(&usbd_config);
    		APP_ERROR_CHECK(ret);

			if (ret != NRF_SUCCESS)
			{
				return false;
			}

			supportsPowerDetection = _supportsPowerDetection;

			NRF_LOG_INFO("USB initialized.");

			initialized = true;
			return true;
		}

		bool IsInitialized()
		{
			return initialized;
		}

		bool Enable()
		{
			if (enabled)
			{
				return true;
			}

			UsbdAppendAllClasses();

			if (supportsPowerDetection)
			{
				ret_code_t ret = app_usbd_power_events_enable();
				APP_ERROR_CHECK(ret);

				if (ret != NRF_SUCCESS)
				{
					NRF_LOG_ERROR("Unable to enable power events.");
					return false;
				}
				else
				{
					NRF_LOG_INFO("USB power events enabled.");
				}
			}
			else
			{
				NRF_LOG_INFO("No USB power detection enabled\r\nStarting USB now");

				app_usbd_enable();
				app_usbd_start();
				connected = true;

				NRF_LOG_INFO("USB enabled.");
			}

			return true;
		}

		bool Disable()
		{
			if (enabled == false)
			{
				return true;
			}

			app_usbd_stop();
			app_usbd_disable();
			app_usbd_class_remove_all();

			NRF_LOG_INFO("USB disabled.");

			enabled = false;
			return true;
		}

		bool IsEnabled()
		{
			return enabled;
		}

		bool RegisterDeviceClass(const class_info_t* deviceClass)
		{
			if (deviceClass == nullptr)
			{
				NRF_LOG_ERROR("deviceClass cannot be nullptr.");
				return false;
			}

			if (classRegistry.find(deviceClass->classInstance) != classRegistry.end())
			{
				NRF_LOG_WARNING("Failed to register new device class, that class is already registered.");
				return false;
			}

			// store the class in the registry to append later
			classRegistry[deviceClass->classInstance] = deviceClass;
			return true;
		}

		bool RegisterListener(Listener* listener)
		{
			eventListeners.push_back(listener);
			return true;
		}

		void Update()
		{
			while (app_usbd_event_queue_process())
			{
				/* Nothing to do */
			}
		}

		const uint8_t* const GetSerialNumber()
		{
			extern uint8_t g_extern_serial_number[];
			return g_extern_serial_number;
		}

		///
		/// File-local functions follow.
		///

		namespace
		{
			void UsbdEventHandler(app_usbd_event_type_t event)
			{
#define USB_RAISE_LISTENER_EVENT(eventFn) \
	if (eventListeners.size() > 0) { \
		auto it = eventListeners.begin(); \
		while (it != eventListeners.end()) { \
			(*it++)->eventFn(event); } }

				//USB_RAISE_LISTENER_EVENT(PreUsbEvent);

				switch (event)
				{
					case APP_USBD_EVT_DRV_SUSPEND:
						break;
					case APP_USBD_EVT_DRV_RESUME:
						break;
					case APP_USBD_EVT_STARTED:
						break;
					case APP_USBD_EVT_STOPPED:
						NRF_LOG_INFO("USB stopped, disabling driver.");
						app_usbd_disable();
						USB_RAISE_LISTENER_EVENT(UsbDidDisable);
						break;
					case APP_USBD_EVT_POWER_DETECTED:
						NRF_LOG_INFO("USB power detected, enabling driver.");

						if (!nrf_drv_usbd_is_enabled())
						{
							USB_RAISE_LISTENER_EVENT(UsbWillEnable);
							app_usbd_enable();
						}
						break;
					case APP_USBD_EVT_POWER_REMOVED:
						NRF_LOG_INFO("USB power removed, switching to disconnected state.");
						app_usbd_stop();
						connected = false;
						break;
					case APP_USBD_EVT_POWER_READY:
						NRF_LOG_INFO("USB ready! Switching to connected state.");
						app_usbd_start();
						connected = true;
						break;
					default:
						break;
				}

				//USB_RAISE_LISTENER_EVENT(PostUsbEvent);
			}

			void UsbdAppendAllClasses()
			{
				auto it = classRegistry.begin();

				while (it != classRegistry.end())
				{
					const class_info_t* deviceClass = (*it).second;
					ret_code_t ret = app_usbd_class_append(deviceClass->classInstance);
					APP_ERROR_CHECK(ret);

					if (ret == NRF_SUCCESS)
					{
						NRF_LOG_INFO("Registered USB device class `%s`.", deviceClass->name);
					}
					else
					{
						NRF_LOG_WARNING("Failed to registered USB device class `%s`.", deviceClass->name);
					}

					it++;
				}
			}
		}

	} // namespace Device
} // namespace Usb
