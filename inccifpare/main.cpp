#include <iostream>
using namespace std;
int main()
{
    int n, m=0;
    cin>>n;
    if(n==0)
    {
        cout<<1;
        return 0;
    }
    while(n)
    {
        m=m*10+n%10;
        if((m%10)%2==0)
            m++;
        n/=10;
    }
    while(m)
    {
        n=n*10+m%10;
        m/=10;
    }
    cout<<n;
    return 0;
}
