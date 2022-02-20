#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;

    // swap
    a = a + b; // a = 5
    b = a - b; // b = 2
    a = a - b; // a = 3

    cout << "After swap: " << endl;
    cout << "a = " << a << "\nb = " << b;

    return 0;
}
