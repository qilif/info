#include <iostream>

using namespace std;

int main()
{
    long long n,m=0;
    cin>>n;
    while(n)
    {
        m+=n%10;
        n/=10;
    }
    while(m)
    {
        n+=m%10;
        m/=10;
    }
    while(n)
    {
        m+=n%10;
        n/=10;
    }
    cout<<m;
    return 0;
}
