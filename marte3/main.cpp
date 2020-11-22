#include <iostream>

using namespace std;

int main()
{
    int x, y, n, a, z, o, r;

    cin >> x >> y >> n;

    a = n / (x * y);
    r = n % (x * y);
    z = r / y;
    o = r % y;

    cout << a << endl;
    cout << z << endl;
    cout << o << endl;

    return 0;
}
