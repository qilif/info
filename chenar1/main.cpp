#include <iostream>

using namespace std;

int v[51][51];

int main()
{
    long long n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>v[i][j];
    for(int j=1;j<=m;j++)
        v[1][j]=v[n][m];
    for(int j=1;j<=m;j++)
        v[n][j]=v[n][m];
    for(int i=1;i<=n;i++)
        v[i][1]=v[n][m];
    for(int i=1;i<=n;i++)
        v[i][m]=v[n][m];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<v[i][j]<<' ';
        cout<<'\n';
    }
    return 0;
}
