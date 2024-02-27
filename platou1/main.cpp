#include <fstream>

using namespace std;
ifstream in ("platou1.in");
ofstream out ("platou1.out");
int main()
{
    int n, m=0, nr=10, nn=10, mm=1;
    in>>nn;
    while(in>>n)
    {
        if(n==nn)
            mm++;
        else
        {
            if(mm>m)
            {
                m=mm;
                nr=nn;
            }
            else if(mm==m && nn<nr)
                nr=nn;
            mm=1;
        }
        nn=n;
    }
    out<<m<<' '<<nr;
    return 0;
}
