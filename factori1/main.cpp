#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,nn,mm,d=2,p=0,s1=0,s2=0;
    cin>>n>>m;
    nn=n;
    mm=m;
    while(n>1)
    {
        while(n%d==0)
        {
            p++;
            n/=d;
        }
        if(p)
            s1+=d;
        d++;
        if(n>1&&d*d>n)
            d=n;
        p=0;
    }
    d=2;
    while(m>1)
    {
        while(m%d==0)
        {
            p++;
            m/=d;
        }
        if(p)
            s2+=d;
        d++;
        if(m>1&&d*d>m)
            d=m;
        p=0;
    }
    if(s1<s2)
        cout<<mm;
    else if(s1>s2)
        cout<<nn;
    else
        cout<<min(nn,mm);
    return 0;
}
