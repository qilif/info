#include <iostream>

using namespace std;

int v[101][101],b[101][101];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            cin>>v[i][j];
            b[j][i]=v[i][j];
        }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<b[i][j]<<' ';
        cout<<'\n';
    }
    return 0;
}
