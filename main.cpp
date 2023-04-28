#include <iostream>
#include "functions.h"



int main()
{

    float a = 3, b = 4, c = 5;

    std::cout << max(a, b, c);
    std::cout << std::endl;
    std::cout << max(a, b);
    std::cout << std::endl;
    /*std::cout << " how many numbers do you want to enter 2 or 3?" << std::endl;
    std::cin >> d;

    if (d == 2)
    {
        std::cout << "enter two" << std::endl;
        std::cin >> a >> b;
        std::cout << max(a, b);
    }

    if (d == 3)
    {
        std::cout << "enter three" << std::endl;
        std::cin >> a >> b >> c;
        std::cout << max(a, b, c);
    }
    return 0;*/
}