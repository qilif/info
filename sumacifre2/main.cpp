#include <iostream>

using namespace std;

int main()
{
    int a, c1, c2;

    cin >> a;

    c2 = a % 10;
    c1 = (a / 10) % 10;

    cout << c1 + c2 << endl;
    return 0;
}
