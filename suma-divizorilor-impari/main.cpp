#include <iostream>

using namespace std;

int main()
{
    long long n,s=0;
    cin>>n;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0&&i%2==1&&n/i%2==1)
            s+=i+n/i;
        if(n%i==0&&i%2==1&&n/i%2==0)
            s+=i;
        if(n%i==0&&i%2==0&&n/i%2==1)
            s+=n/i;
        if(i*i==n&&i%2==1)
            s-=i;

    }
    cout<<s;
    return 0;
}
