#include <iostream>

using namespace std;

int v[51][51];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>v[i][j];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            if(i!=n-1&&j!=m-1)
                cout<<v[i][j]<<' ';
        if(i!=n-1)
            cout<<'\n';
    }
    return 0;
}
