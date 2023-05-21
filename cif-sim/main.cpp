#include <iostream>

using namespace std;

int main()
{
    int n = 0, m, a, b, n1;

    cin >> n1;
    m = n1;

    while (n1)
    {
        n=n*10 + n1%10;
        n1 = n1/ 10;
    }
    while (n)
    {
        a = n % 10;
        b = m % 10;
        if (a + b != 9)
        {
            cout << "NU";
            return 0;
        }
        n = n / 10;
        m = m / 10;
    }

    cout << "DA";
    return 0;
}
