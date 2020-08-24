#include "files_littlefs.h"

// if we don't have *some* platform headers, we won't even see logs.
#include "sdk_common.h"
#include "boards.h"
#include "cwalk.h"

#include "files_flash_qspi.h"
#include "files_flash_mx25r6435f.h"

#include "files_log_module.ii"

#define LFS_REPORT_AND_RETURN(result)	\
 do { if (result == LFS_ERR_OK || result > 0) return true; NRF_LOG_WARNING("Flash FS Error: %d", result); return false; } while (0)

namespace files
{
	namespace
	{
		int LittlefsApiRead(const struct lfs_config* c, lfs_block_t block,
			lfs_off_t off, void *buffer, lfs_size_t size);
		int LittlefsApiProgram(const struct lfs_config* c, lfs_block_t block,
			lfs_off_t off, const void *buffer, lfs_size_t size);
		int LittlefsApiErase(const struct lfs_config* c, lfs_block_t block);
		int LittlefsApiSync(const struct lfs_config* c);

		struct lfs_config littlefsConfig = {
			// block device operations
			.read  = LittlefsApiRead,
			.prog  = LittlefsApiProgram,
			.erase = LittlefsApiErase,
			.sync  = LittlefsApiSync,

			// littlefs operation sizes
			.read_size = 256,
			.prog_size = 256,

			// block device configuration set in mount
			.block_size = 0,
			.block_count = 0,

			// lfs configuratoin
			.block_cycles = 500,
			.cache_size = 512,
			.lookahead_size = 32,
		};

		files_storage_driver_t* flash = &files_flash_qspi_driver;
		files_storage_info_t* flashInfo = &files_flash_mx25r6435f_info;
	}

	bool Littlefs::Mount()
	{
		NRF_LOG_VERBOSE("Littlefs::Mount()");

		if (mounted)
		{
			return true;
		}

		// we'll stick to unix-style paths for now.
		cwk_path_set_style(CWK_STYLE_UNIX);

		NRF_LOG_INFO("Initializing flash for littlefs...");

		// give the flash api info about the flash chip
		flash->info = flashInfo;

		files_storage_error_t flashInitStatus = flash->initialize();

		if (flashInitStatus != FILES_STORAGE_SUCCESS)
		{
			NRF_LOG_ERROR("Failed to initialize QSPI flash device! (%d)", flashInitStatus);
			return false;
		}
		else
		{
			NRF_LOG_INFO("Flash initialization and configure complete.");
		}

		// hook up the flash info for littlefs' config
		// using sector size, because it's smaller on our chip,
		// we could use 32k/64k blocks, but that seems overkill.
		littlefsConfig.block_size = flashInfo->sector_size;
		littlefsConfig.block_count = flashInfo->sector_count;

		NRF_LOG_VERBOSE("Mounting littlefs on flash device...");

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

		uint32_t flashSize = flashInfo->sector_size * flashInfo->sector_count;
		uint32_t flashUsedApprox = lfs_fs_size(&littlefs) * littlefsConfig.block_size;
		uint32_t flashSizeMb = flashSize / 1024 / 1024;
		float flashUsedApproxMb = flashUsedApprox / 1024.0f / 1024.0f;
		uint32_t percent = flashUsedApprox / flashSize;
		NRF_LOG_INFO("Mounted `%s`", flashInfo->name);
		NRF_LOG_INFO("`%s`: Approx " NRF_LOG_FLOAT_MARKER "MB of %dMB used. (%d%%)",
		 flashInfo->name, NRF_LOG_FLOAT(flashUsedApproxMb), flashSizeMb, percent);

		mounted = true;
		return true;
	}

	bool Littlefs::Unmount()
	{
		NRF_LOG_VERBOSE("Littlefs::Unmount()");

		if (mounted == false)
		{
			return true;
		}

		NRF_LOG_INFO("Unmounting littlefs on flash device...");

		int error = lfs_unmount(&littlefs);

		if (error)
		{
			NRF_LOG_ERROR("Littlefs unmount failed: (%d)", error);
			return false;
		}

		flash->uninitialize();

		NRF_LOG_INFO("Unmounted.");

		mounted = false;

		return true;
	}

	bool Littlefs::FileOpen(FlashFile& file, const char* filePath, uint16_t flags)
	{
		NRF_LOG_VERBOSE("Littlefs::FileOpen(): path: %s", NRF_LOG_PUSH((char*)filePath));
		int result = lfs_file_open(&littlefs, &file, filePath, flags);

		// if the error was no directory entry and we are allowing file creation,
		if (result == LFS_ERR_NOENT && (flags & LFS_O_CREAT) != 0)
		{
			// try creating the directory, then open/create the file.
			char path[LFS_NAME_MAX];
			size_t length;
			cwk_path_get_dirname(filePath, &length);
  			sprintf(path, "%.*s", length - 1, filePath); // -1 on length for no trailing slash.

			FlashDirectory dir;
			if (DirectoryCreate(dir, path))
			{
				NRF_LOG_VERBOSE("Fallback Littlefs::DirectoryCreate() succeded, retrying open.");
				// directory created, now try opening the file again.
				result = lfs_file_open(&littlefs, &file, filePath, flags);

				// if it still failed, may god have mercy on their souls...
			}
		}

		NRF_LOG_VERBOSE("Littlefs::FileOpen(): Finished, file.id: %d", file.id);
		LFS_REPORT_AND_RETURN(result);
	}

	bool Littlefs::FileRead(FlashFile& file, void* buffer, size_t amountToRead, size_t* amountRead)
	{
		NRF_LOG_VERBOSE("Littlefs::FileRead(): file: %d", file.id);
		lfs_ssize_t readResult = lfs_file_read(&littlefs, &file, buffer, amountToRead);

		if (readResult >= 0)
		{
			(*amountRead) = readResult;
		}

		LFS_REPORT_AND_RETURN(readResult);
	}

