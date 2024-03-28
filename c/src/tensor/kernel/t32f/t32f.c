#include "t32f.h"


pf_tensor* pf_t32f_init(pf_tensor* self, int* shape, PF_TYPE type)
{
    ndarrayInit(self, shape);
    self->at = t32f_at;

    mul    = pf_mul32f;
    add    = pf_add32f;
    sub    = pf_sub32f;
    div    = pf_div32f;
    dot    = pf_dot32f;
    matMul = pf_matMul32f;
}

double pf_t32f_at(pf_tensor* self, ...);
{
    return atm(float, )
}

bool pf_t32f_alloc(pf_tensor* self);
{
    root_ = aligned_alloc((size_t)16*sizeof(char), (size_t)self->size*sizeof( float ));
}
NARGS(2,3)