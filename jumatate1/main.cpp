#include <fstream>
#include <cmath>

using namespace std;

ifstream cin ("jumatate1.in");
ofstream cout ("jumatate1.out");


int cmmdc(int n, int m)
{
    while(n != m)
    {
        if(n > m)
            n -= m;
        else
            m -= n;
    }
    return n;
}

int main()
{
    long long n,x=0,y=0,nn,nrcif=0,z;
    cin>>n;
    nn=n;
    while(nn)
    {
        nrcif++;
        nn/=10;
    }
    if(nrcif%2==1)
    {
        z=pow(10,nrcif/2+1);
        y=n%z;
        n/=z;
        x=n;
    }
    else
    {
        z=pow(10,nrcif/2);
        y=n%z;
        n/=z;
        x=n;
    }
    cout<<cmmdc(x,y);
    return 0;
}
