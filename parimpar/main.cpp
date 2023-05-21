#include <iostream>

using namespace std;

int main()
{
    long long n, m, a, b, f = 0, c = 0, r = 0, t = 0;

    cin >> n >> m;
    a = n;
    b = m;

    if (n % 2 == 0)
    {
        while (n)
        {
            if (n % 10 % 2 == 0)
            {
                r = r + n % 10;
                r = r * 10;
            }
            n = n / 10;
        }
    }
    else
    {
        while (n)
        {
            if (n % 10 % 2 == 1)
            {
                r = r + n % 10;
                r = r * 10;
            }
            n = n / 10;
        }
    }
    while (r)
    {
        f = f + r % 10;
        f = f * 10;
        r  = r / 10;
    }
    if (m % 2 == 0)
    {
        while (m)
        {
            if (m % 10 % 2 == 0)
            {
                t = t + m % 10;
                t = t * 10;
            }
            m = m / 10;
        }
    }
    else
    {
        while (m)
        {
            if (m % 10 % 2 == 1)
            {
                c = c + m % 10;
                c = c * 10;
            }
            m = m / 10;
        }
    }
    while (t)
    {
        c = c + t % 10;
        c = c * 10;
        t = t / 10;
    }

    if (f > c)
    {
        cout << a;
        return 0;
    }
    else if (c > f)
    {
        cout << b;
        return 0;
    }
    else
    {
        if (a > b)
        {
            cout << a;
        }
        else
        {
            cout << b;
        }
    }

}
