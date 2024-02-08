#ifndef __SHAPE_H__
#define __SHAPE_H__
#include <initializer_list>
#include "type_definition.h"
#include <algorithm>
#include <iostream>
class Shape
{
    /* data */
    private:
        int* data_  = nullptr;
        int  ndim_  = 0;
        int  size_  = 0;
    public:

        Shape();
        ~Shape();
        Shape(std::initializer_list<int32> s)
        {
            ndim_ = s.size();
            data_ = (int*)malloc( sizeof(int32) * ndim_);
            std::copy(s.begin(), s.end(), data_);

            int size = 1;
            for (int i = 0; i < ndim_; i++)
                    size *= data_[i];
            size_ = size;
        }
};

#endif