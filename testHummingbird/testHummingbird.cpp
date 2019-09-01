#include <iostream>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include "syncedmemory.h"
#include "common.h"

using namespace hummingbird;

int test_hummingbird_common()
{
    Hummingbird& hb = Hummingbird::Get();

    return 0;
}

int test_syncedmemory()
{
	const size_t DATA_SIZE = 100;

	SyncedMemory mem(DATA_SIZE);
	boost::shared_ptr<SyncedMemory> psynmem = boost::make_shared<SyncedMemory>(DATA_SIZE * sizeof(float));
	if (mem.getHead() != SyncedMemory::UNINITIALIZED || mem.getDataSize() != DATA_SIZE ||
		mem.cpu_data() == nullptr || mem.mutable_cpu_data() == nullptr || mem.getHead() != SyncedMemory::HEAD_AT_CPU ||
		psynmem->getDataSize() != DATA_SIZE*sizeof(float))
	{
		std::cout << "test_syncedmemory ERROR" << std::endl;
		return -1;
	}

	void *pvcpu_data = mem.mutable_cpu_data();
	if (mem.getHead() != SyncedMemory::HEAD_AT_CPU)
	{
		std::cout << "test_syncedmemory ERROR" << std::endl;
		return -1;
	}

	memset(pvcpu_data, 1, mem.getDataSize());
	for (int i = 0; i < mem.getDataSize(); i++)
	{
		if (1 != (static_cast<char *>(pvcpu_data)[i]))
		{
			std::cout << "test_syncedmemory ERROR" << std::endl;
			return -1;
		}
	}

	memset(pvcpu_data, 2, mem.getDataSize());
	for (int i = 0; i < mem.getDataSize(); i++)
	{
		if (2 != (static_cast<char *>(pvcpu_data)[i]))
		{
			std::cout << "test_syncedmemory ERROR" << std::endl;
			return -1;
		}
	}
	
	return  0;
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
