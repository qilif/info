#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin ("grad1.in");
ofstream cout ("grad1.out");

int grd(int f[],int g[],int st,int dr)
{
    int x=0;
    for(int i=st;i<=dr;i++)
        if(f[i]==g[i-st+1])
            x++;
    return x;
}

int a[10005],b[10005],f[10005],w[10005],mfpoz=0,maxgrd=0;

int main()
{
    int n,k,i,j,y;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        if(i<= k)
            w[i]=a[i];
    }
    int x=0;
    sort(b+1,b+n+1);
    for(i=1;i<=n;i++)
        if(a[i]==b[i])
            x++;
    cout<<x<<'\n';
    sort(w+1,w+k+1);
    maxgrd=grd(a,w,1,k);
    mfpoz=1;
    for(i=k+1;i<=n;i++)
    {
        x=a[i-k],y=a[i],j=1;
        while(w[j]!=x)
            j++;
        w[j]=y;
        while(j<k && y>w[j+1])
            w[j]=w[j+1],w[j+1]=y,j++;
        while(j>1 && y<w[j-1])
            w[j]=w[j-1],w[j-1]=y,j--;
        x=grd(a,w,i-k+1,i);
        if(x>maxgrd)
        {
            maxgrd=x;
            mfpoz=i-k+1;
        }
    }
    cout<<mfpoz<<' '<<maxgrd<<'\n';
}
