#include <iostream>

using namespace std;

int main()
{
    int n, p = 1, k = 0, i = 0;

    cin >> n;

    while (p * p < n)
    {
        p++;
    }
    p--;
    k = p * p;

    cout << n - p * p  << '\n';

    while (k != 0)
    {
        cout << k << " ";
        i++;
        if (i % p == 0)
        {
            cout << '\n';
        }
        k = k - 1;
    }

    return 0;
}
