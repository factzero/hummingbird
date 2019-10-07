#ifndef HUMMINGBIRD_BLOB_H
#define HUMMINGBIRD_BLOB_H

#include <memory>
#include "syncedmemory.h"

namespace hummingbird
{

template <typename Dtype>
class Blob
{
public:
	Blob():m_data(){}
	~Blob() {}

    const Dtype* cpu_data() const;
    void set_cpu_data(Dtype* data);
    const Dtype* gpu_data() const;
    void set_gpu_data(Dtype* data);
    Dtype* mutable_cpu_data();
    Dtype* mutable_gpu_data();

private:
    std::shared_ptr<SyncedMemory> m_data;
    size_t m_count;
};

}

#endif
