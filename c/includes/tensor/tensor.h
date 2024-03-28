#ifndef __TENSOR_H__
#define __TENSOR_H__

#include "t32f_generic.h"

void* makeTensor(int ndim, ...);
void* makeZeros(int ndim, ...);
void* makeOnes(int ndim, ...);
void* breakTensor(struct pf_tensor* tensor);

#endif

