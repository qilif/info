#include <iostream>

using namespace std;

long long v[100001],s[100001];

int main()
{
    long long n,m,i,j,maxi=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        s[i]=s[i-1]+v[i];
    }
    cin>>m;
    while(m--)
    {
        cin>>i>>j;
        if(s[j]-s[i-1]>maxi)
            maxi=s[j]-s[i-1];
    }
    cout<<maxi;
    return 0;
}
