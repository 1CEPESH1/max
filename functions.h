//
// Created by т on 28.04.2023.
//
#include <iostream>
#include "functions.h"

#ifndef MAX_FUNCTIONS_H
#define MAX_FUNCTIONS_H

template<typename T>
T max(T a, T b)
{
    T maximum = b;
    if (a > b)
    {
        maximum = a;

    }
    std::cout << "function accepting 2 values" << std::endl;
    return maximum;

}

template<typename T>
T max(T a, T b, T c)
{
    T maximum = a;
    if (b > a)
    {
        maximum = b;
    }
    if (c > a && c > b)
    {
        maximum = c;
    }
    std::cout << "function accepting 3 values" << std::endl;
    return maximum;
}


#endif //MAX_FUNCTIONS_H
