#include <iostream>

using namespace std;

int main()
{
    long long n, i, p;

    cin >> n;

    i = 1;
    p = 1;

    while (i <= n)
    {
        p *= i;
        i++;
    }

    cout << p << endl;
    return 0;
}
