#include <iostream>

using namespace std;

int v[101][101];

int main()
{
    int n,m,rc=0;
    bool a=true;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>v[i][j];
            if(v[i][j]!=v[i-1][j]&&a)
                a=false;
        }
        if(a)
            rc++;
        a=true;
    }
    cout<<rc;
    return 0;
}
