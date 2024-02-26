#include <iostream>

using namespace std;

int main()
{
    int n,m,c,r=0;
    bool b;
    cin>>n;
    while(n--)
    {
        cin>>m;
        b=false;
        c=0;
        while(m)
        {
            if(c==9&&m%10==6)
            {
                b=true;
                break;
            }
            c=m%10;
            m/=10;
        }
        if(b)
            r++;
    }
    cout<<r;
    return 0;
}
