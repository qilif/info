#include <fstream>
using namespace std;
ifstream cin("palindrom2.in");
ofstream cout("palindrom2.out");
bool ap(long long n)
{
    long long copy=n, nn=0, cnt=0, nrc = 0;
    while(copy)
    {
        nrc++;
        nn=nn*10+copy%10;
        copy/=10;
    }
    int cnrc = nrc;
    while(cnrc > nrc/2)
    {
        if(n%10!=nn%10)
            cnt++;
        n/=10;
        nn/=10;
        cnrc--;
    }
    if(cnt==1)
        return 1;
    return 0;
}

bool p(long long n)
{
    long long copy=n, nn=0;
    while(n>0)
    {
        nn=nn*10+n%10;
        n/=10;
    }
    if(copy==nn)
        return 1;
    return 0;
}

int main()
{
    long long cnt=0, m, n, c,mm,i=0,p=1,nr=1;
    cin>>c>>n;
    if(c==1)
    {
        for(long long i=1;i<=n;i++)
        {
            cin>>m;
            if(p(m))
                cnt++;
        }
        cout<<cnt;
    }
    else if(c==2)
    {
        for(long long i=1;i<=n;i++)
        {
            cin>>m;
            if(ap(m))
                cnt++;
        }
        cout<<cnt;
    }
    else
    {
        for(long long i=1;i<=n;i++)
        {
            cin>>m;
            mm=m;
            while(mm)
            {
                i++;
                nr=nr*10+1;
                mm/=10;
            }
            mm=m;
            for(int j=1;j<=i/2;j++)
                p*=10;
            if(i%2==1)
                while(m>nr)
                    nr+=p;
            else
                while(m>nr)
                    nr+=p*11;
        }
    }
}
