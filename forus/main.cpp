#include <fstream>
using namespace std;
ifstream cin ("forus.in");
ofstream cout ("forus.out");
int main()
{
    long long c,n,m,j=0,i=0,x=1,y=1,mm,d=1,mid=1000000,cm,mmm,p1;
    cin>>c>>n;
    if(c==1)
    {
        while(n)
        {
            cin>>m;
            while(m)
            {
                if(m%10==0)
                {
                    j=1;
                    break;
                }
                m/=10;
            }
            if(j==0)
                i++;
            j=0;
            n--;
        }
        cout<<i;
    }
    else
    {
        while(n)
        {
            cin>>m;
            mmm=m;
            x=10;
            mid=1000000;
            while(m)
            {
                m=mmm;
                while((m/(x/10))%10==0)
                    x*=10;
                p1=m%x;
                m/=x;
                mm=m;
                y=1;
                while(mm)
                {
                    y*=10;
                    mm/=10;
                }
                p1=p1*y+m;
                d=1;
                i=0;
                while(d*d<=p1)
                {
                    if(p1%d==0)
                        i++;
                    d++;
                }
                if(i<mid)
                {
                    mid=i;
                    cm=p1;
                }
                else if(i==mid&&p1<cm)
                    cm=p1;
                x*=10;
            }
            cout<<cm<<' ';
            n--;
        }
    }
    return 0;
}
