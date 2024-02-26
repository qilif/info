#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,c,d;
    bool isprime;
    cin>>n;
    int v[n+1];
    for(int i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1, v+n+1);
    for(int i=1;i<=n;i++)
    {
        c=v[i];
        isprime=true;
        if(c==1)
            continue;
        for(int j=2;j*j<c;j++)
        {
            d=j;
            if(c%j==0)
            {
                isprime=false;
                break;
            }
        }
        if(d*d==c)
            isprime=false;
        if(isprime==true)
            cout<<c<<' ';
        }
}
