#include <iostream>

using namespace std;

int main()
{
    float x;
    long long t, y, T, i;

    cin >> x >> t >> y >> i;
    T = 0;

    while (x > y)
    {
        x = x - x / i;
        T+=t;
    }

    cout << T;
    return 0;
}
