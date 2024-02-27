#include <iostream>

using namespace std;

int main()
{
    long long n,i=0;
    cin>>n;
    if(n==0)
        i=1;
    while(n)
    {
        i++;
        n/=10;
    }
    cout<<i;
    return 0;
}
