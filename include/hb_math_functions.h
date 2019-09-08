#ifndef HUMMINGBIRD_MATH_FUNCTIONS_H_
#define HUMMINGBIRD_MATH_FUNCTIONS_H_

#include "hb_device_alternate.h"

inline void hb_cpu_memset(const size_t N, const int alpha, void *X)
{
    memset(X, alpha, N);
}

#ifndef CPU_ONLY
inline void hb_gpu_memset(const size_t N, const int alpha, void *X)
{
    CUDA_CHECK(cudaMemset(X, alpha, N));
}

void hb_gpu_memcpy(const size_t N, const void *X, void *Y);

#endif

#endif
