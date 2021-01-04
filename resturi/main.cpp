#include <iostream>

using namespace std;

int main()
{
    long long n, k, a, b;

    cin >> n >> k;

    a = 1;
    b = 0;

    while (a <= n)
    {
        b += a % k;
        a++;
    }

    cout << b << endl;
    return 0;
}
