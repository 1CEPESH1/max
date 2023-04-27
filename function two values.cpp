#include <iostream>
#include "function two values.h"
using namespace std;

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


