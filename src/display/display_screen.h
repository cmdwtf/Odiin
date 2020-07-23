#pragma once

#include <cstdint>
#include "ili9341.h"

namespace Display
{
	using color_t = uint32_t;
	using coord_t = uint16_t;

	class Screen
	{
	public:
		Screen();
		virtual ~Screen();
		Screen(const Screen &) = delete;
		Screen &operator=(const Screen &) = delete;

		inline bool IsInitialized() { return initialized; }
		void ClearBackground(color_t clearColor = BLACK);
		void DrawText(const char* text, coord_t x, coord_t y, color_t fontColor = WHITE, bool wordWrap = true, bool big = true);
	private:
		bool initialized = false;
	};
} // namespace Display