	bool Littlefs::FileWrite(FlashFile& file, const void* buffer, size_t bufferLength, size_t* amountWritten)
	{
		NRF_LOG_VERBOSE("Littlefs::FileWrite(): file: %d", file.id);
		lfs_ssize_t writeResult = lfs_file_write(&littlefs, &file, buffer, bufferLength);

		if (writeResult >= 0)
		{
			(*amountWritten) = writeResult;
		}

		LFS_REPORT_AND_RETURN(writeResult);
	}

	bool Littlefs::FileSeek(FlashFile& file, size_t offset)
	{
		NRF_LOG_VERBOSE("Littlefs::FileSeek(): file: %d", file.id);
		lfs_off_t resultOffset = lfs_file_seek(&littlefs, &file, offset, LFS_SEEK_SET);
		LFS_REPORT_AND_RETURN(resultOffset);
	}

	bool Littlefs::FileClose(FlashFile& file)
	{
		NRF_LOG_VERBOSE("Littlefs::FileClose(): file: %d", file.id);
		int result = lfs_file_close(&littlefs, &file);
		LFS_REPORT_AND_RETURN(result);
	}

	bool Littlefs::DirectoryOpen(FlashDirectory& dir, const char* directoryPath)
	{
		NRF_LOG_VERBOSE("Littlefs::DirectoryOpen(): path: %s", NRF_LOG_PUSH((char*)directoryPath));
		int result = lfs_dir_open(&littlefs, &dir, directoryPath);
		NRF_LOG_VERBOSE("Littlefs::DirectoryOpen(): Finished, dir.id: %d", dir.id);
		LFS_REPORT_AND_RETURN(result);
	}

	bool Littlefs::DirectoryRead(FlashDirectory& dir, FlashFileInfo& info)
	{
		NRF_LOG_VERBOSE("Littlefs::DirectoryRead(): dir: %d", dir.id);
		int result = lfs_dir_read(&littlefs, &dir, &info);
		LFS_REPORT_AND_RETURN(result);
	}

	bool Littlefs::DirectoryClose(FlashDirectory& dir)
	{
		NRF_LOG_VERBOSE("Littlefs::DirectoryClose(): dir: %d", dir.id);
		int result = lfs_dir_close(&littlefs, &dir);
		LFS_REPORT_AND_RETURN(result);
	}

	bool Littlefs::DirectoryCreate(FlashDirectory& dir, const char* directoryPath)
	{
		NRF_LOG_VERBOSE("Littlefs::DirectoryCreate(): path: %s", NRF_LOG_PUSH((char*)directoryPath));
		int result = lfs_mkdir(&littlefs, directoryPath);
		LFS_REPORT_AND_RETURN(result);
	}

	bool Littlefs::FileStat(FlashFileInfo& fileInfo, const char* path)
	{
		NRF_LOG_VERBOSE("Littlefs::FileStat(): path: %s", NRF_LOG_PUSH((char*)path));
		int result = lfs_stat(&littlefs, path, &fileInfo);
		LFS_REPORT_AND_RETURN(result);
	}

	const char* Littlefs::GetFlashName()
	{
		return flashInfo->name;
	}

	namespace
	{
		int StorageDriverToLfsError(int error)
		{
			if (error >= 0 || error == FILES_STORAGE_SUCCESS)
			{
				return LFS_ERR_OK;
			}

			// errors come back from the API negative,
			// but defines are positive.
			error = -error;

			switch (error)
			{
				default:
				case FILES_STORAGE_ERROR_INTERNAL:
				case FILES_STORAGE_ERROR_INVALID_LENGTH:
				case FILES_STORAGE_ERROR_NULL:
				case FILES_STORAGE_ERROR_BUSY:
				case FILES_STORAGE_ERROR_FORBIDDEN:
				case FILES_STORAGE_ERROR_TIMEOUT:
				case FILES_STORAGE_ERROR_NOT_SUPPORTED:
					return LFS_ERR_IO;
				case FILES_STORAGE_ERROR_INVALID_PARAM:
				case FILES_STORAGE_ERROR_INVALID_STATE:
				case FILES_STORAGE_ERROR_INVALID_ADDR:
					return LFS_ERR_INVAL;
				case FILES_STORAGE_ERROR_NO_MEM:
					return LFS_ERR_NOMEM;
				case FILES_STORAGE_ERROR_ALREADY_INITIALIZED:
					return LFS_ERR_OK;
			}
		}

		int LittlefsApiRead(const struct lfs_config* c, lfs_block_t block,
			lfs_off_t off, void *buffer, lfs_size_t size)
		{
			size_t address = (block * c->block_size) + off;

			int32_t result = flash->read(address, (uint8_t*)buffer, size);

			return StorageDriverToLfsError(result);
		}

		int LittlefsApiProgram(const struct lfs_config* c, lfs_block_t block,
			lfs_off_t off, const void *buffer, lfs_size_t size)
		{
			size_t address = (block * c->block_size) + off;

			int32_t result = flash->program(address, (uint8_t*)buffer, size);

			return StorageDriverToLfsError(result);
		}

		int LittlefsApiErase(const struct lfs_config* c, lfs_block_t block)
		{
			// no offset, because we have to erase the whole block!
			size_t address = (block * c->block_size);

			uint32_t result = flash->erase_sector(address);

			return StorageDriverToLfsError(result);
		}

		int LittlefsApiSync(const struct lfs_config* c)
		{
			int32_t result = flash->sync();

			return StorageDriverToLfsError(result);
		}
	}
} // namespace files
