#include <iostream>
using namespace std;

int main ()
{
    int x, a, b, y, c, d, m, n;

    cin >> x >> a >> b >> y >> c >> d;

    if(a > b)
    {
        swap (a, b);
    }
    if(c > d)
    {
        swap (c, d);
    }
    if (a % x == 0)
    {
        m = a / x - 1;
    }
    else
        m=a/x;
    if (c % y == 0)
    {
        n = c / y - 1;
    }
    else
        n=c/y;
    if (b / x - m > d / y - n)
    {
        cout << "Ioana " << b / x - m;
    }
    if (b / x - m < d / y - n)
    {
        cout << "Maria " << d / y - n;
    }
    if (b / x - m == d / y - n)
    {
        cout << "Egalitate " << b / x - m;
    }

    return 0;
}
