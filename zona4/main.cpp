#include <iostream>

using namespace std;

int v[201][201];

int main()
{
    int n,z,s=0,y=1;
    cin>>n>>z;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)

            cin>>v[i][j];
    if(z==1)
        for(int i=1;i<=n/2;i++)
            for(int j=i+1;j<n-i+1;j++)
                s+=v[i][j];
    else if(z==2)
        for(int i=2;i<n;i++)
            for(int j=n;j>n-i+1&&j>i;j--)
                s+=v[i][j];
    else if(z==3)
        for(int i=n;i>n/2;i--)
        {
            for(int j=y+1;j<n-y+1;j++)
                s+=v[i][j];
            y++;
        }
    else
        for(int i=2;i<n;i++)
            for(int j=1;j<i&&i+j<n+1;j++)
                s+=v[i][j];
    cout<<s;
    return 0;
}
