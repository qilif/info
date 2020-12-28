#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b;

    c = 1;

    while (b > 0)
    {
        b--;
        c = c * a;
    }
    cout << c << endl;
    return 0;
}
