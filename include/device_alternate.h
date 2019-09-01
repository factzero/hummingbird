#ifndef HUMMINGBIRD_DEVICE_ALTERNATE_H_
#define HUMMINGBIRD_DEVICE_ALTERNATE_H_

#include <iostream>

#ifdef CPU_ONLY  // CPU-only

#include <vector>

#define NO_GPU std::cout << "Cannot use GPU in CPU-only Caffe: check mode."  << std::endl;

#else  // Normal GPU + CPU

#include <cublas_v2.h>
#include <cuda.h>
#include <cuda_runtime.h>
#include <curand.h>
#include <driver_types.h>  


#endif  // CPU_ONLY

#endif
