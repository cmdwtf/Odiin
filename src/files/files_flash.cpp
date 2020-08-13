#include "files_flash.h"

namespace files
{
	bool Flash::Mount()
	{
		return false;
	}

	bool Flash::Unmount()
	{
		return false;
	}

	bool Flash::FileOpen(FlashFile& file, const char* filePath, uint8_t mode)
	{
		return false;
	}

	bool Flash::FileRead(FlashFile& file, void* buffer, size_t amountToRead, size_t* amountRead)
	{
		return false;
	}

	bool Flash::FileWrite(FlashFile& file, const void* buffer, size_t bufferLength, size_t* amountWritten)
	{
		return false;
	}

	bool Flash::FileSeek(FlashFile& file, size_t offset)
	{
		return false;
	}

	bool Flash::FileClose(FlashFile& file)
	{
		return false;
	}

	bool Flash::DirectoryOpen(FlashDirectory& dir, const char* directoryPath)
	{
		return false;
	}

	bool Flash::DirectoryRead(FlashDirectory& dir, FlashFileInfo& info)
	{
		return false;
	}

	bool Flash::DirectoryClose(FlashDirectory& dir)
	{
		return false;
	}

	bool Flash::FileStat(FlashFileInfo& fileInfo, const char* path)
	{
		return false;
	}
} // namespace files
