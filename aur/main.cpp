#include <fstream>
#include <cmath>

using namespace std;

ifstream cin ("aur.in");
ofstream cout ("aur.out");

int main()
{
    long long c,n,k,p,m,i=0,r=0,s=0,x=1,y,mm,z;
    cin>>c>>n;
    if(c==1)
    {
        while(n)
        {
            cin>>m;
            while(m)
            {
                i++;
                m/=10;
            }
            n--;
        }
        cout<<i;
    }
    else if(c==2)
    {
        cin>>k;
        while(n)
        {
            cin>>m;
            mm = m;
            int nc = log10(m)+1;
            while(nc)
            {
                i++;
                if (i == k)
                {
                    y = pow(10, nc-1);
                    r = (m/y)%10;
                }
                nc--;
            }
            n--;
        }
        cout<<r;
    }
    else
    {
        cin>>p;
        r=0;
        while(n)
        {
            cin>>m;
            mm=m;
            int nc = log10(m)+1;
            while(nc)
            {
                i++;
                y = pow(10, nc-1);
                x = (m/y)%10;
                z=pow(10,p-1);
                s=s%z*10+x;
                if(s>r)
                    r=s;
                nc--;
            }
            n--;
        }
        cout<<r;
    }
    return 0;
}
