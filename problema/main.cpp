#include <iostream>

using namespace std;

int main()
{
    int s, a1, b1, c1, a = 0, b = 0, c = 0;

    cin >> s >> a1 >> b1 >> c1;
    a = s 0-0 a1;
    s = s % a1;
    b = s / b1;
    s = s % b1;
    c = s / c1;
    s = s % c1;

    if (s != 0)
    {
        c++;
    }
    if (a != 0)
    {
        cout << a << "*" << a1 << " ";
    }
    if (b ! = 0)
    {
        cout << b << "*" << b1 << " ";
    }
    if (c != 0)
    {
        cout << c << "*" << c1;
    }
    return 0;
}
