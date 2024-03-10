#include "t32f.h"




void* t32f_init(struct POT_Tensor32f* self, int* shape)
{
    ndarrayInit(self->ndarray, shape);
    self->at = t32f_at;

    mul    = t32f_mul;
    add    = t32f_add;
    sub    = t32f_sub;
    div    = t32f_div;
    dot    = t32f_dot;
    matMul = t32f_matMul;
}

#define SHAPER(1,2,3)


float t32f_at(struct POT_Tensor32f* self, int idx)
{

    int idx = 0;

    //
    // TODO
    //
    return (float)self->ndarray->root[idx];
}


NARGS(2,3)