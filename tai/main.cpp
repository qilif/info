#include <fstream>
using namespace std;
ifstream cin ("tai.in");
ofstream cout ("tai.out");

long long c,n,m,ma,i=2,j,t2,x=1,p;

bool prim (int nr)
{
    if(nr <= 1)
        return false;
    if(nr == 2)
        return true;
    for(int i = 3; i*i <= nr; i++)
        if(nr % i == 0)
            return false;
    return true;
}

int cateCifre(int nr)
{
    int cnt=0;
    while(nr)
    {
        cnt++;
        nr/=10;
    }
    return cnt;
}

void solve1()
{
    while(n--)
    {
        cin>>m;
        if(prim(m)&&ma<m)
            ma=m;
    }
    cout<<ma;
    return;
}

void solve2 ()
{
    while(n--)
    {
        cin>>m;
        int cateCif = cateCifre(m);
        p=1;
        for(int i = 1; i < cateCif; i++)
        {
            int part1 = m % (p*10);
            int part2 = m / (p*10);
            if(prim(part1) && part1 > ma)
                ma = part1;
            if(prim(part2) && part2 > ma)
                ma = part2;
            p*=10;
        }
    }
    cout<<ma;
}

void solve3()
{
    while(n)
    {
        cin>>m;
        t2=m%10;
        m/=10;
        while(m)
        {
            if(m==2||m==3)
            {
                if(ma<m)
                    ma=m;
            }
            for(i=2; i<=m/2; i++)
            {
                if(m%i==0)
                    break;
            }
            if(i-1==m/2&&ma<m)
                ma=m;
            if(t2==2||t2==3)
            {
                if(ma<t2)
                    ma=t2;
            }
            for(j=2; j<=t2/2; j++)
            {
                if(t2%j==0)
                    break;
            }
            if(j-1==t2/2&&ma<t2)
                ma=t2;
            x*=10;
            t2=(m%10)*x;
            m/=10;
        }
        n--;
    }
    cout<<ma;
}

int main()
{
    cin>>c>>n;
    if(c==1)
    {
        solve1();
    }
    else if(c==2)
    {
        solve2();
    }
    else
    {
        solve3();
    }
    return 0;
}
