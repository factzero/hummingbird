#include <iostream>
#include "common.h"
#include "test_syncedmem.h"

using namespace hummingbird;

int test_hummingbird_common()
{
    Hummingbird& hb = Hummingbird::Get();

    return 0;
}

int main()
{
	
	Hummingbird::setMode(Hummingbird::CPU);

	if (0 == test_syncedmemory())
	{
		std::cout << "test syncedmemory pass" << std::endl;
	}

    return 0;
}
