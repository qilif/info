#include <iostream>

using namespace std;

int v[250000000];

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
    while(n!=m)
        if(n>m)
            n-=m;
        else
            m-=n;
    return n;
}

int main()
{
    int n,m,i=0,nrdiv=0;
    cin>>n;
    while(n)
    {
        cin>>m;
        for(int j=1;j<=m;j++)
            if(m%j==0)
            {
                nrdiv++;
                v[nrdiv]=j;
            }
        for(int y=1;y<=nrdiv;y++)
            for(int j=1;j<=nrdiv;j++)
                if(cmmmc(v[y],v[j])==m)
                    i++;
        cout<<i<<' ';
        i=0;
        n--;
    }
    return 0;
}
