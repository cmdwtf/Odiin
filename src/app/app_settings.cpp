#include "app_settings.h"

#include "app_log_module.ii"

namespace app::settings
{
	namespace
	{
		const char* settingsFilePath = "/sys/settings.bin";
		constexpr size_t settingsBufferSize = 256;
		bool Parse(const uint8_t* fileData, size_t dataLength);

		static_assert (settingsBufferSize >= sizeof(app_settings_t) + 16);
	}

	bool Load(files::Littlefs& flash)
	{
		uint8_t buffer[settingsBufferSize] = { 0 };
		if (flash.IsMounted())
		{
			NRF_LOG_VERBOSE("Loading config from flash `%s`", settingsFilePath);
			files::FlashFile file;
			if (flash.FileOpen(file, settingsFilePath, LFS_O_RDONLY))
			{
				size_t readAmount;
				if (flash.FileRead(file, buffer, settingsBufferSize, &readAmount))
				{
					flash.FileClose(file);

					if (readAmount == 0)
					{
						NRF_LOG_WARNING("Read settings file, but it was empty.");
						return false;
					}
					else
					{
						if (Parse(buffer, readAmount) == false)
						{
							NRF_LOG_WARNING("Failed to parse settings file!");
							return false;
						}

						return true;
					}
				}
				else
				{
					NRF_LOG_WARNING("Failed to read settings file!");
					return false;
				}
			}
			else
			{
				NRF_LOG_WARNING("Failed to open settings file!");
				return false;
			}
		}
		else
		{
			NRF_LOG_WARNING("Cannot load settings with flash device unmounted.");
			return false;
		}
	}

	bool Save(files::Littlefs& flash)
	{
		if (flash.IsMounted())
		{
			NRF_LOG_VERBOSE("Saving config to flash `%s`", settingsFilePath);
			files::FlashFile file;
			if (flash.FileOpen(file, settingsFilePath, LFS_O_WRONLY | LFS_O_CREAT | LFS_O_TRUNC))
			{
				size_t wroteAmount;
				if (flash.FileWrite(file, &SETTINGS, sizeof(SETTINGS), &wroteAmount))
				{
					if (flash.FileClose(file))
					{
						NRF_LOG_VERBOSE("Settings saved.");
						return true;
					}
					else
					{
						NRF_LOG_WARNING("Failed to close file after writing, save may have been successful...");
						return false;
					}
				}
				else
				{
					NRF_LOG_WARNING("Failed to write settings file!");
					return false;
				}
			}
			else
			{
				NRF_LOG_WARNING("Failed to open settings file!");
				return false;
			}
		}
		else
		{
			NRF_LOG_WARNING("Cannot save settings with flash device unmounted.");
			return false;
		}

		return false;
	}

	namespace
	{
		bool Parse(const uint8_t* fileData, size_t dataLength)
		{
			uint32_t version = 0xFFFFFFFF;
			// make sure we're working on the same size data here.
			static_assert(sizeof(version) == sizeof(SETTINGS.version));

			memcpy(&version, fileData, sizeof(version));

			size_t settingsSize = sizeof(SETTINGS);

			if (version == CURRENT_SETTINGS_VERSION && dataLength == settingsSize)
			{
				// happy path, we can memcopy the data and we're done.
				memcpy(&SETTINGS, fileData, settingsSize);
				return true;
			}
			else if (version != CURRENT_SETTINGS_VERSION)
			{
				// #todo: handle version upgrading. As there's only one version now,
				// we don't have anything to do here, we just can't help if you get here.
				return false;
			}
			else if (dataLength != settingsSize)
			{
				// version matched, but size didn't match, we will handle this
				// by failing, and allowing default settings to get created.
				return false;
			}

			return false;
		}
	}
}
