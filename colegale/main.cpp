#include <iostream>

using namespace std;

int v[51][51];

int main()
{
    int n,m,x;
    bool dn=true,ex=false;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>v[i][j];
    }
    for(int j=1;j<=m;j++)
    {
        x=v[1][j];
        for(int i=1;i<=n;i++)
        {
            if(v[i][j]!=x)
                dn=false;
        }
        if(dn==true)
        {
            cout<<x<<' ';
            ex=true;
        }
        dn=true;
    }
    if(ex==false)
        cout<<"nu exista";
    return 0;
}
