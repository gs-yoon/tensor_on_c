#ifndef __TENSOR_H__
#define __TENSOR_H__

// template? void pointer?
// compiler can generate better code when using template, so generally template is better than void pinter
// but template function can not use function pointer...? 

#include "type_definition.h"
#include "shape.h"
#include "tensor.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// slince는 - 값으로


struct Tensor
{
    /* data */
    void*   root;
    int*    shape;
    int     ndim;
    int     size;
    
    /* func */
    float (*at)(struct Tensor*, ...);
};

bool initTensor(Tensor* );
bool makeTensor(int ndim, ...);
bool makeZeros(int ndim, ...);
bool breakTensor(Tensr* tensor);








void breakTensor(Tensor* tensor)
{
    if (root_ != nullptr)
    {
        free(root_);
        root_ = nullptr;
    }

    //shape_.clear();
}


bool makeZeros(Shape shape)
{
    makeTensor(shape);
    memset(root_, 0x00, (size_t)shape.size() * sizeof(T));
}

bool makeTensor(Shape shape)
{
    printf("d\n");
    root_ = (T*)aligned_alloc((size_t)16*sizeof(char), (size_t)shape.size()*sizeof( T ));
    shape_ = shape;
}
void print()
{
    printf("size = %d \n", shape_.size());
    for (int i =0 ; i < shape_.size() ; i++)
        printf("%f " , root_[i]);
}

#endif
