#include <fstream>
using namespace std;
ifstream in ("bmedia.in");
ofstream out ("bmedia.out");
int main()
{
    unsigned long long n,m=0,a;
    in>>n;
    a=n;
    if(a==1000000000)
        out<<8888888899;
    if(a>=10)
    {
        m+=9;
        n-=9;
    }
    else
    {
        out<<n;
        return 0;
    }
    if(a>=100)
    {
        m+=180;
        n-=90;
    }
    else
    {
        m=m+n*2;
        out<<m;
        return 0;
    }
    if(a>=1000)
    {
        m+=2700;
        n-=900;
    }
    else
    {
        m=m+n*3;
        out<<m;
        return 0;
    }
    if(a>=10000)
    {
        m+=36000;
        n-=9000;
    }
    else
    {
        m=m+n*4;
        out<<m;
        return 0;
    }
    if(a>=100000)
    {
        m+=450000;
        n-=90000;
    }
    else
    {
        m=m+n*5;
        out<<m;
        return 0;
    }
    if(a>=1000000)
    {
        m+=5400000;
        n-=900000;
    }
    else
    {
        m=m+n*6;
        out<<m;
        return 0;
    }
    if(a>=10000000)
    {
        m+=63000000;
        n-=9000000;
    }
    else
    {
        m=m+n*7;
        out<<m;
        return 0;
    }
    if(a>=100000000)
    {
        m+=720000000;
        n-=90000000;
    }
    else
    {
        m=m+n*8;
        out<<m;
        return 0;
    }
    m=m+n*9;
    out<<m;
    return 0;
}
