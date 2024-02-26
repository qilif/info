#include <iostream>

using namespace std;

int cmmmc(int a, int b)
{
    int n=a, m=b;
    while(n!=m)
    {
        if(n>m)
            m+=b;
        if(n<m)
            n+=a;
    }
    return n;
}
int cmmdc(int n, int m)
{
    while(m)
    {
        int r=n%m;
        n=m;
        m=r;
    }
    return n;
}

int v[11],vv[11];

int main()
{
    int n,a,b,cmmmc1=1,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>vv[i]>>v[i];
        cmmmc1=cmmmc(cmmmc1,v[i]);
    }
    for(int i=1;i<=n;i++)
    {
        s+=vv[i]*(cmmmc1/v[i]);
        v[i]=cmmmc1;
    }
    int cmmmc2=cmmmc1;
    cmmmc1=cmmmc1/cmmdc(cmmmc1,s);
    s=s/(cmmdc(cmmmc2,s));
    cout<<s<<' '<<cmmmc1;
    return 0;
}
