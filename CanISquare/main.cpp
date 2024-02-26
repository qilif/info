#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long k,n,m,s,i;
    cin>>k;
    while(k--)
    {
        s=0;
        cin>>n;
        while(n--)
        {
            cin>>m;
            s+=m;
        }
        i=sqrt(s);
        if(i*i==s)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}
