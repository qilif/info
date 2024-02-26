#include <fstream>

using namespace std;

ifstream cin("album.in");
ofstream cout("album.out");

int v[800001];

int maxi1(int n)
{
    int m=0;
    while(n)
    {
        if(n%10>m)
            m=n%10;
        n/=10;
    }
    return m;
}
int maxi2(int n)
{
    int m=0,m1=0;
    while(n)
    {
        if(n%10>m)
        {
            m1=m;
            m=n%10;
        }
        else if(n%10>m1)
            m1=n%10;
        n/=10;
    }
    return m1;
}
bool con(int n, int x, int y)
{
    bool xc=false,yc=false;
    while(n)
    {
        if(x==n%10&&!xc)
            xc=true;
        else if(y==n%10)
            yc=true;
        if(xc&&yc)
            return 1;
        n/=10;
    }
    return xc&&yc;
}

int main()
{
    int n,m,m1,m2,c,vic=0,rad=0,r=1;
    cin>>c>>n;
    if(c==1)
        for(int i=1;i<=n;i++)
        {
            cin>>m;
            if(i==n)
                cout<<maxi2(m)<<' '<<maxi1(m);
        }
    else
    {
        for(int i=1;i<=n;i++)
            cin>>v[i];
        for(int i=1;i<=n;i++)
        {
            if(v[i]==0)
                continue;
            if(r==1)
                vic++;
            else
                rad++;
            m1=maxi1(v[i]);
            m2=maxi2(v[i]);
            for(int j=i+1;j<=n;j++)
            {
                if(v[j]==0)
                    continue;
                if(con(v[j],m1,m2))
                {
                    v[j]=0;
                    if(r==1)
                        vic++;
                    else
                        rad++;
                }
            }
            r=3-r;
        }
        if(vic>rad)
            cout<<'V'<<'\n'<<vic;
        else
            cout<<'R'<<'\n'<<rad;
    }
    return 0;
}
