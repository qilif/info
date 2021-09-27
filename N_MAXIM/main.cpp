#include <iostream>

using namespace std;

int main()
{
    long long n, m, Max, i;

    cin >> n;

    Max = 0;

    for (i = 1; i <= n; i++)
    {
        cin >> m;
        if (Max < m)
            Max = m;
    }

    cout << Max;
    return 0;
}
