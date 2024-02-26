#include <iostream>

using namespace std;

int v[21][21];

int main()
{
    int n,s1=0,s2=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>v[i][j];
    for(int i=1;i<=n;i++)
    {
        s1+=v[i][i];
        s2+=v[i][n-i+1];
    }
    cout<<abs(s1-s2);
    return 0;
}
