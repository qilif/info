#include <iostream>

using namespace std;

int main()
{
    int n, m, i;

    cin >> n;
    i = n;

    while (n)
    {
        m = m + n % 10;
        n = n / 10;
        m = m * 10;
    }
    m = m / 10;

    if (i == m)
    {
        cout << "Da";
    }
    else
    {
        cout << "Nu";
    }

    return 0;
}
