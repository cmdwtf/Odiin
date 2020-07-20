#pragma once

#include <cstdint>

namespace Usb
{
	class MassStorageClass
	{
	public:
		MassStorageClass();
		virtual ~MassStorageClass() = default;
		MassStorageClass(const MassStorageClass &) = delete;
		MassStorageClass &operator=(const MassStorageClass &) = delete;

	private:

	};
} // namespace Usb
