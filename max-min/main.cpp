#include <iostream>

using namespace std;

int main()
{
    int n, mi = 2000000000, ma = 0, m, h = 0, mi1, ma1, m1;

    cin >> n;

    while (n)
    {
        cin >> m;
        m1 = m;
        while (m)
        {
            h = h + m % 10;
            m = m / 10;
        }
        if (h < mi)
        {
            mi = h;
            mi1 = m1;
        }
        if (h > ma)
        {
            ma = h;
            ma1 = m1;
        }
        n--;
        h = 0;
    }

    cout << mi1 << '\n' << ma1;
    return 0;
}
