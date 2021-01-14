#include <iostream>

using namespace std;

int main()
{
    long long n, i, s;

    cin >> n;
    s = 0;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }

    cout << s << endl;
    return 0;
}
