#include "sdcard.h"

#include "diskio.h"
#include "diskio_blkdev.h"

#include "global/global_data.h"

#include "files_log_module.ii"

namespace Files
{
	namespace
	{
		constexpr const char* DriveRoot = "";
		constexpr uint8_t MountOptionDelayed = 0;
		constexpr uint8_t MountOptionImmediate = 1;
		constexpr uint8_t UnmountOptionNone = 0;

		const nrf_block_dev_sdc_t* sdCardBlockDevice = nullptr;
	}

	SdCard::SdCard()
	{

	}

	//////////////////////////////////////////////////////////////////////////
	// Disk Operations

	bool SdCard::Mount()
	{
		if (mounted)
		{
			// already mounted.
			return true;
		}

		if (!Initialize())
		{
			return false;
		}

		NRF_LOG_INFO("Mounting SDC...");

		FRESULT mountResult = f_mount(&fileSystem, DriveRoot, MountOptionImmediate);

		if (mountResult != FR_OK)
		{
			NRF_LOG_ERROR("Failed to mount SDC! (%d)", mountResult);
			return false;
		}

		f_getlabel(DriveRoot, driveLabel, &driveSerial);

		NRF_LOG_INFO("Mounted `%s` (%08X).", nrf_log_push(driveLabel), driveSerial);

		mounted = true;
		return true;
	}

	bool SdCard::Unmount()
	{
		if (mounted == false)
		{
			return true;
		}

		NRF_LOG_INFO("Unmounting SDC...");

		FRESULT unmountResult = f_mount(nullptr, DriveRoot, UnmountOptionNone);

		if (unmountResult != FR_OK)
		{
			NRF_LOG_ERROR("Failed to unmount SDC! (%d)", unmountResult);
			return false;
		}

		memset(driveLabel, 0, sizeof(driveLabel));
		driveSerial = 0;

		NRF_LOG_INFO("Unmounted.");

		mounted = false;
		return true;
	}

	//////////////////////////////////////////////////////////////////////////
	// Directory Operations

	bool SdCard::DirectoryOpen(SdCardDirectory& dir, const char *directoryPath)
	{
		if (mounted == false)
		{
			NRF_LOG_WARNING("Cannot DirectoryOpen while SDC is not mounted.");
			return false;
		}

		DSTATUS status = f_opendir(&dir, directoryPath);
		if (status != FR_OK)
		{
			NRF_LOG_WARNING("Failed to DirectoryOpen `%s`: %d", nrf_log_push((char*)directoryPath), status);
			return false;
		}

		return true;
	}

	bool SdCard::DirectoryRead(SdCardDirectory& dir, SdCardFileInfo& info)
	{
		if (mounted == false)
		{
			NRF_LOG_WARNING("Cannot DirectoryRead while SDC is not mounted.");
			return false;
		}

		DSTATUS status = f_readdir(&dir, &info);
		if (status != FR_OK)
		{
			NRF_LOG_WARNING("Failed to DirectoryRead: %d", status);
			return false;
		}

		// if we read something with a null name, we're done.
		// otherwise, the read was good.
		return info.fname[0] != '\0';
	}

	bool SdCard::DirectoryClose(SdCardDirectory& dir)
	{
		if (mounted == false)
		{
			NRF_LOG_WARNING("Cannot DirectoryClose while SDC is not mounted.");
			return false;
		}

		DSTATUS status = f_closedir(&dir);
		if (status != FR_OK)
		{
			NRF_LOG_WARNING("Failed to DirectoryClose: %d", status);
			return false;
		}

		return true;
	}

	//////////////////////////////////////////////////////////////////////////
	// File Operations

	bool SdCard::FileOpen(SdCardFile& file, const char *filePath, uint8_t mode)
	{
		if (mounted == false)
		{
			NRF_LOG_WARNING("Cannot FileOpen while SDC is not mounted.");
			return false;
		}

		DSTATUS status = f_open(&file, filePath, mode);
		if (status != FR_OK)
		{
			NRF_LOG_WARNING("Failed to FileOpen `%s`: %d", filePath, status);
			return false;
		}

		return true;
	}

	bool SdCard::FileRead(SdCardFile& file, void *buffer, size_t amountToRead, size_t *amountRead)
	{
		if (mounted == false)
		{
			NRF_LOG_WARNING("Cannot FileRead while SDC is not mounted.");
			return false;
		}

		DSTATUS status = f_read(&file, buffer, amountToRead, amountRead);
		if (status != FR_OK)
		{
			NRF_LOG_WARNING("Failed to FileRead: %d", status);
			return false;
		}

		return true;
	}

	bool SdCard::FileWrite(SdCardFile& file, const void *buffer, size_t bufferLength, size_t *amountWritten)
	{
		if (mounted == false)
		{
			NRF_LOG_WARNING("Cannot FileWrite while SDC is not mounted.");
			return false;
		}

		DSTATUS status = f_write(&file, buffer, bufferLength, amountWritten);
		if (status != FR_OK)
		{
			NRF_LOG_WARNING("Failed to FileWrite: %d", status);
			return false;
		}

		return true;
	}

