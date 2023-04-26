#include <iostream>


void max(int a, int b)
{
    if (a > b)
    {
        std::cout << a;
    }
    if (a == b)
    {
        std::cout << a;
    }
    else
    {
        std::cout << b;
    }
}

void max(float a, float b)
{
    if (a > b)
    {
        std::cout << a;
    }
    if (a == b)
    {
        std::cout << a;
    }
    else
    {
        std::cout << b;
    }
}

void max(int a, int b, int c)
{
    if (a != b && b != c)
    {
        if (a > b && a > c)
        {
            std::cout << a;
        }
        if (b > a && b > c)
        {
            std::cout << b;
        }
        if (c > a && c > b)
        {
            std::cout << c;
        }
    }

    else
    {
        if (a == b && a > c)
        {
            std::cout << a;
        }
        if (a == b && a < c)
        {
            std::cout << c;
        }


        if (c == b && c < a)
        {
            std::cout << a;
        }
        if (c == b && c > a)
        {
            std::cout << c;
        }


        if (a == c && a < b)
        {
            std::cout << b;
        }
        if (a == c && a > b)
        {
            std::cout << a;
        }


        if (a == b && b == c)
        {
            std::cout << a;
        }
    }
}


int main()
{
    float a = 0, b = 0, c = 0, d = 0;
    std::cout << " how many numbers do you want to enter 2 or 3?" << std::endl;
    std::cin >> d;

    if (d == 2)
    {
        std::cout << "enter two" << std::endl;
        std::cin >> a >> b;
        max(a, b);
    }


    if (d == 3)
    {
        std::cout << "enter three" << std::endl;
        std::cin >> a >> b >> c;
        max(a, b, c);
    }
}