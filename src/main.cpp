#include "tensor.h"




int main()
{
    Tensor<float> test;

    test.makeTensor({2,3});
    test.print();
    //test.makeZeros({2,3});
    //Tensor<float> test2({2,3});

    return 0;
}