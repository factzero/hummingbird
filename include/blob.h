#ifndef HUMMINGBIRD_BLOB_H
#define HUMMINGBIRD_BLOB_H

namespace hummingbird
{

template <typename Dtype>
class Blob
{
public:
	Blob() :data_(), diff_() {}
	~Blob() {}

protected:
	shared_ptr<SyncedMemory> data_;
	shared_ptr<SyncedMemory> diff_;
};

}

#endif
