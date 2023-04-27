#include <iostream>


int max(int a, int b)
{
    if (a > b)
    {
        std::cout << a;
        return a;
    }
    else
    {
        std::cout << b;
        return b;
    }
}

int max(float a, float b)
{
    if (a > b)
    {
        std::cout << a;
        return a;
    }
    else
    {
        std::cout << b;
        return b;
    }
}

/*void max(int a, int b, int c)
{
    int* arr = new int [3]{a, b ,c};
    int Maximum = arr[0];
    for(int i = 1; i < 3; i ++){
        if(arr[i] > Maximum){
            Maximum = arr[i];
        }
    }
    std::cout << Maximum;
}*/

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        std::cout << a;
        return a;
    }


    if (a > b && b == c)
    {
        std::cout << a;
        return a;
    }

    if (a == b && b == c)
    {
        std::cout << a;
        return a;
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
        int resault = max(a, b, c);
        if (resault == a)
        {
            return 0;
        }
        resault = max(b, c, a);
        if (resault == a)
        {
            return 0;
        }
        resault = max(c, a, b);
        if (resault == a)
        {
            return 0;
        }
    }
}