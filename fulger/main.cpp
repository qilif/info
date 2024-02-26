#include <fstream>

using namespace std;
ifstream in ("fulger.in");
ofstream out ("fulger.out");
int main()
{
    int n, m, i, y=0, j=0, x=0, mm;
    in>>n;
    for(i=1;i<=n;i++)
    {
        in>>m;
        mm=m;
        while(m)
        {
            j++;
            m/=10;
        }
        while(j>0)
        {
            x=x*10+1;
            j--;
        }
        x*=9;
        if((x-mm)%100==10)
            y++;
        out<<x-mm<<' ';
        x=0;
    }
    out<<'\n'<<y;
    return 0;
}
