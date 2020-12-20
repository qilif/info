#include <iostream>

using namespace std;

int main()
{
    long long n, m, s;

    cin >> n >> m;

    if (m > n)
    {
        s = m - 1 + m * (n - 1);
    }
    else
    {
        s = n - 1 + n * (m - 1);
    }

    cout << s << endl;
    return 0;
}
