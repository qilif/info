#include <iostream>

using namespace std;

int main()
{
    long long n, m, mi = 2000000000, ma = 0, m1 = 0, m2 = 0;

    cin >> n;

    while (n != 0)
    {
        cin >> m;
        while (m)
        {
            m2 = m2 + m % 10;
            m = m / 10;
        }
        if (m2 > m1)
        {
            ma = m;
        }
        if (m2 < m1)
        {
            mi = m;
        }
        m1 = m2;
        n--;
    }

    cout <<  mi << " " << ma;
    return 0;
}
