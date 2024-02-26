#include <iostream>

using namespace std;
int v[101];
int main()
{
    int n,m,k,j;
    cin>>n;
    while(n)
    {
        cin>>m>>k;
        for(int i=1;i<=m;i++)
            cin>>v[i];
        for(j=1;j<=m;j++)
        {
            if(v[j]==k)
            {
                cout<<"YES"<<'\n';
                break;
            }
            else if(j==m)
                cout<<"NO"<<'\n';
        }
        n--;
    }
    return 0;
}
