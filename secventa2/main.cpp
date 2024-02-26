#include <iostream>

using namespace std;

int v[1001],s[1001];

int main()
{
    int n,m,j,r=0;
    bool a=false;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>s[i];
    for(int i=1;i<=n-m+1;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(v[i+j-1]!=s[j])
                break;
        }
        if(j==m+1)
        {
            r++;
        }
    }
    cout<<r;
    return 0;
}
