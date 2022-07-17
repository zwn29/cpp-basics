#include <iostream>

int main()
{
    int sum = 0;
    // add numbers from 0 to 50 inclusive
    for (int i = 50; i <= 100; i++)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
}