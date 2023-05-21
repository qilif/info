#include <iostream>

using namespace std;

bool nr (int n)
{
    int d = 2;
    if (n<2)
    {
        return 0;
    }
    while (d*d<=n)
    {
        if (n%d==0)
        {
            return 0;
        }
        d++;
    }
    return 1;
}

int main()
{
    int n = 0, m = 0, i = 0, x, y, h = 2, s=0;

    cin >> x >> y;
    cout << x << y;
    while (y)
    {
        m= m*10+y%10;
        y/=10;
    }
    n=x%10*10+m%10;
    if (!nr (n))
    {
        while (h<n)
        {
            if (n%h==0 && nr(h))
            {
                s+=h;
            }
            h++;
        }
        n=n-s;
    }\
    cout << n;
    while (m)
    {
        y= y*10+y%10;
        m/=10;
    }

    return 0;
}
