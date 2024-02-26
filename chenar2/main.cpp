#include <iostream>

using namespace std;

int v[101][101];

int main()
{
    int n,m,x;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>v[i][j];
    cin>>x;
    for(int j=1;j<=m;j++)
        if(v[1][j]==x)
        {
            cout<<"DA";
            return 0;
        }
    for(int j=1;j<=m;j++)
        if(v[n][j]==x)
        {
            cout<<"DA";
            return 0;
        }
    for(int i=1;i<=m;i++)
        if(v[i][1]==x)
        {
            cout<<"DA";
            return 0;
        }
    for(int i=1;i<=m;i++)
        if(v[i][m]==x)
        {
            cout<<"DA";
            return 0;
        }
    cout<<"NU";
    return 0;
}
