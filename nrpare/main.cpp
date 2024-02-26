#include <iostream>

using namespace std;

int v[101][101];

int main()
{
    int n,m,p=0,pc=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>v[i][j];
            if(v[i][j]%2==0)
                pc++;
        }
        if(pc>p)
            p=pc;
        pc=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            if(v[i][j]%2==0)
                pc++;
        if(pc==p)
        {
            cout<<i;
            return 0;
        }
        pc=0;
    }
    return 0;
}
