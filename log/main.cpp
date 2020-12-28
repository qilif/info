#include <iostream>

using namespace std;

int main()
{
    long long n, m, nm;

    cin >> n >> m;

    nm = 0;

    while (m != 1)
    {
        nm++;
        m = m / n;
    }

    cout << nm << endl;
    return 0;
}
