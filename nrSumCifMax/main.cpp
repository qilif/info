#include <iostream>

using namespace std;

int main()
{
    int a, a1, a2, b, b1, b2, c, c1, c2;

    cin >> a >> b >> c;

    a1 = a % 10;
    a2 = a / 10;

    b1 = b % 10;
    b2 = b / 10;

    c1 = c % 10;
    c2 = c / 10;

    if (a1 + a2 >= b1 + b2 && a1 + a2 >= c1 + c2)
    {
        cout << a << " ";
    }
    if (b1 + b2 >= a1 + a2 && b1 + b2 >= c1 + c2)
    {
        cout << b << " ";
    }
    if (c1 + c2 >= a1 + a2 && c1 + c2 >= b1 + b2)
    {
        cout << c << " ";
    }

    return 0;
}
