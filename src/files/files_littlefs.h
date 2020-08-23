#pragma once

#include "files_file_system.h"

#include "lfs.h"

namespace files
{
	using FlashFile = lfs_file_t;
	using FlashFileInfo = lfs_info;
	using FlashDirectory = lfs_dir;

	class LittleFs : public FileSystem<FlashFile, FlashDirectory, FlashFileInfo>
	{
	public:
		LittleFs() = default;
		virtual ~LittleFs() = default;
		LittleFs(const LittleFs&) = delete;
		LittleFs& operator=(const LittleFs&) = delete;

		// disk operation interface
		virtual bool Mount() override;
		virtual bool Unmount() override;

		// file interface
		virtual bool FileOpen(FlashFile& file, const char* filePath, uint8_t mode) override;
		virtual bool FileRead(FlashFile& file, void* buffer, size_t amountToRead, size_t* amountRead) override;
		virtual bool FileWrite(FlashFile& file, const void* buffer, size_t bufferLength, size_t* amountWritten) override;
		virtual bool FileSeek(FlashFile& file, size_t offset) override;
		virtual bool FileClose(FlashFile& file) override;

		// directory interface
		virtual bool DirectoryOpen(FlashDirectory& dir, const char* directoryPath) override;
		virtual bool DirectoryRead(FlashDirectory& dir, FlashFileInfo& info) override;
		virtual bool DirectoryClose(FlashDirectory& dir) override;

		// file information interface
		virtual bool FileStat(FlashFileInfo& fileInfo, const char* path) override;

		// drive information interface
		virtual inline const char* GetDriveLabel() override { return ""; }
		virtual inline uint32_t GetDriveSerial() override { return 0; }
	private:
		lfs_t littlefs;
	};
} // namespace files
