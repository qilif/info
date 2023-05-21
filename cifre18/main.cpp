#include <iostream>

using namespace std;

int main()
{
    int n, m = 0, k, i=0;

    cin >> n >> k;

    while (n)
    {
        m+=n%10;
        n/=10;
        m*=10;
    }
    m/=10;
    while (m)
    {
        n=n+m%10;
        i++;
        if (i==k && n%10<9)
        {
            n++;
        }
        else if (i==k)
        {
            n-=9;
            n+=10;
        }
        n=n*10;
        m/=10;
    }

    cout << n;
    return 0;
}
