#include <iostream>

using namespace std;

int main()
{
    int a, b, o, m, x, y;

    cin >> o >> m >> x >> y;

    b = m + y;
    a = o + x;
    if (b >= 60)
    {
        b = b - 60;
        a++;
    }
    while (a >= 24)
    {
        a = a - 24;
    }

    cout << a << " " << b;
    return 0;
}
