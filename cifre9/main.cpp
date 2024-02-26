#include <fstream>
#include <cmath>
using namespace std;
ifstream in ("cifre9.in");
ofstream out ("cifre9.out");
int main()
{
    int n,m,k,j=0,i=0;
    in>>n>>k;
    while(n)
    {
        if(n%10==k)
            i++;
        else
            m=m*10+n%10;
        n/=10;
    }
    j=i;
    while(i--)
        n+=pow(10,i)*k;
    while(m)
    {
        n=n*10+m%10;
        m/=10;
    }
    out<<j<<'\n'<<n;
    return 0;
}
