#include <iostream>

using namespace std;

//ifstream cin("secvk.in");
//ofstream cout("secvk.out");

int v[1000000],s[1000000];

int main()
{
    int n,m=0,k,p,u;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        s[i]=s[i-1]+v[i];
    }
    for(int i=1;i+k-1<=n;i++)
    {
        if(s[i+k-1]-s[i-1]>m)
        {
            p=i;
            u=i+k-1;
            m=s[i+k-1]-s[i-1];
        }
    }
    while(p<=u)
    {
        cout<<v[p]<<' ';
        p++;
    }
    return 0;
}
