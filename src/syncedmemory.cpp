#include "syncedmemory.h"
#include "device_alternate.h"

namespace hummingbird
{
SyncedMemory::SyncedMemory()
	:m_pvcpu_data(nullptr), m_pvgpu_data(nullptr), m_data_size(0), m_head(UNINITIALIZED),
    m_own_cpu_data(false), m_own_gpu_data(false), m_cpu_malloc_use_cuda(false)
{
#ifndef CPU_ONLY
    cudaGetDevice(&m_device);
#endif
}

SyncedMemory::SyncedMemory(size_t size)
    :m_pvcpu_data(nullptr), m_pvgpu_data(nullptr), m_data_size(size), m_head(UNINITIALIZED),
    m_own_cpu_data(false), m_own_gpu_data(false), m_cpu_malloc_use_cuda(false)
{
#ifndef CPU_ONLY
    cudaGetDevice(&m_device);
#endif
}

SyncedMemory::~SyncedMemory()
{

}

inline void SyncedMemory::to_cpu()
{
	switch (m_head)
	{
	case UNINITIALIZED:
		HBMallocHost(&m_pvcpu_data, m_data_size, &m_cpu_malloc_use_cuda);
		memset(m_pvcpu_data, 0, m_data_size);
		m_head = HEAD_AT_CPU;
		m_own_cpu_data = true;
		break;
	case HEAD_AT_GPU:
		NO_GPU
		break;
	case HEAD_AT_CPU:
	case SYNCED:
		break;
	}

	return;
}

inline void SyncedMemory::to_gpu()
{
#ifndef CPU_ONLY

#else
	NO_GPU
#endif

	return;
}

const void* SyncedMemory::cpu_data()
{
	to_cpu();
	return (const void*)m_pvcpu_data;
}

void SyncedMemory::set_cpu_data(void *pvdata)
{
	if (m_own_cpu_data)
	{
		HBFreeHost(m_pvcpu_data, m_cpu_malloc_use_cuda);
	}
	m_pvcpu_data = pvdata;
	m_head = HEAD_AT_CPU;
	m_own_cpu_data = false;

	return;
}

const void* SyncedMemory::gpu_data()
{
#ifndef CPU_ONLY

#else
	NO_GPU;
	return nullptr;
#endif
}

void SyncedMemory::set_gpu_data(void *pvdata)
{
#ifndef CPU_ONLY

#else
	NO_GPU;
#endif
	return;
}

void* SyncedMemory::mutable_cpu_data()
{
	to_cpu();
	m_head = HEAD_AT_CPU;
	return m_pvcpu_data;
}

void* SyncedMemory::mutable_gpu_data()
{
#ifndef CPU_ONLY

#else
	NO_GPU;
	return nullptr;
#endif
}

}