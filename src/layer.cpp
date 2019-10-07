#include "layer.h"

namespace hummingbird
{
template <typename Dtype>
Layer<Dtype>::Layer(const LayerParameter &param)
{
    m_phase = param.phase();
}

template <typename Dtype>
void Layer<Dtype>::SetUp(const std::vector<Blob<Dtype>*> &bottom, const std::vector<Blob<Dtype>*> &top)
{
    return;
}

template <typename Dtype>
inline Dtype Layer<Dtype>::Forward(const std::vector<Blob<Dtype>*> &bottom, const std::vector<Blob<Dtype>*> &top)
{
    Reshape(bottom, top);
    switch (Hummingbird::getMode())
    {
    case Hummingbird::CPU:
        Forward_cpu(bottom, top);
        break;
    case Hummingbird::GPU:
        Forward_gpu(bottom, top);
        break;
    default:
        std::cout << "Unknown mode" << std::endl;
        break;
    }
}

}