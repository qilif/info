#include <iostream>

using namespace std;

int main()
{
    int n, m, mi, ma;

    cin >> n >> mi;
    m = n;
    ma = mi;

    while (int i = 2; i <= n; i++)
    {
        cin >> m;
        if (mi > m)
        {
            mi = m;
        }
        if (ma < m)
        {
            ma = m;
        }
    }

    cout << mi + ma;
    return 0;
}
