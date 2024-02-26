#include <iostream>

using namespace std;

int v[501][501];

int main()
{
    int n,s=0,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>v[i][j];
            s+=v[i][j];
        }
        if(i==1)
            x=s;
        else if(s!=x)
        {
            cout<<"false";
            return 0;
        }
        s=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            s+=v[j][i];
        if(s!=x)
        {
            cout<<"false";
            return 0;
        }
        s=0;
    }
    for(int i=1;i<=n;i++)
        s+=v[i][i];
    if(s!=x)
    {
        cout<<"false";
        return 0;
    }
    s=0;
    for(int i=1;i<=n;i++)
        s+=v[i][n-i+1];
    if(s!=x)
    {
        cout<<"false";
        return 0;
    }
    s=0;
    cout<<"true";
    return 0;
}
