#include <iostream>

using namespace std;

int main()
{
    long long n, m, minim = 9999999, maxim = 0, i, s;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> m;
        if (minim > m)
        {
            minim = m;
        }
        if (maxim < m)
        {
            maxim = m;
        }
    }
    s = minim + maxim;

    cout << s;
    return 0;
}
