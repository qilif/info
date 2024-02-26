#include <fstream>

using namespace std;
ifstream in ("magie.in");
ofstream out ("magie.out");
int main()
{
    int n,m,i=0,s=0,maxim=0;
    in>>n;
    while(n)
    {
        in>>m;
        if(2017-m==12)
            i++;
        while(m)
        {
            s+=m%10;
            m/=10;
        }
        if(s>maxim)
            maxim=s;
        s=0;
        n--;
    }
    out<<i<<'\n'<<maxim;
    return 0;
}
