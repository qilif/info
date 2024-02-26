#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b;
    c=sqrt(a);
    for(int i=1;i<=c;i++)
        if(a%i==0&&b%i==0)
            cout<<i<<' ';
    for(int i=c;i>=1;i--)
        if(a%i==0&&b%(a/i)==0&&i!=a/i)
            cout<<a/i<<' ';
    return 0;
}
