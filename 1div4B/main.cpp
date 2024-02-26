#include <iostream>
using namespace std;
int v[10];
int main()
{
    int n,m,mi=10,p=1,i,j,ii=10;
    cin>>n;
    while(n)
    {
        cin>>m;
        for(i=1;i<=m;i++)
        {
            cin>>v[i];
            if(mi>v[i])
                mi=i;
        }
        v[mi]++;
        for(j=1;j<=m;j++)
        {
            p=p*v[j];
        }
        v[ii]=p;
        n--;
    }
    for(ii=10;ii<=19;ii++)
        cout<<v[ii]<<'\n';
    return 0;
}
