#include <iostream>

using namespace std;

int main()
{
    int n, mi, ma = 0;

    cin >> n;
    mi = n;

    while (n)
    {
        if (n % 10 < mi)
        {
            mi = n % 10;
        }
        else if (n % 10 > ma)
        {
            ma = n % 10;
        }
    }

    cout << mi + ma;
    return 0;
}
