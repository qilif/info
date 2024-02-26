#include <fstream>

using namespace std;

ifstream cin("fermier.in");
ofstream cout("fermier.out");

int v[1001],d[1001],dp[1001];

int main()
{
    int n,i,c,dt,m,dm,t;
    cin>>n>>c;
    dt=0;
    for(i=0;i<=n;i++)
    {
        cin>>d[i];
        dt+=d[i];
        dp[i]=dp[i-1]+d[i];
    }
    for(i=0;i<n;i++)
        cin>>v[i];
    m=c;
    i=0;
    t=0;
    while(v[n-1]!=0)
    {
        if(dp[i]<dt-dp[i])
            dm=dp[i];
        else
            dm=dt-dp[i];
        if(m==c)
            t+=dm;
        else
            if(d[i]<dt-d[i])
                t+=d[i];
            else
                t+=dt-d[i];
        while(v[i]>m)
        {
            v[i]-=m;
            m=c;
            t+=2*dm;
        }
        if(v[i]==m)
        {
            v[i]=0;
            m=c;
            t+=dm;
            i++;
        }
        else if(v[i]<m)
        {
            m-=v[i];
            v[i]=0;
            i++;
            if(i>=n)
                t+=dm;
        }
    }
    cout<<t;
    return 0;
}
