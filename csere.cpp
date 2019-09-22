#include "std_lib_facilities.h"

int main()
{
    int x = 8, y = 3;

    x = x * y;
    y = x / y;
    x = x / y;
    cout << "csere * al: x=" << x << ", y=" << y <<"\n";


    int a = 8, b = 3;

    a = a - b;
    b = a + b;
    b = b - a;
    cout << "csere + - al: a=" << a << ", b=" << b<<"\n";


    int c = 8, d = 3;
        c ^= d;
        d ^= c;
        c ^= d;
    cout << "csere xor al: c=" << c << ", d=" << d<<"\n";
}
