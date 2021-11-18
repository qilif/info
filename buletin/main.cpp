#include <iostream>

using namespace std;

int main()
{
    long long n, a, l, z;

    cin >> n;
    n/=1000000;
    z = n % 100;
    n/=100;
    l = n % 100;
    n/=100;
    a = n % 100;
    if (a < 10)
    {
        cout << "0" << a<<" ";
    }
    else
    {
        cout << a<<" ";
    }
    if (l < 10)
    {
        cout << "0" << l<<" ";
    }
    else
    {
        cout << l<<" ";
    }
    if (z < 10)
    {
        cout << "0" << z<<" ";
    }
    else
    {
        cout << z<<" ";
    }
    return 0;
}
