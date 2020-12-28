~#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cin >> n;

    if (n % 2 == 0)
    {
        m = n - 1;
    }
    else
    {
        m = n - 2;
        cout << n << " ";
    }

    while (m > 0)
    {
        cout << m << " ";
        m = m - 2;
    }

    return 0;
}
