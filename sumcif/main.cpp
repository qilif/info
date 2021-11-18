#include <iostream>

using namespace std;

int main()
{
    int a, c1, c2, c3;

    cin >> a;

    c3 = a % 10;
    c2 = (a / 10) % 10;
    c1 = (a / 100) % 10;

    cout << c1 + c2 + c3 << endl;
    return 0;
}
