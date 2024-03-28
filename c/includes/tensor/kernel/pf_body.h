#ifndef __PF_BODY_H__
#define __PF_BODY_H__

#include "type_definition.h"

#define ATD0(t,p) (double)(*((t*)p))
#define ATD1(t,p,s,i,ss,v) (double)(*((t*)p+v))
#define ATD2(t,p,s,i,ss,v) ATD1(t,p,s,i, s[0]*ss, ss*i[0] + v)
#define ATD3(t,p,s,i,ss,v) ATD2(t,p,s,i, s[1]*ss, ss*i[1] + v)
#define ATD4(t,p,s,i,ss,v) ATD3(t,p,s,i, s[2]*ss , ss*i[2] + v)
#define ATD5(t,p,s,i,ss,v) ATD4(t,p,s,i, s[3]*ss , ss*i[3] + v)
#define ATD6(t,p,s,i,ss,v) ATD5(t,p,s,i, s[4]*ss , ss*i[4] + v)
#define ATD7(t,p,s,i,ss,v) ATD6(t,p,s,i, s[5]*ss , ss*i[5] + v)
#define ATD8(t,p,s,i,ss,v) ATD7(t,p,s,i, s[6]*ss , ss*i[6] + v)
#define ATD9(t,p,s,i,ss,v) ATD8(t,p,s,i, s[7]*ss , ss*i[7] + v)

#define AT(t, p,s,i, d) ATD##d(t,p,s,i, s[d-1], i[d-1])

double at(pf_tensor * data, int* pos)
{
    int dim =0 ;
    switch(dim)
    {
        case 0:  return ATD0(float,data->root);
        case 1:  return AT(float,data->root, data->info.shape, pos, 1);
        case 2:  return AT(float,data->root, data->info.shape, pos, 2);
        case 3:  return AT(float,data->root, data->info.shape, pos, 3);
        case 4:  return AT(float,data->root, data->info.shape, pos, 4);
        case 5:  return AT(float,data->root, data->info.shape, pos, 5);
        case 6:  return AT(float,data->root, data->info.shape, pos, 6);
        case 7:  return AT(float,data->root, data->info.shape, pos, 7);
        case 8:  return AT(float,data->root, data->info.shape, pos, 8);
        case 9:  return AT(float,data->root, data->info.shape, pos, 9);
        default:
            // int dim_1 = data->info.ndim-1;
            // int idx = pos[dim_1];
// 
            // int shape_size = 1;
            // for (int i = dim_1  ; i > 0 ; i--)
            // {
                // shape_size *= data->info.shape[i];
                // idx += shape_size * pos[i-1];
            // }
            // return AT(double,data->root, data->info.shape, pos, 4);
    }


}

typedef enum   PF_TYPE   PF_TYPE;
typedef struct pf_tensor pf_tensor;

enum PF_TYPE {
    PF_UNDEFIEND = 0,
    PF_INT8, //1
    PF_INT32,
    PF_UINT8,
    PF_UINT32,
    PF_FLOAT32,
    PF_FLOAT64,
    } ;


struct pf_info
{
    /* data */
    int*     shape;
    int      ndim;
    int      size;
};

struct pf_tensor
{
    /* data */
    void*           root;
    PF_TYPE    type; 
    struct pf_info  info;

    /* base operator */
    struct pf_tensor* (*mul)(void *self,       void *operand);
    struct pf_tensor* (*add)(void *self,       void *operand);
    struct pf_tensor* (*sub)(void *self,       void *operand);
    struct pf_tensor* (*div)(void *self,       void *operand);
    struct pf_tensor* (*dot)(void *self,       void *operand);
    struct pf_tensor* (*matMul)(void *self,    void *operand);

    /* func */
    double (*at)(struct pf_tensor* self, ...);
};



// struct pf_array
// {
//     /* data */
//     void*    root;
//     TYPE     type; 
// };

#endif
