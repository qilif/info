#include <iostream>
#include <algorithm>

using namespace std;

//ifstream cin("haybales.in");
//ofstream cout("haybales.out");

int v[100001];

int lb(int n,int x)
{
    int s=1,d=n,m,p=0;
    while(s<=d)
    {
        m=(s+d)/2;
        if(v[m]<x&&v[m])
        {
            p=m;
            s=m+1;
        }
        else if(v[m]>x)
            d=m-1;
        else
            return p;
    }
    return p;
}
int ub(int n,int x)
{
    if (x<v[1]) return 1;
    if (x>=v[n]) return n+1;

    int s=1,d=n,m;
    while(s<=d)
    {
        m=(s+d)/2;
        if(v[m]>x)
            d=m-1;
        else if(v[m]<x)
            s=m+1;
        else
        {
            while(v[m]==x && m<=n)
                m++;
            return m;
        }
    }
    return m+1;
}

int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1);

    while(m--)
    {
        cin>>a>>b;
        int bb = ub(n,b);
        int bb = lb(n,a);
        cout<<aa<<' '<<bb<<' '<<bb-aa<<'\n';
    }
    return 0;
}
