#include <iostream>

using namespace std;

int main()
{
    long long n, x=0, m = 0;
    int c1, c2;

    cin >> n >> c1 >> c2;

    if(n == 0 && c1 == 0)
    {
        cout<< c2;
        return 0;
    }
    if (n == 0 && c1 != 0)
    {
        cout << "0";
        return 0;
    }
    while (n != 0)
    {
        if (n % 10 == c1)
        {
            x = x * 10 + c2;
            n = n / 10;
        }
        else
        {
            x =  x * 10 + n % 10;
            n = n / 10;
        }
    }
    while (x != 0)
    {
        m = m * 10 + x % 10;
        x = x / 10;
    }

    cout << m;
    return 0;
}
