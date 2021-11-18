#include <iostream>

using namespace std;

int main()
{
    long long n, m, minim, i;

    cin >> n;

    cin >> minim;

    for (i = 2; i <= n; i++)
    {
        cin >> m;
        if (minim > m)
        {
            minim = m;
        }
    }

    cout << minim;
    return 0;
}
