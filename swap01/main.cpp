#include <iostream>

using namespace std;

int s[100001];
bool v[100001];

int main()
{
    int n,k=0,maxi=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        k+=v[i];
    }
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+v[i];
    for(int i=1;i+k-1<=n;i++)
        if(s[k+i-1]-s[i-1]>maxi)
            maxi=s[k+i-1]-s[i-1];
    cout<<k-maxi;
    return 0;
}
