#include <fstream>
using namespace std;
ifstream in ("cifra4.in");
ofstream out ("cifra4.out");
int main()
{
    int n,m,c1,c,a,b,d=0,i=1,j,j1;
    in>>c1>>c;
    if(c1==1)
    {
        in>>n;
        for(j1=0;i<=n;j1++)
        {
            j=j1;
            while(j)
            {
                if(j%10==c)
                    d++;
                j/=10;
            }
            if(d==0)
                i++;
            d=0;
        }
        out<<j1;
    }
    else
    {
        i=0;
        in>>a>>b;
        for(j1=a;j1<b;j1++)
        {
            j=j1;
            while(j)
            {
                if(j%10==c)
                    d++;
                j/=10;
            }
            if(d!=0)
                i++;
            d=0;
        }
        out<<i;
    }
    return 0;
}
