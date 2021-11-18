#include <iostream>

using namespace std;

int main()
{
    int a, c1, c2, r, s;

    cin >> a;

    c1 = a % 10;
    c2 = (a / 10) % 10;
    r = c1 * 10 + c2;
    s = r * r;


    cout << s << endl;
    return 0;
}
