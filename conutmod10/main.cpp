#include <iostream>

using namespace std;

int main()
{
    long long a, b, nr;

    cin >> a >> b;

    nr = 0;

    if (a % 10 != 0)
    {
        a = (a / 10) * 10 + 10;
    }

    if (b % 10 != 0)
    {
        b = (b / 10) * 10;
    }

    if (b >= a)
    {
        nr = b / 10 - a / 10 + 1;
    }
    else
    {
        nr = 0;
    }

    cout << nr << endl;
    return 0;
}
