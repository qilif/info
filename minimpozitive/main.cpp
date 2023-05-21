#include <iostream>

using namespace std;

int main()
{
    int n, m, mi = 1000000;

    cin >> n;
    m = n;

    while (m != 0)
    {
        cin >> n;
        if (mi > n && n > 0)
        {
            mi = n;
        }
    }

    cout << mi;
    return 0;
}`
