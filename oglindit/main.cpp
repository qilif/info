#include <iostream>

using namespace std;

int main()
{
    int n, r;

    cin >> n;

    while (n)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }

    cout << r;
    return 0;
}