	bool SdCard::FileSeek(SdCardFile& file, size_t offset)
	{
		if (mounted == false)
		{
			NRF_LOG_WARNING("Cannot FileSeek while SDC is not mounted.");
			return false;
		}

		DSTATUS status = f_lseek(&file, offset);
		if (status != FR_OK)
		{
			NRF_LOG_WARNING("Failed to FileSeek: %d", status);
			return false;
		}

		return true;
	}

	bool SdCard::FileClose(SdCardFile& file)
	{
		if (mounted == false)
		{
			NRF_LOG_WARNING("Cannot FileClose while SDC is not mounted.");
			return false;
		}

		DSTATUS status = f_close(&file);
		if (status != FR_OK)
		{
			NRF_LOG_WARNING("Failed to FileClose: %d", status);
			return false;
		}

		return true;
	}

	bool SdCard::FileStat(const char *path, SdCardFileInfo& fileInfo)
	{
		if (mounted == false)
		{
			NRF_LOG_WARNING("Cannot FileStat while SDC is not mounted.");
			return false;
		}

		DSTATUS status = f_stat(path, &fileInfo);
		if (status != FR_OK)
		{
			NRF_LOG_WARNING("Failed to FileStat: %d", status);
			return false;
		}

		return true;
	}

	//////////////////////////////////////////////////////////////////////////
	// Internal Operations

	// USB Handlers

	void SdCard::UsbDidDisable(app_usbd_event_type_t event)
	{
		if (mounted == false && autoRemountAfterUsbDisconnect)
		{
			NRF_LOG_INFO("USB stopped, automatically remounting SDC.");
			Initialize();
			Mount();
		}
		else
		{
			NRF_LOG_INFO("USB stopped, but we don't care about remounting.");
		}
	}

	void SdCard::UsbWillEnable(app_usbd_event_type_t event)
	{
		if (initialized)
		{
			NRF_LOG_INFO("USB got power, uninitializing SDC to give it priority.");
			Uninitialize();
		}
		else
		{
			NRF_LOG_INFO("USB got power, but we were not initialized, ignoring.");
		}
	}

	bool SdCard::Initialize()
	{
		if (initialized)
		{
			return true;
		}

		// zero filesystem
		memset(&fileSystem, 0, sizeof(FATFS));

		if (registered == false && RegisterBlockDevice() == false)
		{
			// we weren't able to register, can't init.
			NRF_LOG_ERROR("Cannot initialize SDC, registration failed.");
			return false;
		}

		NRF_LOG_INFO("Initializing SDC...");

		// #hardcode -- we only support one disk right now.
		diskIndex = 0;

		DSTATUS status = disk_initialize(diskIndex);

		if (status == STA_NOINIT)
		{
			NRF_LOG_ERROR("Failed to initialize SDC (disk %d) with error: %d.", diskIndex, status);
			return false;
		}

		uint32_t blocks_per_mb = (1024uL * 1024uL) / sdCardBlockDevice->block_dev.p_ops->geometry(&sdCardBlockDevice->block_dev)->blk_size;
		uint32_t capacity = sdCardBlockDevice->block_dev.p_ops->geometry(&sdCardBlockDevice->block_dev)->blk_count / blocks_per_mb;

		NRF_LOG_INFO("Initialized SDC (disk %d) with a capacity of %d MB", diskIndex, capacity);

		initialized = true;

		return true;
	}

	bool SdCard::Uninitialize()
	{
		if (initialized == false)
		{
			return true;
		}

		if (Unmount() == false)
		{
			NRF_LOG_ERROR("Cannot uninitialize SDC, was unable to unmount.");
			return false;
		}

		NRF_LOG_INFO("Uninitializing SDC...");

		DSTATUS status = disk_uninitialize(diskIndex);

		if (status != STA_NOINIT)
		{
			NRF_LOG_ERROR("Failed to uninitialize SDC %d with error: %d.", diskIndex, status);
			return false;
		}

		diskIndex = -1;
		initialized = false;
		registered = false;
		memset(&fileSystem, 0, sizeof(FATFS));

		NRF_LOG_INFO("Uninitialized.");

		return true;
	}

	bool SdCard::RegisterBlockDevice()
	{
		if (registered)
		{
			return true;
		}

		NRF_LOG_INFO("Registering SDC Block Device...");

		sdCardBlockDevice = get_sdc_block_device();

		if (sdCardBlockDevice == nullptr)
		{
			// uh oh.
			NRF_LOG_ERROR("Failed to get valid SDC block device. Cannot register drive.");
			return false;
		}

		static diskio_blkdev_t drives[] = {
			DISKIO_BLOCKDEV_CONFIG(NRF_BLOCKDEV_BASE_ADDR(*sdCardBlockDevice, block_dev), NULL)
		};

		diskio_blockdev_register(drives, ARRAY_SIZE(drives));

		NRF_LOG_INFO("Registered.");

		registered = true;

		return true;
	}
} // namespace Files
