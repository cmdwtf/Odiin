#include <cstdlib>
#include <new>

// not sure why these deletes were missing from the c++std library, but here they are anyways.

void operator delete(void *ptr, size_t size)
{
	free(ptr);
}

void operator delete[](void *ptr, size_t size)
{
	free(ptr);
}
