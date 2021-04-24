#include <iostream>

using namespace std;

int main()
{
    long long n, m, Min, i;

    cin >> n;

    Min = n;

    for (i = 1; i >= n; i++)
    {
        cin >> m;
        if (Min < m)
            Min = m;
    }

    cout << Min;
    return 0;
}
