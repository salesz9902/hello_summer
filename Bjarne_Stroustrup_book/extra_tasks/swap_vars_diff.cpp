#include "std_lib_facilities.h"

int main()
{
    int a = 5;
    int b = 12;

    cout << "Before the swap the a = " << a << " and b = " << b << '\n';

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After the swap the a = " << a << " and b = " << b << '\n';
}