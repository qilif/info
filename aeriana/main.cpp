#include <fstream>
using namespace std;
ifstream in ("aeriana.in");
ofstream out ("aeriana.out");
bool isprime (int n)
{
    int d=2;
    if(n<2)
        return false;
    while(d*d<=n)
    {
        if(n%d==0)
            return false;
        d++;
    }
    return true;
}
int main()
{
    long long c,n,a1,a2,a22,h1,h2,m1,m2,ht,mt,hm=0,mm=0,j=0;
    in>>c>>n;
    if(c==1)
    {
        while(n)
        {
            in>>a1>>a2>>h1>>m1>>h2>>m2;
            if(h1<h2)
            {
                if(m2>=m1)
                {
                    ht=h2-h1;
                    mt=m2-m1;
                }
                else
                {
                    ht=h2-h1-1;
                    mt=60-m1+m2;
                }
            }
            if(h1>h2)
            {
                if(m2>=m1)
                {
                    ht=24-h1+h2;
                    mt=m2-m1;
                }
                else
                {
                    ht=24-h1+h2-1;
                    mt=60-m1+m2;
                }
            }
            if(ht>hm)
            {
                hm=ht;
                mm=mt;
            }
            else if(ht==hm&&mt>mm)
                mm=mt;
            n--;
        }
        out<<hm<<' '<<mm;
        return 0;
    }
    while(n)
    {
        in>>a1>>a2>>h1>>m1>>h2>>m2;
        a22=a2;
        while(a11)
        {
            j+=a11%10;
            a11/=10;
        }
        if(isprme a1==true&&a2%j==0)
        {
            a2=a1;
            a1=a22;
        }
        if(h1<h2)
            {
                if(m2>=m1)
                {
                    ht=h2-h1;
                    mt=m2-m1;
                }
                else
                {
                    ht=h2-h1-1;
                    mt=60-m1+m2;
                }
            }
            if(h1>h2)
            {
                if(m2>=m1)
                {
                    ht=24-h1+h2;
                    mt=m2-m1;
                }
                else
                {
                    ht=24-h1+h2-1;
                    mt=60-m1+m2;
                }
            }
            if(ht>hm)
            {
                hm=ht;
                mm=mt;
            }
            else if(ht==hm&&mt>mm)
                mm=mt;
            n--;
        }
        out<<hm<<' '<<mm;
        return 0;
}
