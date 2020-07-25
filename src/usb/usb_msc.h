#pragma once

#include <cstdint>

namespace Usb
{
	class MassStorageClass
	{
	public:
		MassStorageClass() = default;
		virtual ~MassStorageClass() = default;
		MassStorageClass(const MassStorageClass &) = delete;
		MassStorageClass &operator=(const MassStorageClass &) = delete;

		void RegisterClass();
	private:

	};
} // namespace Usb
