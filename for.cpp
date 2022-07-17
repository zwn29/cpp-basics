#include <iostream>

int main()
{
    int sum = 0;
    // sum values from 0 to 10 inclusive;
    for (int i = 0; i <= 10; i++)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
}
