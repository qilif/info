#include <iostream>

using namespace std;

ifstream cin("flori1.in");
ofstream cout("flori1.out");

int sg(int n)
{
    int i;
    for(i=1;(i*(i+1))/2<=n;i++)
        ;
    return i-1;
}

int main()
{
    cout<<sg(7);
    int n,m,h,s=0,d=0;
    cin>>n>>h;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        s+=m;
    }
    d=h*n-s;
    cout<<(n*(n+1))/2+s<<' '<<sg(d);
    return 0;
}
