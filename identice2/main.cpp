#include <iostream>

using namespace std;

int v[101][101],n,m;

bool id(int i, int y)
{
    for(int j=1;j<=m;j++)
    {
        if(v[i][j]!=v[y][j])
            return 0;
    }
    return 1;
}

int main()
{
    int rc=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>v[i][j];
        for(int y=i-1;y>0;y--)
            if(id(i, y)==true)
                rc++;
    }
    cout<<rc;
    return 0;
}
