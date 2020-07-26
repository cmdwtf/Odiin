#pragma once

#include <cstddef>
#include "display/screen_ui/display_screen_ui.h"

namespace App
{
	size_t CreateMainMenuOptions(menu_option_desc_t* output, size_t outputLength,
								 char** stringBuffers, size_t stringBufferLength);

	size_t AppendDirectoryMenu(const char *path,
							   menu_option_desc_t* output, size_t outputLength,
							   char** stringBuffers, size_t stringBufferLength,
							   size_t directoryOffset = 0);
}
