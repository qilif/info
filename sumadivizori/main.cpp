#include <iostream>

using namespace std;

int main()
{
    int n, i, s;

    cin >> n;
    s = n;

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }

    cout << s;
    return 0;
}
