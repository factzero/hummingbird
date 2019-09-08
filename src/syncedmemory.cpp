#include "syncedmemory.h"
#include "hb_math_functions.h"

namespace hummingbird
{
SyncedMemory::SyncedMemory()
	:m_pvcpu_data(nullptr), m_pvgpu_data(nullptr), m_data_size(0), m_head(UNINITIALIZED),
    m_own_cpu_data(false), m_own_gpu_data(false), m_cpu_malloc_use_cuda(false)
{
#ifndef CPU_ONLY
    CUDA_CHECK(cudaGetDevice(&m_device));
#endif
}

SyncedMemory::SyncedMemory(size_t size)
    :m_pvcpu_data(nullptr), m_pvgpu_data(nullptr), m_data_size(size), m_head(UNINITIALIZED),
    m_own_cpu_data(false), m_own_gpu_data(false), m_cpu_malloc_use_cuda(false)
{
#ifndef CPU_ONLY
    CUDA_CHECK(cudaGetDevice(&m_device));
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
        hb_cpu_memset(m_data_size, 0, m_pvcpu_data);
		m_head = HEAD_AT_CPU;
		m_own_cpu_data = true;
		break;
	case HEAD_AT_GPU:
#ifndef CPU_ONLY
        if (nullptr == m_pvcpu_data)
        {
            HBMallocHost(&m_pvcpu_data, m_data_size, &m_cpu_malloc_use_cuda);
            m_own_cpu_data = true;
        }
        hb_gpu_memcpy(m_data_size, m_pvgpu_data, m_pvcpu_data);
        m_head = SYNCED;
#else
        NO_GPU
#endif
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
    switch (m_head)
    {
    case UNINITIALIZED:
        CUDA_CHECK(cudaMalloc(&m_pvgpu_data, m_data_size));
        hb_gpu_memset(m_data_size, 0, m_pvgpu_data);
        m_head = HEAD_AT_GPU;
        m_own_gpu_data = true;
        break;
    case HEAD_AT_CPU:
        if (nullptr == m_pvgpu_data)
        {
            CUDA_CHECK(cudaMalloc(&m_pvgpu_data, m_data_size));
            m_own_gpu_data = true;
        }
        hb_gpu_memcpy(m_data_size, m_pvcpu_data, m_pvgpu_data);
        m_head = SYNCED;
        break;
    case HEAD_AT_GPU:
    case SYNCED:
        break;
}
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
    to_gpu();
    return (const void*)m_pvgpu_data;
#else
	NO_GPU;
	return nullptr;
#endif
}

void SyncedMemory::set_gpu_data(void *pvdata)
{
#ifndef CPU_ONLY
    NO_IMPLEMENT
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
    to_gpu();
    m_head = HEAD_AT_GPU;
    return (void*)m_pvgpu_data;
#else
	NO_GPU;
	return nullptr;
#endif
}

}