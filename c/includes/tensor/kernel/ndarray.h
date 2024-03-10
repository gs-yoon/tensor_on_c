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

struct POT_type
{
    /* data */
    void*    root;
    TYPE     type; 
    uint8    typeSize;
};

struct ndinfo
{
    /* data */
    int*     shape;
    int      ndim;
    int      size;
};


struct POT_ndarray
{
    /* data */
    void*    root;
    TYPE     type; 

    /* ndinfo */
    int*     shape;
    int      ndim;
    int      size;
};


bool ndarrayInit(struct POT_ndarray* self, int shape*)
bool ndarrayFree()
bool ndalloc();

#endif
