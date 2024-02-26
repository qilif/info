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

int main()
{
    int n,m,maxi=0,mini=2000000000,imp;
    cin>>n;
    while(n)
    {
        cin>>m;
        if(maxi<m)
            maxi=m;
        if(mini>m)
            mini=m;
        n--;
    }
    imp=cmmdc(maxi,mini);
    maxi/=imp;
    mini/=imp;
    cout<<mini<<'/'<<maxi;
    return 0;
}
