#include <iostream>

using namespace std;

int main()
{
    long long n, s, g;

    cin >> n;

    s = n * (n + 1) / 2;
    g = (n / 2) * (n / 2 + 1) / 2;

    cout << s - (2 * g) << endl;
    return 0;
}
