#pragma once

#include <cstdint>
#include <cstddef>

#include "ff.h"

#include "files_file_system.h"
#include "usb/usb_listener.h"

namespace files
{
	// #todo: actual abstraction
	using SdCardFile = FIL;
	using SdCardFileInfo = FILINFO;
	using SdCardDirectory = DIR;
	using SdCardFileSystem = FATFS;

	class SdCard : public FileSystem<SdCardFile, SdCardDirectory, SdCardFileInfo>,
			public usb::Listener
	{
	public:
		SdCard();
		virtual ~SdCard() = default;
		SdCard(const SdCard &) = delete;
		SdCard &operator=(const SdCard &) = delete;

		virtual bool Mount() override;
		virtual bool Unmount() override;

		virtual bool FileOpen(SdCardFile& file, const char* filePath, uint8_t mode) override;
		virtual bool FileRead(SdCardFile& file, void* buffer, size_t amountToRead, size_t* amountRead) override;
		virtual bool FileWrite(SdCardFile& file, const void* buffer, size_t bufferLength, size_t* amountWritten) override;
		virtual bool FileSeek(SdCardFile& file, size_t offset) override;
		virtual bool FileClose(SdCardFile& file) override;

		virtual bool DirectoryOpen(SdCardDirectory& dir, const char* directoryPath) override;
		virtual bool DirectoryRead(SdCardDirectory& dir, SdCardFileInfo& info) override;
		virtual bool DirectoryClose(SdCardDirectory& dir) override;

		virtual bool FileStat(SdCardFileInfo& fileInfo, const char* path) override;

		inline const char* GetDriveLabel() { return driveLabel; }
		inline uint32_t GetDriveSerial() { return driveSerial; }

		virtual void UsbWillEnable(app_usbd_event_type_t event) override;
		virtual void UsbDidDisable(app_usbd_event_type_t event) override;

		inline bool IsInitialized() { return initialized; }
		inline bool IsMounted() { return mounted; }

	private:
		SdCardFileSystem fileSystem;
		uint8_t diskIndex = -1;
		bool registered = false;
		bool initialized = false;
		bool mounted = false;
		bool autoRemountAfterUsbDisconnect = true;
		uint32_t driveSerial = 0;
		char driveLabel[16] = { 0 };
		bool RegisterBlockDevice();
		bool Initialize();
		bool Uninitialize();
	};
} // namespace files
