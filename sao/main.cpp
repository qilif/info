#include <fstream>

using namespace std;
ifstream in ("sao.in");
ofstream out ("sao.out");
int main()
{
    unsigned long long int m,rm,pm,n,r,p,c,cm=2000000000,x=0;
    in>>m;
    while(m)
    {
        in>>rm>>pm;
        x+=rm+pm;
        m--;
    }
    in>>n;
    while(n)
    {
        in>>r>>p>>c;
        if(r+p>=x&&c<cm)
            cm=c;
        n--;
    }
    out<<cm;
    return 0;
}
