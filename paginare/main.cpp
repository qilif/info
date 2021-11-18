#include <iostream>

using namespace std;

int main()
{
    long long n, v, p=0, ok = 1;

    cin >> n;
    v = n / 792 + 1;
    n%=792;

    if (n <= 9)
    {
        p = n;
    }
    else
    {
        p+=9;
        n-=9;
    }
    if (n <= 180)
    {
        if (n % 2 != 0)
        {
            ok = 0;
        }
        else
        {
            p = p + n / 2;
        }
    }
    else
    {
        p+=90;
        n-=180;
        if (n % 3 != 0)
        {
            ok = 0;
        }
        else
        {
            p = p + n / 3;
        }
    }
    if (ok != 0)
    {
        cout << v << " " << p;
    }
    else
    {
        cout << "IMPOSIBIL" << endl;

    }

    return 0;
}
