#include <iostream>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include "syncedmemory.h"
#include "common.h"
#include "hb_math_functions.h"

namespace hummingbird
{
    int test_syncedmemory()
    {
        const size_t DATA_SIZE = 100;

        SyncedMemory mem(DATA_SIZE);
        boost::shared_ptr<SyncedMemory> psynmem = boost::make_shared<SyncedMemory>(DATA_SIZE * sizeof(float));
        if (mem.getHead() != SyncedMemory::UNINITIALIZED || mem.getDataSize() != DATA_SIZE ||
            mem.cpu_data() == nullptr || mem.mutable_cpu_data() == nullptr || mem.getHead() != SyncedMemory::HEAD_AT_CPU ||
            psynmem->getDataSize() != DATA_SIZE * sizeof(float))
        {
            std::cout << "test_syncedmemory ERROR" << std::endl;
            return -1;
        }

        /* CPU write */
        void *pvcpu_data_wr = mem.mutable_cpu_data();
        if (mem.getHead() != SyncedMemory::HEAD_AT_CPU)
        {
            std::cout << "test_syncedmemory CPU data write ERROR" << std::endl;
            return -1;
        }

        hb_cpu_memset(mem.getDataSize(), 1, pvcpu_data_wr);
        for (int i = 0; i < mem.getDataSize(); i++)
        {
            if (1 != (static_cast<char *>(pvcpu_data_wr)[i]))
            {
                std::cout << "test_syncedmemory CPU data write ERROR" << std::endl;
                return -1;
            }
        }

        hb_cpu_memset(mem.getDataSize(), 9, pvcpu_data_wr);
        for (int i = 0; i < mem.getDataSize(); i++)
        {
            if (9 != (static_cast<char *>(pvcpu_data_wr)[i]))
            {
                std::cout << "test_syncedmemory CPU data write ERROR" << std::endl;
                return -1;
            }
        }

#ifndef CPU_ONLY
        /* GPU read */
        /*  data: CPU --> GPU --> CPU  */
        std::shared_ptr<char> pcData(new char[DATA_SIZE]);
        const void *pcgpu_data_rd = mem.gpu_data();
        hb_gpu_memcpy(DATA_SIZE, pcgpu_data_rd, pcData.get());
        for (int i = 0; i < mem.getDataSize(); i++)
        {
            if (9 != (static_cast<char *>(pcData.get())[i]))
            {
                std::cout << "test_syncedmemory GPU data read ERROR" << std::endl;
                return -1;
            }
        }

        pvcpu_data_wr = mem.mutable_cpu_data();
        hb_cpu_memset(mem.getDataSize(), 2, pvcpu_data_wr);
        for (int i = 0; i < mem.getDataSize(); i++)
        {
            if (2 != (static_cast<char *>(pvcpu_data_wr)[i]))
            {
                std::cout << "test_syncedmemory CPU data write ERROR" << std::endl;
                return -1;
            }
        }

        pcgpu_data_rd = mem.gpu_data();
        hb_gpu_memcpy(DATA_SIZE, pcgpu_data_rd, pcData.get());
        for (int i = 0; i < mem.getDataSize(); i++)
        {
            if (2 != (static_cast<char *>(pcData.get())[i]))
            {
                std::cout << "test_syncedmemory GPU data read ERROR" << std::endl;
                return -1;
            }
        }

        /* GPU write */
        /*  data: GPU --> CPU  */
        void *pcgpu_data_wr = mem.mutable_gpu_data();
        hb_gpu_memset(DATA_SIZE, 4, pcgpu_data_wr);
        const void *pccpu_data_rd = mem.cpu_data();
        for (int i = 0; i < mem.getDataSize(); i++)
        {
            if (4 != (static_cast<const char *>(pccpu_data_rd)[i]))
            {
                std::cout << "test_syncedmemory GPU data write ERROR" << std::endl;
                return -1;
            }
        }

        pcgpu_data_wr = mem.mutable_gpu_data();
        hb_gpu_memset(DATA_SIZE, 5, pcgpu_data_wr);
        pccpu_data_rd = mem.cpu_data();
        for (int i = 0; i < mem.getDataSize(); i++)
        {
            if (5 != (static_cast<const char *>(pccpu_data_rd)[i]))
            {
                std::cout << "test_syncedmemory GPU data write ERROR" << std::endl;
                return -1;
            }
        }
#endif

        return  0;
    }
}
