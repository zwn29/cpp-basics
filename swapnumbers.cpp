#include <iostream>
using namespace std;

void main()
{
    int x, y, temp;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swapping: " << x << " " << y << endl;
    temp = x;
    x = y;
    y = temp;
    cout << "the exchanged numbers are:" << x << " " << y << endl;
}
