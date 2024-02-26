#include <iostream>
#include <cmath>

using namespace std;

bool v[65];

void chur(int n)
{
    v[0]=1;
    v[1]=1;
    for(int i=2;i<=n;i++)
        if(!v[i])
            for(int j=2;j*i<=n;j++)
                v[j*i]=1;
}
int ncb2(unsigned long long a)
{
    int r=0;
    if(a==0)
        return 1;
    while(a)
    {
        r++;
        a/=2;
    }
    return r;
}

int main()
{
    unsigned long long a,b,r=0;
    int nca,ncb;
    cin>>a>>b;
    nca=ncb2(a);
    ncb=ncb2(b);
    chur(ncb);
    if(nca==ncb)
    {
        if(!v[nca])
            cout<<b-a+1;
        else
            cout<<0;
        return 0;
    }
    for(int i=nca+1;i<=ncb-1;i++)
        if(!v[i])
            r+=pow(2,i-1);
    if(!v[nca])
         r+=pow(2,nca)-a;
    if(!v[ncb])
        r+=b-pow(2,ncb-1)+1;
    cout<<r;
    return 0;
}
//1000101011000111001000110000010010001001111010000000000000000000
//10000000000000000000
