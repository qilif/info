#include <iostream>
#include <algorithm>
using namespace std;
int v[200005],n,n1;
int cb(int x)
{
    int st=1,dr=n,mij,pozitie=0;
    while(st<=dr)
    {
        mij=(st+dr)/2;
        if(v[mij]<=x)
        {
            pozitie=mij;
            st=mij+1;
        }
        else
            dr=mij-1;
    }
    return pozitie;
}
int main()
{
    int x,y;
    cin>>n>>n1;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1);
    while(n1--)
    {
        cin>>x>>y;
        cout<<cb(y)-cb(x-1)<<"\n";
    }
    return 0;
}
