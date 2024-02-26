#include <fstream>

using namespace std;

ifstream cin("galbeni.in");
ofstream cout("galbeni.out");

int v[10005],c[10005];

int main()
{
    int n,k,x,s1,s2,n1;
    cin>>x>>k>>n;
    n1=n;
    int p10=1;
    v[x]=1;
    while(k)
    {
        p10*=10;
        k--;
    }
    c[1]=x;
    for(int i=2;i<=n;i++)
    {
        int cx=x,y=x;
        while(cx)
        {
            if(cx%10!=0)
                y*=cx%10;
            cx/=10;
        }
        y=(y*8/9)%p10;
        while(y*10<p10)
            y=y*10+9;
        if(v[y])
        {
            int a1=n-(v[y]-1);
            a1=a1%(i-v[y]);
            if(a1==0)
                cout<<c[i-1];
            else
                cout<<c[v[y]+a1-1];
            return 0;
        }
        x=y;
        v[x]=i;
        c[i]=x;
    }
    cout<<c[n];
}
