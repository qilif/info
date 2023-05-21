#include <iostream>

using namespace std;

int main()
{
    long long n, d = 0, t = 0;

    cin >> n;

    while (n)
    {
        if (n % 10 == 2)
        {
            d++;
        }
        else
        {
            t++;
        }
        n = n / 10;
    }
    if (d > t)
    {
        cout << "2";
    }
    else if (t > d)
    {
        cout << "3";
    }
    else
    {
        cout << "2 3";
    }
    return 0;
}
