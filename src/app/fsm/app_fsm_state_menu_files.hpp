#pragma once

#include "cwalk.h"
#include "nrf_assert.h"

#include "app_fsm_state_menu_base.hpp"
#include "display/screen_ui/display_screen_ui.h"
#include "files/files_fat32.h"

namespace app::fsm
{

	class MenuFiles
		: public MenuBase<32, 64>
	{
	public:
		typedef void (*FileSelectedCallback)(const char*);

	private:
		static const uint8_t FLAG_DEFAULT_SELECT_FILE = 0;
		static const uint8_t FLAG_DEFAULT_SELECT_DIR = 1;
		static const uint8_t FLAG_DIR_UP = 2;
		static const uint8_t FLAG_PAGE_NEXT = 3;
		static const uint8_t FLAG_PAGE_PREV = 4;
		static const uint8_t FLAG_BACK = 5;

		FileSelectedCallback fileSelectedCallback = nullptr;

		size_t paginationOffset = 0;

		static constexpr size_t PATH_SIZE_MAX = FF_LFN_BUF + 1;
		char activePath[PATH_SIZE_MAX] = {0};
		size_t activePathItemCount = 0;
		size_t displayedFileCount = 0;
		bool isRoot = false;

		files::Fat32* sdCard = nullptr;

		size_t AppendDirectoryMenu(const char* path, menu_option_desc_t* output, size_t outputLength, char** stringBuffers, size_t stringBufferLength, size_t directoryOffset)
		{
			ASSERT(path != nullptr);
			ASSERT(output != nullptr);
			ASSERT(stringBuffers != nullptr);

			files::Fat32Directory dir;

			size_t outputIndex = 0;

			if (sdCard->DirectoryOpen(dir, path))
			{
				files::Fat32FileInfo info;
				while (sdCard->DirectoryRead(dir, info))
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
					output[outputIndex].click_cb = MenuOptionPressedCallback;

					if (directory)
					{
						output[outputIndex].prefix = (const void*)LV_SYMBOL_DIRECTORY;
						output[outputIndex].user_flags = FLAG_DEFAULT_SELECT_DIR;
					}
					else
					{
						output[outputIndex].prefix = (const void*)LV_SYMBOL_FILE; // I need better symbols.
						output[outputIndex].user_flags = FLAG_DEFAULT_SELECT_FILE;
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

		size_t CountDirectoryItems(const char* path)
		{
			ASSERT(path != nullptr);

			files::Fat32Directory dir;

			size_t count = 0;

			if (sdCard->DirectoryOpen(dir, path))
			{
				files::Fat32FileInfo info;
				while (sdCard->DirectoryRead(dir, info))
				{
					bool hidden = (info.fattrib & AM_HID);
					bool system = (info.fattrib & AM_SYS);

					if (hidden || system)
					{
						// no interest in hidden or system files
						continue;
					}

					++count;
				}
			}

			return count;
		}

		size_t AppendDirectoryTopper(bool dirIsRoot, menu_option_desc_t* output, size_t outputLength, char** stringBuffers, size_t stringBufferLength)
		{
			const size_t maxUpperPagecount = 3;
			ASSERT(outputLength >= maxUpperPagecount);

			size_t index = 0;

			if (dirIsRoot == false)
			{
				output[index].option = sdCard->GetRelativeParentDirectory();
				output[index].prefix = LV_SYMBOL_NEW_LINE;
				output[index].click_cb = MenuOptionPressedCallback;
				output[index].user_flags = FLAG_DIR_UP;
				++index;
			}

			if (paginationOffset > 0)
			{
				// we have paged in, show 'previous page' button
				output[index].option = "<Previous Page>";
				output[index].prefix = LV_SYMBOL_PREV;
				output[index].click_cb = MenuOptionPressedCallback;
				output[index].user_flags = FLAG_PAGE_PREV;
				++index;
			}

			if (activePathItemCount - paginationOffset > (MENU_OPTIONS_LENGTH - maxUpperPagecount))
			{
				// check to see if we have more items than we can display
				output[index].option = "<Next Page>";
				output[index].prefix = LV_SYMBOL_NEXT;
				output[index].click_cb = MenuOptionPressedCallback;
				output[index].user_flags = FLAG_PAGE_NEXT;
				++index;
			}

			return index;
		}

		void UpdateUI()
		{
			menuOptionCount = 0;

			size_t topperCount = AppendDirectoryTopper(isRoot,
													   menuOptions, MENU_OPTIONS_LENGTH,
													   menuStrings, MENU_OPTION_STRING_LENGTH);

			displayedFileCount = AppendDirectoryMenu(activePath,
													 menuOptions + topperCount, MENU_OPTIONS_LENGTH - topperCount,
													 menuStrings, MENU_OPTION_STRING_LENGTH,
													 paginationOffset);

			menuOptionCount = topperCount + displayedFileCount;

			UI_FUNCTION(list_menu, set_options)
			(menuOptions, menuOptionCount);
			UI_FUNCTION(list_menu, set_title)
			(activePath);
		}

		//////////////////////////////////////////////////////////////////////////
		// Menu Option Handlers

		void SelectFile(const char* filename)
		{
			char fullPathBuffer[PATH_SIZE_MAX] = {0};

			// build our full path to the file
			UNUSED_RETURN_VALUE(cwk_path_get_absolute(activePath, filename, fullPathBuffer, PATH_SIZE_MAX));

			if (fileSelectedCallback != nullptr)
			{
				fileSelectedCallback(fullPathBuffer);
			}
			else
			{
				NRF_LOG_WARNING("File selected but no callback was set. File: %s", fullPathBuffer);
			}
		}

		void PushDirectory(const char* directoryName)
		{
			paginationOffset = 0;
			UNUSED_RETURN_VALUE(cwk_path_get_absolute(activePath, directoryName, activePath, PATH_SIZE_MAX));
			isRoot = (strcmp(activePath, sdCard->GetRootDirectory()) == 0);
			activePathItemCount = CountDirectoryItems(activePath);
			UpdateUI();
		}

		void PopDirectory()
		{
			if (isRoot)
			{
				NRF_LOG_WARNING("Tried to PopDirectory() while we are at the root.");
				return;
			}

			paginationOffset = 0;
			UNUSED_RETURN_VALUE(cwk_path_get_absolute(activePath, sdCard->GetRelativeParentDirectory(), activePath, PATH_SIZE_MAX));
			isRoot = (strcmp(activePath, sdCard->GetRootDirectory()) == 0);
			activePathItemCount = CountDirectoryItems(activePath);
			UpdateUI();
		}

		void PageChange(int8_t deltaPages)
		{
			paginationOffset += displayedFileCount * deltaPages;

			if (paginationOffset > activePathItemCount)
			{
				paginationOffset = 0;
			}

			UpdateUI();
		}

		//////////////////////////////////////////////////////////////////////////
		// State events

		void entry() override
		{
			LOG_STATE_ENTER(MenuFiles);

			sdCard = Odiin->GetSdCard();

			UI_CREATE(list_menu);

			// must set back callback before activate, or button will hide.
			UI_FUNCTION(list_menu, set_back_clicked_cb)
			([]()
			 {
				 static menu_option_desc_t backOption;
				 backOption.user_flags = FLAG_BACK;
				 app::fsm::MenuOptionPressedEvent e;
				 e.Option = &backOption;
				 Odiin->SendEvent(e);
			 });

			UI_ACTIVATE(list_menu, Keypad->GetInputGroup());

			// push the root path if we don't have one set.
			if (strlen(activePath) == 0)
			{
				PushDirectory(sdCard->GetRootDirectory());
			}
			else
			{
				// we entered from a state where we had a path
				// already set, just update the UI for it.
				UpdateUI();
			}
		}

		void exit() override
		{
			// clear callbacks as we leave this state.
			fileSelectedCallback = nullptr;
			LOG_STATE_EXIT(MenuFiles);
		}

		void react(MenuOptionPressedEvent const& event) override
		{
			switch (event.Option->user_flags)
			{
			case FLAG_DEFAULT_SELECT_FILE:
				SelectFile(event.Option->option);
				break;
			case FLAG_DEFAULT_SELECT_DIR:
				PushDirectory(event.Option->option);
				break;
			case FLAG_DIR_UP:
				PopDirectory();
				break;
			case FLAG_PAGE_NEXT:
				PageChange(1);
				break;
			case FLAG_PAGE_PREV:
				PageChange(-1);
				break;
			case FLAG_BACK:
				if (isRoot)
				{
					// if we are at the root of the card, go home.
					Odiin->SendEvent(app::fsm::GoHomeEvent());
				}
				else
				{
					// otherwise, just move up a directory.
					PopDirectory();
				}
				break;
			default:
				NRF_LOG_WARNING("Unhandled menu option flag. (%d)", event.Option->user_flags);
				break;
			}
		}

	public:
		inline void SetFileSelectedCallback(FileSelectedCallback callback)
		{
			fileSelectedCallback = callback;
		}
	};

} // namespace app::fsm
