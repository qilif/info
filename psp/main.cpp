#include <fstream>
using namespace std;
ifstream in ("psp.in");
ofstream out ("psp.out");
int main()
{
    long long n,m,s,i=0;
    in>>n>>s;
    while(n)
    {
        in>>m;
        if(m<=s)
        {
            s-=m;
            i++;
        }
        n--;
    }
    out<<i<<' '<<s;
    return 0;
}
