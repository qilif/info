#include <fstream>
#include <cmath>

using namespace std;

ifstream cin ("num_sum_div.in");
ofstream cout ("num_sum_div.out");

/*unsigned long long v[100000000];

void chur()
{
    for(int i=2;i<=100000000;i++)
        if(v[i]==0)
            for(int j=2;j*i<=100000000;j++)
                v[i*j]=i;
}*/

int este(unsigned long long n)
{
    unsigned long long m=n,d=2,p=1;
    while(m>1&&n!=d)
    {
        int p1=0,x=1;
        unsigned long long s=1;
        while(m%d==0)
        {
            p1++;
            x*=d;
            s+=x;
            m/=d;
        }
        if(p1)
            p*=s;
        d++;
    }
    if(n!=d)
        p-=n;
    if(p<n)
        return 1;
    else if(p==n)
        return 2;
    else
        return 3;
}

int main()
{
    ///chur();
    unsigned long long n,m,a=0,p=0,d=0;
    cin>>n;
    while(n)
    {
        cin>>m;
        int e=este(m);
        if(e==1)
            d++;
        else if(e==2)
            p++;
        else
            a++;
        n--;
    }
    cout<<d<<' '<<p<<' '<<a;
    return 0;
}
