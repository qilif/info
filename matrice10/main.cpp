#include <iostream>

using namespace std;

int v[51][51];

int main()
{
    int n,m,maxi=10001,mini=10001,imin,imax;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>v[i][j];
        if(v[i][1]<mini)
        {
            mini=v[i][1];
            imin=i;
        }
        if(v[i][m]<maxi)
        {
            maxi=v[i][m];
            imax=i;
        }
    }
    v[imax][m]=mini;
    v[imin][1]=maxi;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<v[i][j]<<' ';
        cout<<'\n';
    }
    return 0;
}
