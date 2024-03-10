#include "tensor.h"




int main()
{
    Tensor<float> test;

    Tensor32f test = makeTensor();

    test.makeTensor({2,3});
    test.print();
    //test.makeZeros({2,3});
    //Tensor<float> test2({2,3});

    return 0;
}