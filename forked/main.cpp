#include <iostream>

using namespace std;

long long a, b, rx, ry, qx, qy, cnt, i;

void step(long long x, long long y, int d)
{
    if(d==2)
    {
        if(x==qx&&y==qy)
            i++;
    }
    else
    {
        d++;
        step(x+a,y+b,d);
        if(b)
            step(x+a,y-b,d);
        if(a)
        {
            step(x-a,y+b,d);
            if(b)
                step(x-a,y-b,d);
        }
        if(a!=b)
        {
            step(x+b,y+a,d);
            if(a)
                step(x+b,y-a,d);
            if(b)
            {
                step(x-b,y+a,d);
                if(a)
                    step(x-b,y-a,d);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> rx >> ry >> qx >> qy;
        i=0;
        step(rx, ry, 0);
        cout << i << '\n';
    }
    return 0;
}
