#ifndef HUMMINGBIRD_LAYER_H_
#define HUMMINGBIRD_LAYER_H_

namespace hummingbird
{

template <typename Dtype>
class Layer
{
public:
	explicit Layer(const LayerParameter &param)
		:layer_param_(param)
	{
		phase_ = param.phase();
	}
	virtual ~Layer() {}

	void SetUp(const vector<Blob<Dtype>*> &bottom, const vector<Blob<Dtype>*> &top)
	{

	}

protected:
	LayerParameter  layer_param_;
	Phase  phase_;
};

}

#endif
