#include <iostream>

using namespace std;

int main()
{
    long long n, i = 0, p = 0, m, ii = 0,pp=0;

    cin >> n;
    m = n;

    while (n)
    {
        if (n % 2 == 0)
        {
            p =p*10 + n % 10;
            n/= 10;
        }
        else
        {
            i=i*10+n%10;
            n/=10;
        }
    }
    while (i)
    {
        ii = ii*10+i % 10;
        i = i / 10;
    }
    while (p)
    {
        pp = pp*10+p % 10;
        p = p / 10;
    }
    if (ii > pp)
    {
        cout << ii - pp;
        return 0;
    }
    cout << pp - ii;
    return 0;
}
