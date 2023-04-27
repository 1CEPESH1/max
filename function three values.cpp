#include <iostream>
#include "function three values.h"
using namespace std;

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