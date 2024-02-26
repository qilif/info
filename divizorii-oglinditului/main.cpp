#include <iostream>
using namespace std;
int main()
{
    int n,m=0,d=0;
    cin>>n;
    while(n)
    {
        m=m*10+n%10;
        n/=10;
    }
    for(int i=1;i<=m/2;i++)
        if(m%i==0)
            d++;
    cout<<d;
    return 0;
}
