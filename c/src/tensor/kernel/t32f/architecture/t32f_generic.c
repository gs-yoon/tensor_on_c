#include "t32f_generic.h"

pf_tensor* pf_mul32f(void* self,       void* operand);
{
    for (int i =0 ; i < size ; i++)
        self->ndarray->root[i] * operand->ndarray->root[i]
}

pf_tensor* pf_add32f(void* self,       void* operand);
pf_tensor* pf_sub32f(void* self,       void* operand);
pf_tensor* pf_div32f(void* self,       void* operand);
pf_tensor* pf_dot32f(void* self,       void* operand);
pf_tensor* pf_matMul32f(void* self,    void *operand);