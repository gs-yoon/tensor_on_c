#ifndef __NDARRAY_H__
#define __NDARRAY_H__

#include "type_definition.h"

enum {
    type_undefined,
    type_int8,           // 1
    type_int32,
    type_uint8,
    type_uint32,
    type_float32,
    type_float64,
    } TYPE;

struct AnyType
{
    /* data */
    void*    root;
    TYPE     type; 
    uint8    typeSize;
};
struct ndarray
{
    /* data */
    AnyType  data;

    /* ndinfo */
    int*     shape;
    int      ndim;
    int      size;


    /* func */
    void*    (*ndalloc)(int ndim, ...)
    void*    (*at)(int ndim, ...)
    /* operator */
    void*    (*elementProduct)(struct ndarray *a, struct ndarray *b);
    void*    (*elementAdd)(struct ndarray *a, struct ndarray *b);
    void*    (*elementSub)(struct ndarray *a, struct ndarray *b);
    void*    (*elementDiv)(struct ndarray *a, struct ndarray *b);
    void*    (*dotProduct)(struct ndarray *a, struct ndarray *b);
};





bool ndarrayInit(int ndim, ...)
bool ndarrayFree()
bool ndalloc();


#endif
