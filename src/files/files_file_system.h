#pragma once

#include <cstdint>
#include <cstddef>

namespace files
{
	template <typename FileHandle,
				typename DirectoryHandle = nullptr_t,
				typename FileInfoHandle = nullptr_t>
	class FileSystem
	{
	public:
		FileSystem() = default;
		virtual ~FileSystem() = default;
		FileSystem(const FileSystem&) = delete;
		FileSystem& operator=(const FileSystem&) = delete;

		// disk operation interface
		virtual bool Mount() = 0;
		virtual bool Unmount() = 0;

		// file interface
		virtual bool FileOpen(FileHandle& file, const char* filePath, uint8_t mode) = 0;
		virtual bool FileRead(FileHandle& file, void* buffer, size_t amountToRead, size_t* amountRead) = 0;
		virtual bool FileWrite(FileHandle& file, const void* buffer, size_t bufferLength, size_t* amountWritten) = 0;
		virtual bool FileSeek(FileHandle& file, size_t offset) = 0;
		virtual bool FileClose(FileHandle& file) = 0;

		// directory interface
		virtual bool DirectoryOpen(DirectoryHandle& dir, const char* directoryPath) = 0;
		virtual bool DirectoryRead(DirectoryHandle& dir, FileInfoHandle& info) = 0;
		virtual bool DirectoryClose(DirectoryHandle& dir) = 0;

		// file information interface
		virtual bool FileStat(FileInfoHandle& fileInfo, const char* path) = 0;

		// drive information interface
		virtual inline const char* GetDriveLabel() { return ""; }
		virtual inline uint32_t GetDriveSerial() { return 0; }

		// directory styling
		inline virtual constexpr const char* GetRootDirectory() { return DirectoryUnixStyleRoot; }
		inline virtual constexpr const char* GetRelativeCurrentDirectory() { return DirectoryOneDot; }
		inline virtual constexpr const char* GetRelativeParentDirectory() { return DirectoryTwoDots; }
		inline virtual constexpr const char GetDirectorySeperator() { return DirectorySeperatorUnix; }

	protected:
		static constexpr const char* DirectoryUnixStyleRoot = "/";
		static constexpr const char* DirectoryOneDot = ".";
		static constexpr const char* DirectoryTwoDots = "..";
		static constexpr const char DirectorySeperatorUnix = '/';
		static constexpr const char DirectorySeperatorWindows = '\\';
	};
} // namespace files
