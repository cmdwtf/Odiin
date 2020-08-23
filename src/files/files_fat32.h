#pragma once

#include <cstdint>
#include <cstddef>

#include "ff.h"

#include "files_file_system.h"
#include "usb/usb_listener.h"

namespace files
{
	using Fat32File = FIL;
	using Fat32FileInfo = FILINFO;
	using Fat32Directory = DIR;

	class Fat32 : public FileSystem<Fat32File, Fat32Directory, Fat32FileInfo>,
			public usb::Listener
	{
	public:
		Fat32();
		virtual ~Fat32() = default;
		Fat32(const Fat32&) = delete;
		Fat32& operator=(const Fat32&) = delete;

		virtual bool Mount() override;
		virtual bool Unmount() override;

		virtual bool FileOpen(Fat32File& file, const char* filePath, uint8_t mode) override;
		virtual bool FileRead(Fat32File& file, void* buffer, size_t amountToRead, size_t* amountRead) override;
		virtual bool FileWrite(Fat32File& file, const void* buffer, size_t bufferLength, size_t* amountWritten) override;
		virtual bool FileSeek(Fat32File& file, size_t offset) override;
		virtual bool FileClose(Fat32File& file) override;

		virtual bool DirectoryOpen(Fat32Directory& dir, const char* directoryPath) override;
		virtual bool DirectoryRead(Fat32Directory& dir, Fat32FileInfo& info) override;
		virtual bool DirectoryClose(Fat32Directory& dir) override;

		virtual bool FileStat(Fat32FileInfo& fileInfo, const char* path) override;

		virtual inline const char* GetDriveLabel() override { return driveLabel; }
		virtual inline uint32_t GetDriveSerial() override { return driveSerial; }

		virtual void UsbWillEnable(app_usbd_event_type_t event) override;
		virtual void UsbDidDisable(app_usbd_event_type_t event) override;

		inline bool IsInitialized() { return initialized; }

	private:
		FATFS fileSystem;
		uint8_t diskIndex = -1;
		bool registered = false;
		bool initialized = false;
		bool autoRemountAfterUsbDisconnect = true;
		uint32_t driveSerial = 0;
		char driveLabel[16] = { 0 };
		bool RegisterBlockDevice();
		bool Initialize();
		bool Uninitialize();
	};
} // namespace files
