#include <iostream>

using namespace std;

int main()
{
    int x, x2 = 0, p = 1, cif;
    cin >> x;
    while (x) {
        cif = x % 10;
        x2 = x2 + cif * p;
        p = p * 10;
        x2 = x2 + cif * p;
        p = p * 10;
        x = x / 10;
    }
    cout << x2;
    return 0;
}
