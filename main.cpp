#include <iostream>


int max(int a, int b)
{
    int maximum = b;
    if (a > b)
    {
        maximum = a;

    }
    std::cout << "function accepting 2 int values" << std::endl;
    return maximum;

}

int max(float a, float b)
{
    float maximum = b;
    if (a > b)
    {
        maximum = a;

    }
    std::cout << "function accepting 2 float values" << std::endl;
    return maximum;

}



int max(int a, int b, int c)
{
    int maximum = a;
    if (b > a)
    {
        maximum = b;
    }
    if (c > a && c > b)
    {
        maximum = c;
    }
    std::cout << "function accepting 3 int values" << std::endl;
    return maximum;

}


int main()
{
    float a = 3, b = 4, c = 5;

    std::cout << max(a, b, c);
    std::cout << std::endl;
    std::cout << max(a, b);
    std::cout << std::endl;
    std::cout << max((int)a, (int)c);
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