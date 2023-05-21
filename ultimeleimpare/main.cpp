#include <iostream>

using namespace std;

int main()
{
    long long n, m, a = -99, b = -99;

    cin >> n;

    while (n != 0)
    {
        cin >> m;
        if (m % 2 == 1)
        {
            b = a;
            a = m;
        }
        n--;
    }
    if (b == -99)
    {
        cout << "Numere insuficiente";
    }
    else
    {
        cout << b << " " << a;
    }

    return 0;
}
