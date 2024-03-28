#include <stdio.h>

struct op32f
{
   struct pf_Tensor32f* (*mul)(struct pf_Tensor32f *self,       struct pf_Tensor32f *operand);
//    struct pf_Tensor32f* (*add)(struct pf_Tensor32f *self,       struct pf_Tensor32f *operand);
//    struct pf_Tensor32f* (*sub)(struct pf_Tensor32f *self,       struct pf_Tensor32f *operand);
//    struct pf_Tensor32f* (*div)(struct pf_Tensor32f *self,       struct pf_Tensor32f *operand);
//    struct pf_Tensor32f* (*dot)(struct pf_Tensor32f *self,       struct pf_Tensor32f *operand);
//    struct pf_Tensor32f* (*matMul)(struct pf_Tensor32f *self,    struct pf_Tensor32f *operand);
};

struct pf_info
{
    /* data */
    int*     shape;
    int      ndim;
    int      size;
};


struct pf_Tensor32f
{
    /* data */
    float* root;

    struct pf_info info;
    struct op32f op;

    /* func */
    float (*at)(struct pf_Tensor32f* self, ...);

};

struct pf_Tensor32f* mull(struct pf_Tensor32f *self,       struct pf_Tensor32f *operand)
{
    printf("hi\n");
}

void init_(struct pf_Tensor32f* t)
{
    t->op.mul = mull;
}
int main()
{
    struct pf_Tensor32f tensor;
    struct pf_Tensor32f a;
    init_(&tensor);
    tensor.op.mul(&tensor, &a);

}