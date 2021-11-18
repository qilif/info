#include <iostream>

using namespace std;

int main()
{
    int n, c1, c2, c3, ax, in;

    cin >> n;
    c3 = n % 10;
    c2 = n / 10 % 10;
    c1 = n / 100;
    ax = c1;

    if (c2 > ax)
    {
        ax = c2;
    }

    if (c3 > ax)
    {
        ax = c3;
    }

    in = c1;

    if (c2 < in)
    {
        in = c2;
    }

    if (c3 < in)
    {
        in = c3;
    }

    cout << c1 + c2 + c3 - ax - in;

    return 0;
}
