#include "tensor.h"
// void breakTensor(Tensor* tensor)
// {
//     if (root_ != nullptr)
//     {
//         free(root_);
//         root_ = nullptr;
//     }

//     //shape_.clear();
// }


// bool makeZeros(Shape shape)
// {
//     makeTensor(shape);
//     memset(root_, 0x00, (size_t)shape.size() * sizeof(T));
// }

// bool makeTensor(Shape shape)
// {
//     printf("d\n");
//     root_ = (T*)aligned_alloc((size_t)16*sizeof(char), (size_t)shape.size()*sizeof( T ));
//     shape_ = shape;
// }

// void print()
// {
//     printf("size = %d \n", shape_.size());
//     for (int i =0 ; i < shape_.size() ; i++)
//         printf("%f " , root_[i]);
// }