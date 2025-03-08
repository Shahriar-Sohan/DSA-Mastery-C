#include <iostream>

int main()
{
    std::cout << "Hello World!" << std::endl;
    int age;
    std::cin >> age;
    if (age >= 18)
    {
        std::cout << "Adult" << std::endl;
    }
    else
    {
        std::cout << "minor"<< std::endl;
    }
    return 0;
}

