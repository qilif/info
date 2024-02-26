#include <fstream>
#include <cmath>
using namespace std;
ifstream in ("culegere.in");
ofstream out ("culegere.out");
int main()
{
    long long n,p,m,t,s,x=1,nrc=0;
    in>>p>>n;
    s=((p+1)*p)/2;
    while(x<=s)
    {
        x=x*10;
        nrc++;
    }
    x/=10;
    t=(s-x+1)*nrc;
    nrc--;
    s=x;
    x/=10;
    while(x)
    {
        t+=(s-x)*nrc;
        nrc--;
        s=x;
        x/=10;
    }
    t+=(s-x)*nrc;
        nrc--;
    out<<t<<'\n';
    m=(-1+sqrt(-1+8*n]))/2;
    if(m*(m+1)/2<n)
        m++;
    out<<m;
    return 0;
}
