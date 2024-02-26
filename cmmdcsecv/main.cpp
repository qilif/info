#include <fstream>

using namespace std;

ifstream cin ("cmmdcsecv.in");
ofstream cout ("cmmdcsecv.out");

int v[100001],vv[100001],c[100001],x=0,j=1,maxi=0,m[100001],dm=0;

void chur()
{
    for(int i=2;i<=100000;i++)
        if(c[i]==0)
            for(int j=2;i*j<=100000;j++)
                 c[i*j]=i;
    c[1]=1;
}
void nrdiv(int n)
{
    while(n>1)
    {
        int np=c[n];
        if(np)
            while(n%np==0)
                n/=np;
        else
        {
            np=n;
            n=1;
        }
        v[np]++;
        if(v[np]==x+1&&x+1>maxi)
            maxi=x+1;
        if(np>dm)
            dm=np;
    }
    x++;
}
void sterge(int n)
{
    while(n>1)
    {
        int np=c[n];
        if(np)
            while(n%np==0)
                n/=np;
        else
        {
            np=n;
            n=1;
        }
        v[np]--;
    }
    x--;
}
/*int cmmdc1(int n, int m)
{
    while(n!=m)
    {
        if(n>m)
            n-=m;
        else
            m-=n;
    }
    return n;
}*/

int main()
{
    chur();
    int n;
    bool h=false;
    cin>>n;
    for(int y=1;y<=n;y++)
    {
        cin>>m[y];
        nrdiv(m[y]);
        for(int i=1;i<=dm;i++)
            if(v[i]==x)
                h=true;
        if(h==false)
        {
            sterge(m[j]);
            j++;
        }
        h=false;
    }
    cout<<maxi;
    /*
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(i==1)
            cmmdc=v[i];
    }
    for(int i=1;i<=n;i++)
    {
        int j=i,nr=0;
        cmmdc=v[i];
        while(cmmdc>1&&j<=n)
        {
            cmmdc=cmmdc1(cmmdc,v[j]);
            nr++;
            j++;
        }
        if(nr-1>maxi)
            maxi=nr-1;
    }
    cout<<maxi;
    */
    return 0;
}
