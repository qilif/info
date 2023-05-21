#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, p = 1, a, m;

    cin >> n;
    m = n;

    while (n)
    {
        s = s + ((n % 10) * (n % 10));
        n = n / 10;
    }
    cout << s << " ";
    s = 0;
    n = m;
    while (n)
    {
        if (n % 10 % 2 == 1)
        {
            s = s + n % 10;
        }
        n = n / 10;
    }
    cout << s << " ";
    s = 0;
    n = m;
    while (n)
    {
        if (n % 10 % 3 == 0)
        {
            s = s + n % 10;
        }
        n = n / 10;
    }
    cout << s << " ";
    s = 0;
    n = m;
    while (n)
    {
        if (n % 10 > 5)
        {
            s++;
        }
        n = n / 10;
    }
    cout << s << " ";
    s = 0;
    n = m;
    while (n)
    {
        if (n % 10 != 0)
        {
            p = p * (n % 10);
        }
        n = n / 10;
    }
    cout << p << " ";
    p = 1;
    n = m;
    a = n % 10;
    n = n / 10;
    while (n > 9)
    {
        n = n / 10;
    }
    cout << a + n;
    return 0;
}
