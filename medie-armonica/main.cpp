#include <iostream>

using namespace std;

int main()
{
    long double n,m,cn,s=0;
    cin>>n;
    cn=n;
    while(cn--)
    {
        cin>>m;
        s+=(1/m);
    }
    n/=s;
    cout<<n;
    return 0;
}
