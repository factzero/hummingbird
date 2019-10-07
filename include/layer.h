#ifndef HUMMINGBIRD_LAYER_H_
#define HUMMINGBIRD_LAYER_H_

#include <vector>
#include "blob.h"
#include "hummingbird.pb.h"

namespace hummingbird
{

template <typename Dtype>
class Layer
{
public:
    explicit Layer(const LayerParameter &param);
	virtual ~Layer() {}

    void SetUp(const std::vector<Blob<Dtype>*> &bottom, const std::vector<Blob<Dtype>*> &top);
    virtual void Reshape(const std::vector<Blob<Dtype>*> &bottom, const std::vector<Blob<Dtype>*> &top) = 0;
    inline Dtype Forward(const std::vector<Blob<Dtype>*> &bottom, const std::vector<Blob<Dtype>*> &top);

private:
    virtual void Forward_cpu(const std::vector<Blob<Dtype>*> &bottom, const std::vector<Blob<Dtype>*> &top) = 0;
    virtual void Forward_gpu(const std::vector<Blob<Dtype>*> &bottom, const std::vector<Blob<Dtype>*> &top)
    {
        Forward_cpu(bottom, top);
    }

private:
	LayerParameter  m_layer_param;
	Phase  m_phase;
};

}

#endif
