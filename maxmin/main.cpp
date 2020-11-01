#include <iostream>

using namespace std;

int main()
{
    int a, b, c, mm;

    cin >> a >> b >> c;

    if (a >= b && b >= c)
    {
        mm = a - c;
    }
    else if (a >= c && c >= b)
    {
        mm = a - b;

    }
    else if (b >= a && a >= c)
    {
        mm = b - c;
    }
    else if (b >= c && c >= a)
    {
        mm = b - a;
    }
    else if (c >= a && a >= b)
    {
        mm = c - b;
    }
    else
    {
        mm = c - a;
    }
    cout << mm << endl;
    return 0;
}
