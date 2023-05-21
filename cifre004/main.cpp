#include <iostream>

using namespace std;

int main()
{
    long long n, m = 0, a = 0;

    cin >> n;

    while (n)
    {
        m = n % 10 + m;
        n = n / 10;
    }
    a = m;
    while (a >= 9)
        {
            cout << "9";
            a = a - 9;
            m--;
        }
    while (m != 0)
    {
        m = m - 1;
        cout << a;
        a = a - a;
    }
    return 0;
}
