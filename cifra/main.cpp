#include <iostream>

using namespace std;

int main()
{
    int n, c, m = 0;

    cin >> n >> c;

    while (n)
    {
        if (n % 10 == c)
        {
            n = n / 10;
        }
        m = m + n % 10;
        n = n / 10;
        m = m * 10;
    }
    n = 0;
    while (m)
    {
        n = n + m % 10;
        m = m / 10;
        n = n * 10;
    }

    cout << n / 10;
    return 0;
}
