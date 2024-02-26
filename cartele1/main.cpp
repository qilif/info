#include <fstream>

using namespace std;

ifstream cin ("cartele.in");
ofstream cout ("cartele.out");

int main()
{
    long long o,m,s,f=0,b=0,c,n,tt,t,nst=0,ma=0;
    char fb,ie;
    cin>>c>>n;
    if(c==1)
    {
        while(n)
        {
            cin>>fb>>ie>>o>>m>>s;
            if(fb=='f'&&ie=='i')
                f++;
            else if(fb=='f'&&ie=='e')
                f--;
            else if(fb=='b'&&ie=='i')
                b++;
            else if(fb=='b'&&ie=='e')
                b--;
            n--;
        }
        cout<<b<<' '<<f;
    }
    else if(c==2)
    {
        tt = -1;
        while(n)
        {
            cin>>fb>>ie>>o>>m>>s;
            if(fb=='f'&&ie=='i')
                f++;
            else if(fb=='f'&&ie=='e')
                f--;
            else if(fb=='b'&&ie=='i')
                b++;
            else if(fb=='b'&&ie=='e')
                b--;
            t=s+m*60+o*3600;
            if(f==b&&b!=0)
                tt = t;
            else
            {
                if (tt != -1)
                    nst=nst+(t-tt);
                tt = -1;
            }
            n--;
        }
        cout<<nst;
    }
    else
    {
        cin>>fb>>ie>>o>>m>>s;
        if(fb=='f'&&ie=='i')
            f++;
        else if(fb=='f'&&ie=='e')
            f--;
        else if(fb=='b'&&ie=='i')
            b++;
        else if(fb=='b'&&ie=='e')
            b--;
        tt=s+m*60+o*3600;
        n--;
        while(n)
        {

            cin>>fb>>ie>>o>>m>>s;
            if(fb=='b')
            {
                t=s+m*60+o*3600;
                if(b%2==1&&ma<(t-tt))
                    ma=t-tt;
                tt=t;
                if(ie=='i')
                    b++;
                else
                    b--;
            }
            n--;
        }
        cout<<ma;
    }
    return 0;
}
