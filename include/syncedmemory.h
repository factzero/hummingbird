#ifndef HUMMINGBIRD_SYNCEDMEMORY_H_
#define HUMMINGBIRD_SYNCEDMEMORY_H_

#include <cstdlib>
#include "common.h"
#include "hb_device_alternate.h"

namespace hummingbird
{

    inline void HBMallocHost(void **pptr, size_t size, bool *pbuse_cuda)
    {
#ifndef CPU_ONLY
		if (Hummingbird::getMode() == Hummingbird::GPU)
		{
            NO_IMPLEMENT
		}
#endif // !CPU_ONLY
		*pptr = malloc(size);
		*pbuse_cuda = false;
        return;
    }

	inline void HBFreeHost(void *ptr, bool buse_cuda)
	{
#ifndef CPU_ONLY
		if (buse_cuda)
		{
            NO_IMPLEMENT
			return;
		}
#endif // !CPU_ONLY
		free(ptr);

		return;
	}

/**
* @brief �ڴ������ͷš�������GPU������ͬ��
*        
*
*/
class SyncedMemory
{
public:
	SyncedMemory();
	explicit SyncedMemory(size_t size);
	~SyncedMemory();

    enum SyncedHead { UNINITIALIZED, HEAD_AT_CPU, HEAD_AT_GPU, SYNCED };

	const void* cpu_data();
	void set_cpu_data(void *pvdata);
	const void* gpu_data();
	void set_gpu_data(void *pvdata);
	void* mutable_cpu_data();
	void* mutable_gpu_data();
	SyncedHead getHead() { return m_head; }
	size_t getDataSize() { return m_data_size; }

private:
	void to_cpu();
	void to_gpu();

private:
	void *m_pvcpu_data;                     /* cpu���� */
	void *m_pvgpu_data;                     /* gpu���� */
    int m_device;                           /* gpu�豸�� */
    size_t m_data_size;                     /* ���ݴ�С */
    SyncedHead m_head;                      /* ���ݴ�ŵ�λ�� */
    bool m_own_cpu_data;
    bool m_own_gpu_data;
	bool m_cpu_malloc_use_cuda;
};

}

#endif
