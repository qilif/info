#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("martisoare.in");
ofstream cout("martisoare.out");

long long v[100001],g[100001];

int main()
{
    long long l,t,i,n,j,u,x,y,poz,nr,a=0,b=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<n;i++)
    {
        if(v[i+1]==v[i]+1)
        {
            nr=v[i];
            poz=i;
            break;
        }
    }
    g[poz]=v[poz];
    for(i=poz;i>1;i--)
        g[i-1]=g[i]-1;
    for(i=poz;i<n;i++)
        g[i+1]=g[i]+1;
    for(int i=1;i<=n;i++)
    {
        if(v[i]!=g[i])
        {
            int c1=g[i],c2=v[i];
            while(c1!=0)
            {
                if(c1%10!=c2%10)
                {
                    b=a;
                    a=c1%10;
                }
                c1=c1/10;
                c2=c2/10;
            }
        }
    }
    if(b>a)
    {
        b+=a;
        a=b-a;
        b-=a;
    }
    cout<<b<<' '<<a<<'\n'<<g[n];
    return 0;
}
