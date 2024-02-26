#include <fstream>

using namespace std;
int v[100001];
ifstream in ("cautbin.in");
ofstream out ("cautbin.out");
int main()
{
    int n,m,i,a,b;
    in>>n;
    for(i=1;n<=i;i++)
        in>>v[i];
    in>>m;
    while(m)
    {
        in>>a>>b;
        if(a==0)
        {
            while(i>0)
            {
                if(v[i]==b)
                {
                    out<<i<<'\n';
                    break;
                }
                i--;
            }
            if(i==0)
            {
                out<<-1;
            }
        }
        else if(a==1)
        {
            while(i>0)
            {
                if(v[i]<=b)
                {
                    out<<i<<'\n';
                    break;
                }
                i--;
            }
            if(i==0)
            {
                out<<-1;
            }
        }
        else
        {
            i=0;
            while(i<=n)
            {
                if(v[i]>=b)
                {
                    out<<i<<'\n';
                    break;
                }
                i++;
            }
            if(i==0)
            {
                out<<-1;
            }
        }
    }
    return 0;
}
