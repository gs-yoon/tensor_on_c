#ifndef __T32F_GENERIC_H__
#define __T32F_GENERIC_H__

#include "t32f.h"

struct pf_tensor* pf_mul32f(void* self,       void* operand);
struct pf_tensor* pf_add32f(void* self,       void* operand);
struct pf_tensor* pf_sub32f(void* self,       void* operand);
struct pf_tensor* pf_div32f(void* self,       void* operand);
struct pf_tensor* pf_dot32f(void* self,       void* operand);
struct pf_tensor* pf_matMul32f(void* self,    void *operand);

#endif