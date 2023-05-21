#include <iostream>

using namespace std;

int main()
{
    int n = 0, m = 0, i, a, b, c;

    cin >> a >> b;

    while (a)
    {
        n=n*10;
        n=n+a%10;
        a=a/10;
    }
    while (b)
    {
        m = m * 10;
        m = m + b%10;
        b=b/10;
    }
    i = m * n;
    if (m > n)
    {
        while (m)
        {
            c = n % m;
            n=m;
            m=c;
        }
        cout << i / n;
    }
    else
    {
        while (n)
        {
            c = m % n;
            m=n;
            n=c;
        }
        cout << i / m;
    }
    return 0;
}
