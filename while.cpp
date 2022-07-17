#include <iostream>

int main()
{
    int sum = 0, val = 1;
    // keep executing the loop until the value of val is greater than 10
    while (val <= 10)
    {
        sum += val;
        val++;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}