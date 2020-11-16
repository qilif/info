#include <iostream>

using namespace std;

int main()
{
    int n, c1, c2;

    cin >> n;

    c1 = n % 10;
    c2 = (n / 10) % 10;

    if (n < 16)
    {
        cout << n * n << endl;
    }
    else if (n < 31)
    {
        cout << c1 + c2 << endl;
    }
    else
    {
        cout << c1 * c2 << endl;
    }
    return 0;
}
