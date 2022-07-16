#include <iostream>

int main()
{
    int v1, v2;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    // std::cout << "The multiplication of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
    // the below code is the same as the above commented code
    std::cout << "The multiplication of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}