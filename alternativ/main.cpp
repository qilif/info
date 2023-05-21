#include <iostream>

using namespace std;

int main()
{
    int n, m, i, r = 0, f = 0;

    cin >> n;

    while (n)
    {
        i = n % 10;
        n = n / 10;
        m = n % 10;
        if (i - m == 1 || i - m == 3 || i - m == 5 || i - m == 7 || i - m == 9 || m - i == 1 || m - i == 3 || m - i == 5 || m - i == 7 || m - i == 9)
        {
            r++;
        }
        f++;
    }
    if (r == f)
    {
        cout << "da";
    }
    else
    {
        cout << "nu";
    }
    return 0;
}
