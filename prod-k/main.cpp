#include <iostream>

using namespace std;

int main()
{
    long long n, k, i= 1, m, y= 0, z= 0;

    cin >> n >> k;

    while (n)
    {
        if (n%10==k)
        {
            n = n /10;
        }
        i=i*(n%10);
        n=n/10;
    }
    while (m)
    {
        y++;
        if (m%10 == k)
        {
            z++;
        }
        m=m/10;
    }

    if (z==y)
    {
        cout<<0;
        return 0;
    }
    cout << i;
    return 0;
}
