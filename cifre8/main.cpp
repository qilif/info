#include <iostream>
using namespace std;
//ifstream in ("cifre8.in");
//ofstream out ("cifre8.out");
int main()
{
    int n,m,p=1,a=0;
    cin>>n;
    while(n)
    {
        cin>>m;
        p*=m;
        n--;
    }
    while(p%10==0)
    {
        a++;
        p/=10;
    }
    cout<<a<<' '<<p%10;
    return 0;
}
