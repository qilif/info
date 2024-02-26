#include <fstream>

using namespace std;

ifstream cin ("comune.in");
ofstream cout ("comune.out");

int main()
{
    long long n,nn,nnn,m,mm,mmm,i=0,ii=1,j=1;
    cin>>n>>m;
    mm=m;
    mmm=m;
    nn=n;
    nnn=n;
    while(mm)
    {
        while(m)
        {
            if(mm%10==m%10&&ii!=j)
                i--;
            ii++;
            m/=10;
        }
        j++;
        ii=j;
        mm/=10;
        m=mm;
    }
    m=mmm;
    ii=1;
    j=1;
    while(nn)
    {
        while(n)
        {
            if(nn%10==n%10&&ii!=j)
                i--;
            ii++;
            n/=10;
        }
        j++;
        ii=j;
        nn/=10;
        n=nn;
    }
    n=nnn;
    while(n)
    {
        while(m)
        {
            if(m%10==n%10)
                i++;
            m/=10;
        }
        m=mmm;
        n/=10;
    }
    cout<<i;
    return 0;
}
