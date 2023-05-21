#include <iostream>

using namespace std;

int main()
{
    int n, m, i, r = 0, f = 0;

    cin >> n >> m;
    i = n;

    while (n)
    {
        r++;
        n = n / 10;
    }
    n = i;
    i = m;
    while (m)
    {
        f++;
        m = m / 10;
    }
    m = i;
    i = 0;
    if (r != f)
    {
        cout << "NU";
        return 0;
    }
    while (n || m)
    {
        if (n % 10 == m % 10)
        {
            i++;
        }
        m = m / 10;
        n = n / 10;
    }

    cout << "DA" << endl << i;
    return 0;
}
