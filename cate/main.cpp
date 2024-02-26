#include <fstream>
#include<cmath>

using namespace std;

ifstream cin("cate.in");
ofstream cout("cate.out");

bool v[1001];

void chur()
{
    for(int i=2;i<=1001;i++)
        if(v[i]==0)
            for(int j=2;i*j<=1001;j++)
                v[i*j]=1;
    v[1]=1;
    v[0]=1;
}
int pp(int n,int m)
{
    int i=sqrt(n),r=0;
    if(i*i<n)
        i++;
    while(i*i<=m)
    {
        r++;
        i++;
    }
    return r;
}
int pp1(int n,int m)
{
    int i=sqrt(n),r=0;
    if(i*i<n)
        i++;
    while(i*i<=m)
    {
        if(v[i]==0)
            r++;
        i++;
    }
    return r;
}

int main()
{
    int c,n,a,b;
    cin>>c>>n;
    if(c==1)
        while(n--)
        {
            cin>>a>>b;
            cout<<pp(min(a,b),max(a,b))<<'\n';
        }
    else
    {
        chur();
        while(n--)
        {
            cin>>a>>b;
            cout<<pp1(min(a,b),max(a,b))<<'\n';
        }
    }
    return 0;
}
