#ifndef HUMMINGBIRD_DEVICE_ALTERNATE_H_
#define HUMMINGBIRD_DEVICE_ALTERNATE_H_

#include <iostream>

#define NO_IMPLEMENT std::cout << __FILE__ << ": " << __LINE__ << " [" << __FUNCTION__ << "] Warning NO implement."  << std::endl;

#define CHECK(condition)  \
    if(!(condition)) \
    { \
        std::cout << "Check failed: " #condition " " << std::endl; \
    } 

#ifdef CPU_ONLY  // CPU-only

#include <vector>

#define NO_GPU std::cout << "Cannot use GPU in CPU-only Caffe: check mode."  << std::endl;

#else  // Normal GPU + CPU

#include <cuda.h>
#include <cuda_runtime.h>
#include <curand.h>
#include <driver_types.h>  

#define CUDA_CHECK(condition) \
    do { \
        cudaError_t error = condition; \
        if(cudaSuccess != error) \
        { \
            std::cout <<  " " << cudaGetErrorString(error) << std::endl; \
        } \
    } while (0)

#endif  // CPU_ONLY

#endif
