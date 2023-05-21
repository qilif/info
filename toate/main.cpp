#include <iostream>

using namespace std;

int main()
{
    long long n, a, b = 0, m = 0, z=0;
    cin >> n;
    while (n)
    {
        z=0;
        cin >> a;
        while(a%10==0)
        {
            z++;
            a/=10;
        }
        while (a)
        {
            if (a%10!=9)
                b = b * 10 +a % 10;
            a = a / 10;
        }
        while (b)
        {
            a = a * 10 + b%10;
            b = b / 10;
        }
        while(z)
        {
            a*=10;
            z--;
        }
        if (a > m)
        {
            m = a;
        }
        n--;
    }
    cout << m;
    return 0;
}
