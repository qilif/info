#include <iostream>

using namespace std;

int main()
{
    long long n, m, i;

    cin >> n;

    m = 1;

    for (i = 2; i <= n; i++)
    {
        m = m + 6 * (i - 1);
    }
    cout << m << endl;
    return 0;
}
