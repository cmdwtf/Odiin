#include "usb_msc.h"

#include "nrf.h"
#include "nrf_block_dev.h"
#include "nrf_block_dev_ram.h"
#include "nrf_block_dev_empty.h"
#include "nrf_block_dev_qspi.h"
#include "nrf_block_dev_sdc.h"
#include "nrf_drv_usbd.h"

#include "app_usbd.h"
#include "app_usbd_core.h"
#include "app_usbd_string_desc.h"
#include "app_usbd_msc.h"

#include "usb.h"

#include "global/global_data.h"

namespace usb
{
	void MassStorageClass::RegisterClass()
	{
    	app_usbd_class_inst_t const * classInstance = app_usbd_msc_class_inst_get(get_usb_msc_class_definition());
		static device::class_info_t classInfo =
		{
			.classInstance = classInstance,
			.context = this,
			.name = "Mass Storage",
		};

		usb::device::RegisterDeviceClass(&classInfo);
	}

} // namespace Usb
