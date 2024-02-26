#include <iostream>
using namespace std;
int main()
{
    long long n,k,s=0,rn,ro;
    cin>>n>>k;
    long long cn=n;
    while(cn)
    {
        s+=cn%10;
        cn/=10;
    }
    rn=(s*k)%9;
    if(n<100&&n>9&&k>1)
        ro=((n%10)*100+n)%8;
    else if (n<10&&k>2)
        ro=(n*100+n*10+n)%8;
    else if(n<10&&k==2)
        ro=(n*10+n)%8;
    else
        ro=(n%1000)%8;
    int sol;
    sol=9*ro-8*rn;
    if(sol<0)
        sol+=72;
    cout<<sol;
    return 0;
}
