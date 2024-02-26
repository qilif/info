#include <iostream>
#include <algorithm>

using namespace std;

int v[21][21];

int main()
{
    int n,cmmdc=1,s1=0,s2=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>v[i][j];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
            s1+=v[i][j];
        for(int j=i-1;j>0;j--)
            s2+=v[i][j];
    }
    for(int i=1;i*i<=max(s1, s2);i++)
    {
        if(s1%i==0&&s2%i==0)
            cmmdc=i;
    }
    cout<<cmmdc;
    return 0;
}
