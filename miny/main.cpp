#include <fstream>

using namespace std;

ifstream cin ("miny.in");
ofstream cout ("miny.out");

int v[1000];

int cmmdc1(int n,int m)
{
    while(n!=m)
    {
        if(n<m)
            m-=n;
        else
            n-=m;
    }
    return n;
}

int main()
{
    int n,m,p=1,d,dmax=0,cmmdc,nrdiv=1;
    cin>>n;
    while(n)
    {
        cin>>m;
        p*=m;
        p%=100;
        d=2;
        while(m>1)
        {
            while(m%d==0)
            {
                v[d]++;
                if(d>dmax)
                    dmax=d;
                m/=d;
            }
            d++;
        }
        n--;
    }
    cmmdc=v[dmax];
    for(int i=2;i<dmax;i++)
        if(v[i])
        {
            cmmdc=cmmdc1(cmmdc,v[i]);
            nrdiv++;
        }
    cout<<p/10<<'\n'<<nrdiv<<'\n';
    for(int i=2;i<=dmax;i++)
        if(v[i])
            cout<<i<<' '<<v[i]/cmmdc<<'\n';
    return 0;
}

//
