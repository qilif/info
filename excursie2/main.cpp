#include <iostream>

using namespace std;

int main()
{
    int n, m, i;

    cin >> n;

    if ((n * (n + 1) / 2) % 3 != 0)
    {
        cout << "NU";
    }
    else
    {
        cout << n << '\n';
        for (i = 1; i <= n / 2; i++)
        {
            cout << i << " " << n - i << '\n';
        }
    }


    return 0;
}
