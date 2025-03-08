#include <iostream>
#include <string>

int addSum(int a, int b);

int main()
{
    std::cout << addSum(3, 4)<<std::endl;

    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << arr[3]<<std::endl;

    std::string name = "sohan";
    std::cout << name.length();

    return 0;
}

int addSum(int a, int b)
{
    return a + b;
}
