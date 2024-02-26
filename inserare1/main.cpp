#include <iostream>

using namespace std;

double v[52][52];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=1+n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>v[i][j];
            v[n/2+1][j]+=v[i][j];
        }
        if(i==n/2)
            i++;
    }
    for(int j=1;j<=n;j++)
        v[n/2+1][j]/=n;
    for(int i=1;i<=1+n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<v[i][j]<<' ';
        cout<<'\n';
    }
    return 0;
}
