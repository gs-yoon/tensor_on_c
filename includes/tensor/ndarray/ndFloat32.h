#ifndef __NDFLOAT32_H__
#define __NDFLOAT32_H__
#include "ndarray.h"

struct ndFloat32
{
    /* data */
    float32*    data;
    ndinfo      info;


    /* func */
    bool        (*ndalloc)(int ndim, ...)
    float32     (*at)(int ndim, ...)

    bool (*elementProduct)(struct ndFloat32 *a, struct ndFloat32 *b);
    bool (*elementAdd)(struct ndFloat32 *a, struct ndFloat32 *b);
    bool (*elementSub)(struct ndFloat32 *a, struct ndFloat32 *b);
    bool (*elementDiv)(struct ndFloat32 *a, struct ndFloat32 *b);
    bool (*dotProduct)(struct ndFloat32 *a, struct ndFloat32 *b);
};

void ndFloat32_init();
bool ndFloat32_elementProduct();
bool ndFloat32_elementAdd();
bool ndFloat32_elementSub();
bool ndFloat32_elementDiv();
bool ndFloat32_doutProduct();
bool ndFloat32_ndalloc(int ndim, ...)
float32 at(int ndim, ...)


#endif