#include <fstream>

using namespace std;

ifstream cin("extraterestri.in");
ofstream cout("extraterestri.out");

int v[2000002],v1[2000002];

int main()
{
    int n,m,x1,y1,x2,y2,nr,l,ma=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>x1>>y1>>x2>>y2>>nr;
        v1[x1]+=nr;
        v1[x2+1]-=nr;
        if(x2>ma)
            ma=x2;
    }
    for(int i=1;i<=ma;i++)
        v[i]=v[i-1]+v1[i];
    for(int i=1;i<=m;i++)
    {
        cin>>l;
        cout<<v[l]<<'\n';
    }
    return 0;
}
