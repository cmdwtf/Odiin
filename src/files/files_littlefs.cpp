#include "files_flash.h"

#include "files_flash_qspi.h"

#include "files_log_module.ii"

namespace files
{
	namespace
	{
		int LittleFsApiSync_Nop() { return LFS_ERR_OK; }

		const struct lfs_config littlefsConfig = {
			// block device operations
			.read  = nullptr,
			.prog  = nullptr,
			.erase = nullptr,
			.sync  = LittleFsApiSync_Nop,

			// block device configuration
			.read_size = 16,
			.prog_size = 16,
			.block_size = 4096,
			.block_count = 128,
			.cache_size = 16,
			.lookahead_size = 16,
			.block_cycles = 500,
		};
	}

	bool Littlefs::Mount()
	{
		if (mounted)
		{
			return true;
		}

		int error = lfs_mount(&littlefs, &littlefsConfig);

		if (error)
		{
			NRF_LOG_WARNING("Unable to mount littlefs on flash: (%d). Will attempt to format.", error);
			lfs_format(&littlefs, &littlefsConfig);
			error = lfs_mount(&littlefs, &littlefsConfig);

			if (error)
			{
				NRF_LOG_ERROR("Littlefs mount after format failed: (%d) Cannot mount flash file system.", error);
				return false;
			}
		}

		mounted = true;
		return true;
	}

	bool Littlefs::Unmount()
	{
		if (mounted == false)
		{
			return true;
		}

		int error = lfs_unmount(&littlefs);

		if (error)
		{
			NRF_LOG_ERROR("Littlefs unmount failed: (%d)", error);
			return false;
		}

		mounted = false;

		return true;
	}

	bool Littlefs::FileOpen(FlashFile& file, const char* filePath, uint8_t mode)
	{
		return false;
	}

	bool Littlefs::FileRead(FlashFile& file, void* buffer, size_t amountToRead, size_t* amountRead)
	{
		return false;
	}

	bool Littlefs::FileWrite(FlashFile& file, const void* buffer, size_t bufferLength, size_t* amountWritten)
	{
		return false;
	}

	bool Littlefs::FileSeek(FlashFile& file, size_t offset)
	{
		return false;
	}

	bool Littlefs::FileClose(FlashFile& file)
	{
		return false;
	}

	bool Littlefs::DirectoryOpen(FlashDirectory& dir, const char* directoryPath)
	{
		return false;
	}

	bool Littlefs::DirectoryRead(FlashDirectory& dir, FlashFileInfo& info)
	{
		return false;
	}

	bool Littlefs::DirectoryClose(FlashDirectory& dir)
	{
		return false;
	}

	bool Littlefs::FileStat(FlashFileInfo& fileInfo, const char* path)
	{
		return false;
	}
} // namespace files
