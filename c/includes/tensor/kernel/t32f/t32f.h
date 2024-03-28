#ifndef __T32F_H__
#define __T32F_H__


#include "pf_body.h"

struct pf_tensor* pf_t32f_init(struct pf_tensor* self, enum PF_TYPE type);
double pf_t32f_at(struct pf_tensor* self, ...);
int pf_t32f_alloc(struct pf_tensor* self);

#endif