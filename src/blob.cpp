#include "blob.h"

namespace hummingbird
{
template <typename Dtype>
const Dtype *Blob<Dtype>::cpu_data() const
{
    return (const Dtype *)m_data->cpu_data();
}

template <typename Dtype>
void Blob<Dtype>::set_cpu_data(Dtype* data)
{
    size_t size = m_count * sizeof(Dtype);
    if (m_data->getDataSize() != size)
    {
        m_data.reset(new SyncedMemory(size))
    }
    m_data->set_cpu_data(data);

    return;
}

template <typename Dtype>
const Dtype* Blob<Dtype>::gpu_data() const
{
    return (const Dtype *)m_data->gpu_data();
}

template <typename Dtype>
void Blob<Dtype>::set_gpu_data(Dtype* data)
{
    size_t size = m_count * sizeof(Dtype);
    if (m_data->getDataSize() != size)
    {
        m_data.reset(new SyncedMemory(size))
    }
    m_data->set_gpu_data(data);

    return;
}

template <typename Dtype>
Dtype* Blob<Dtype>::mutable_cpu_data()
{
    return static_cast<Dtype *>(m_data->mutable_cpu_data());
}

template <typename Dtype>
Dtype* Blob<Dtype>::mutable_gpu_data()
{
    return static_cast<Dtype *>(m_data->mutable_gpu_data());
}

}