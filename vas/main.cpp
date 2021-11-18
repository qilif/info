#include <iostream>

using namespace std;

int main()
{
    unsigned long long x, t, y, T;

    cin >> x >> t >> y;
    T = 0;

    while (x > y)
    {
        x = x - x / 4;
        T+=t;
    }

    cout << T << endl;
    return 0;
}
