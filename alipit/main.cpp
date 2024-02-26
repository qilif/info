#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n,m,j=0;
    cin>>n;
    if(n<10)
    {
        cout<<"DA";
        return 0;
    }
    m=n;
    while(n)
    {
        j++;
        n/=10;
    }
    n=m;
    m=pow(10,j/2);
    n/=m;
    if(j%2==1)
        n/=10;
    if(n==m)
    {
        cout<<"DA";
        return 0;
    }
    cout<<"NU";
    return 0;
}
