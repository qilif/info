#include <iostream>

using namespace std;

int main()
{
    int n, i = 0, m = 0, d, h = 1, e = 1;

    cin >> n;
    d = n - 1;
    e = n;

    while (d)
    {
        h = e - d;
        m = m * 10 + d % 10;
        n = n / 10 * h + m;
        if (n % 3 == 0)
        {
            i++;
        }
        n = n / h;
        n = n / 10;
        d = d / 10;
    }

    cout << i;
    return 0;
}
