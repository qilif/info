#include <fstream>
using namespace std;
ifstream in ("unupatru.in");
ofstream out ("unupatru.out");
int main()
{
    long long n,m,a,s=0,i=0;
    in>>n;
    while(n)
    {
        in>>m;
        while(m!=1&&m!=4)
        {
            while(m)
            {
                a=m%10;
                s+=a*a;
                m/=10;
            }
            i++;
            m=s;
            s=0;
        }
        out<<i<<' ';
        i=0;
        n--;
    }
    return 0;
}

