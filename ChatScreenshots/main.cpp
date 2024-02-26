#include <iostream>

using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t-)
    {
        cin>>n>>m;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>v[i][j];
                vf[v[i][j]]++;
            }
        }
    }
    return 0;
}
