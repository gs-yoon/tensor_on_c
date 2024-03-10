#ifndef __TENSOR_H__
#define __TENSOR_H__

#include "type_definition.h"

#include "ndarray.h"

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


struct POT_Tensor32f
{
    /* data */
    POT_ndarray data;
    /* func */
    float (*at)(struct POT_Tensor32f* self, ...);


   POT_Tensor32f*    (*mul)(struct POT_Tensor32f *self,       struct POT_Tensor32f *operand);
   POT_Tensor32f*    (*add)(struct POT_Tensor32f *self,       struct POT_Tensor32f *operand);
   POT_Tensor32f*    (*sub)(struct POT_Tensor32f *self,       struct POT_Tensor32f *operand);
   POT_Tensor32f*    (*div)(struct POT_Tensor32f *self,       struct POT_Tensor32f *operand);
   POT_Tensor32f*    (*dot)(struct POT_Tensor32f *self,       struct POT_Tensor32f *operand);
   POT_Tensor32f*    (*matMul)(struct POT_Tensor32f *self,    struct POT_Tensor32f *operand);
};

void* t32f_init(struct POT_Tensor32f* self);
float t32f_at(struct POT_Tensor32f* self, ...);
#endif
