#include <iostream>

using namespace std;

int main()
{
    long long n, m, mi1 = 10, ma1 = -1, mi = 10, ma = -1;

    cin >> n >> m;

    if(n==0)
    {
        mi=0;
        ma=0;
    }

    if(m==0)
    {
        mi1=0;
        ma1=0;
    }

    while (n)
    {
        if (n%10 < mi)
        {
            mi = n%10;
        }
        if (n%10 > ma)
        {
            ma = n%10;
        }
        n=n/10;
    }
    while (m)
    {
        if (m%10 < mi1)
        {
            mi1 = m%10;
        }
        if (m%10 > ma1)
        {
            ma1 = m%10;
        }
        m=m/10;
    }
    if (ma ==mi1)
    {
        cout << ma;
        return 0;
    }
    else if (ma1 == mi)
    {
        cout << mi;
        return 0;
    }
    cout << "NU";
    return 0;
}
