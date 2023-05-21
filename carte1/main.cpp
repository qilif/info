#include <iostream>

using namespace std;

int main()
{
    int n, p, z = (99 - 9) / 2 + 9, s = (999 - 99) / 3 + z, mu = (9999 - 999) / 4 + s, mz = (99999 - 9999) / 5 + mu, ms = (999999 - 99999) / 6 + mz;

    cin >> n;
    if (n < 10)
    {
        cout << n;
    }
    else if (n < 100 && n > 9)
    {
        p = (n - 9) / 2 + 9;
        cout << p;
    }
    else if (n < 1000 && n > 99)
    {
        p = (n - 99) / 3 + z;
        cout << p;
    }
    else if (n < 10000 && n > 999)
    {
        p = (n - 999) / 4 + s;
        cout << p;
    }
    else if (n < 100000 && n > 9999)
    {
        p = (n - 9999) / 5 + mu;
        cout << p;
    }
    else if (n < 1000000 && n > 99999)
    {
        p = (n - 99999) / 6 + mz;
        cout << p;
    }
    else if (n < 10000000 && n > 999999)
    {
        p = (n - 99999) / 7 + ms;
        cout << p;
    }
    return 0;
}
