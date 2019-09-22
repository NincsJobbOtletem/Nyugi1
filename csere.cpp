#include "std_lib_facilities.h"

int main()
{
    int x = 8, y = 3;

    x = x * y;
    y = x / y;
    x = x / y;
    cout << "csere: x=" << x << ", y=" << y;
}
