#include "hb_math_functions.h"


void hb_gpu_memcpy(const size_t N, const void *X, void *Y)
{
    if (X != Y)
    {
        CUDA_CHECK(cudaMemcpy(Y, X, N, cudaMemcpyDefault));
    }
}