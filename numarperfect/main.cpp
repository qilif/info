#include <iostream>
using namespace std;
int main()
{
    long long n,d;
    cin>>n;
    d=n;
    for(int i=1;i<=n/2;i++)
        if(n%i==0)
            d+=i;
    if(d==n*2)
        cout<<n<<" este perfect";
    else
        cout<<n<<" nu este perfect";
    return 0;
}
