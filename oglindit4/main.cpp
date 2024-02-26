#include <iostream>

using namespace std;

int main()
{
    int n,m=0,t,nn,r,i=0;
    cin>>t;
    while(t)
    {
        cin>>n;
        nn=n;
        while(nn)
        {
            m=m*10+nn%10;
            nn/=10;
        }
        while(m)
        {
            r=n%m;
            n=m;
            m=r;
        }
        if(n==1)
            i++;
        m=0;
        t--;
    }
    cout<<i;
    return 0;
}
