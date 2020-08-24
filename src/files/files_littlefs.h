#pragma once

#include "files_file_system.h"

#include "lfs.h"

namespace files
{
	using FlashFile = lfs_file_t;
	using FlashFileInfo = lfs_info;
	using FlashDirectory = lfs_dir;

	class Littlefs : public FileSystem<FlashFile, FlashDirectory, FlashFileInfo>
	{
	public:
		Littlefs() = default;
		virtual ~Littlefs() = default;
		Littlefs(const Littlefs&) = delete;
		Littlefs& operator=(const Littlefs&) = delete;

		// disk operation interface
		virtual bool Mount() override;
		virtual bool Unmount() override;

		// file interface
		virtual bool FileOpen(FlashFile& file, const char* filePath, uint16_t flags) override;
		virtual bool FileRead(FlashFile& file, void* buffer, size_t amountToRead, size_t* amountRead) override;
		virtual bool FileWrite(FlashFile& file, const void* buffer, size_t bufferLength, size_t* amountWritten) override;
		virtual bool FileSeek(FlashFile& file, size_t offset) override;
		virtual bool FileClose(FlashFile& file) override;

		// directory interface
		virtual bool DirectoryOpen(FlashDirectory& dir, const char* directoryPath) override;
		virtual bool DirectoryRead(FlashDirectory& dir, FlashFileInfo& info) override;
		virtual bool DirectoryClose(FlashDirectory& dir) override;
		virtual bool DirectoryCreate(FlashDirectory& dir, const char* directoryPath);

		// file information interface
		virtual bool FileStat(FlashFileInfo& fileInfo, const char* path) override;

		// drive information interface
		virtual inline const char* GetDriveLabel() override { return GetFlashName(); }
		virtual inline uint32_t GetDriveSerial() override { return 0; }
	private:
		lfs_t littlefs;
		const char* GetFlashName();
	};
} // namespace files
