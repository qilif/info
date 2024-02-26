#include <fstream>
#include <cmath>
using namespace std;
ifstream in ("senila.in");
ofstream out ("senila.out");
int main()
{
    unsigned long long z,k,l,c,r,a,n,m,b,cz=0,s,uc,cr=0,j=0,pwr,p4,inv;
    in>>s>>z>>k>>a>>l>>c>>r;
    inv=z;
    do
    {
        cz=cz*10+z%4;
        z/=4;
    }while(z>=4);
    cz=cz*10+z;
    while(cz)
    {
        z=z*10+cz%10;
        cz/=10;
    }
    k%=s;
    pwr=pow(10,k);
    uc=z%pwr;
    z/=pwr;
    while(z)
    {
        cz=cz*10+z%10;
        j++;
        z/=10;
    }
    while(uc)
    {
        cr=cr*10+uc%10;
        uc/=10;
    }
    cr=cr*pow(10,j)+cz;
    p4=pow(4,1);
    do
    {
        cr=cr/4+cr%4*p4;
        p4*=10;
        k--;
    }while(k);
    out<<cr;
    return 0;
}
//101
//32
//32101
