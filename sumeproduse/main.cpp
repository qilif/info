#include <iostream>

using namespace std;

int main()
{
    int i, n, sir[100001], j;
    long long s;

    cin >> n;
    s = 0;

    for (i = 1; i <= n; i++)
    {
        cin >> sir[i];
    }

    for (i = n / 2 + 1; i <= n; i++)
    {
        s = s + sir[i];
    }
    for (i = 1; i <=)

    cout << s;
    return 0;
}
