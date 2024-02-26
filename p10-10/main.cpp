#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n,k,s=0;
    cin>>n>>k;
    while(n/=10)
        s++;
    cout<<'1';
    while(k--)
        for(int i=1;i<=s;i++)
            cout<<'0';
    return 0;
}
