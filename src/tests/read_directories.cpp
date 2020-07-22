#include "tests.h"

#include "app/app_logs.h"
#include "global/global_data.h"

void readDirectory(const char* dirName, int depth = 0)
{
	Files::SdCardDirectory dir;
	if (SDCARD.DirectoryOpen(dir, dirName))
	{
		NRF_LOG_RAW_INFO("%s\t<dir>\r\n", nrf_log_push((char*)dirName));

		Files::SdCardFileInfo info;
		while (SDCARD.DirectoryRead(dir, info))
		{
			const char* readOnly = (info.fattrib & AM_RDO) ? "R" : " ";
			const char* hidden = (info.fattrib & AM_HID) ? "H" : " ";
			const char* system = (info.fattrib & AM_SYS) ? "S" : " ";
			bool directory = (info.fattrib & AM_DIR);
			const char* archive = (info.fattrib & AM_ARC) ? "A" : " ";

			if (directory)
			{
				char recurseInto[256] = { 0 };
				snprintf(recurseInto, 256, "%s/%s", dirName, info.fname);
				readDirectory(recurseInto, depth+1);
			}
			else
			{
				for (int scan = 0; scan < depth; ++scan)
				{
					NRF_LOG_RAW_INFO("-");
				}

				if (depth == 0)
				{
					NRF_LOG_RAW_INFO("/%s %s%s%s%s\r\n", nrf_log_push(info.fname), readOnly, hidden, system, archive);
				}
				else
				{
					NRF_LOG_RAW_INFO("%s/%s %s%s%s%s\r\n", nrf_log_push((char*)dirName), nrf_log_push(info.fname), readOnly, hidden, system, archive);
				}
			}
			app_log_flush();
		}

		SDCARD.DirectoryClose(dir);
	}
}

void TEST_ReadDirectories()
{
	NRF_LOG_INFO("Starting TEST_ReadDirectories().");
	if (SDCARD.Mount())
	{
		NRF_LOG_RAW_INFO("\r\n\r\n");
		readDirectory(Files::SdCard::RootDirectory);
		NRF_LOG_RAW_INFO("\r\n\r\n");
	}
}
