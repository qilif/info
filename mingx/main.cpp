#include <iostream>

using namespace std;

int main()
{
    long long n, mi = 10, x;

    cin >> n >> x;

    while (n)
    {
        if (n%10 > x && n%10 < mi)
        {
            mi = n%10;
        }
        n = n / 10;
    }
    if (mi == 10)
    {
        cout << -1;
        return 0;
    }
    cout << mi;
    return 0;
}
