#include <iostream>

using namespace std;

int main()
{
    int n, m, i = 1, mm;

    cin >> n;
    mm = n;
    m = n % 10;
    n = n / 10;

    while (mm > 9)
    {
        mm = mm / 10;
    }
    while (n)
    {
        if (mm == m)
        {
            i++;
        }
        n = n / 10;
    }

    cout << i;
    return 0;
}
