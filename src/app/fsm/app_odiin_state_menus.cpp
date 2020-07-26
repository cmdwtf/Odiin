#include "app_odiin_state_menus.h"

#include "app/app_odiin.h"
#include "files/sdcard.h"
#include "nrf_assert.h"

#include "nrf_log.h"

namespace App
{
	void NyiMenuOptionCallback(menu_option_desc_t* o, lv_group_t* group)
	{
		NRF_LOG_WARNING("Option %s clicked, NYI", NRF_LOG_PUSH((char*)o->option));

		static const char* buttonMap[] = { "Aw, man.", "" };

		static msgbox_desc_t desc;
		desc.parent = lv_scr_act();
		desc.group = group;
		desc.message_text = "Oof, this feature isn't implemented yet. Sorry!";
		desc.button_map = buttonMap;

		ui_common_msgbox_show(&desc);
	};

	size_t CreateMainMenuOptions(menu_option_desc_t* output, size_t outputLength, char** stringBuffers, size_t stringBufferLength)
	{
		ASSERT(outputLength >= 4)

		size_t index = 0;

		output[index].option = "Load Payload";
		output[index].prefix = LV_SYMBOL_SD_CARD;
		output[index].click_cb = NyiMenuOptionCallback;
		++index;

		output[index].option = "Settings";
		output[index].prefix = LV_SYMBOL_SETTINGS;
		output[index].click_cb = NyiMenuOptionCallback;
		++index;

		output[index].option = "About";
		output[index].prefix = LV_SYMBOL_CHARGE;
		output[index].click_cb = NyiMenuOptionCallback;
		++index;

		output[index].option = "Power Off";
		output[index].prefix = LV_SYMBOL_POWER;
		output[index].click_cb = NyiMenuOptionCallback;
		++index;

		return index;
	}

	size_t AppendDirectoryMenu(const char *path, menu_option_desc_t* output, size_t outputLength, char** stringBuffers, size_t stringBufferLength, size_t directoryOffset /*= 0*/)
	{
		ASSERT(path != nullptr);
		ASSERT(output != nullptr);
		ASSERT(stringBuffers != nullptr);

		Files::SdCard& sd = *App::Odiin::GetInstance()->GetSdCard();
		Files::SdCardDirectory dir;

		size_t outputIndex = 0;

		if (sd.DirectoryOpen(dir, path))
		{
			Files::SdCardFileInfo info;
			while (sd.DirectoryRead(dir, info))
			{
				//bool readOnly = (info.fattrib & AM_RDO);
				bool hidden = (info.fattrib & AM_HID);
				bool system = (info.fattrib & AM_SYS);
				bool directory = (info.fattrib & AM_DIR);
				//bool archive = (info.fattrib & AM_ARC);

				if (hidden || system)
				{
					// no interest in hidden or system files
					continue;
				}

				// skip to the offset they requested.
				if (directoryOffset > 0)
				{
					directoryOffset--;
					continue;
				}

				// copy file name to the buffer
				snprintf(stringBuffers[outputIndex], stringBufferLength, "%s", info.fname);

				// give the buffer to the option
				output[outputIndex].option = stringBuffers[outputIndex];

				if (directory)
				{
					output[outputIndex].prefix = (const void*)LV_SYMBOL_DIRECTORY;
				}
				else
				{
					output[outputIndex].prefix = (const void*)LV_SYMBOL_FILE; // I need better symbols.
				}

				++outputIndex;
				if (outputIndex >= outputLength)
				{
					break;
				}
			}
		}

		return outputIndex;
	}

} // namespace App
