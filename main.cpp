#include <iostream>

void max(float a, float b)
{
    if (a > b)
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
    int* arr = new int [3]{a, b ,c};
    int Maximum = arr[0];
    for(int i = 1; i < 3; i ++){
        if(arr[i] > Maximum){
            Maximum = arr[i];
        }
    }
    std::cout << Maximum;
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