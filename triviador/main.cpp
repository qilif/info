#include <fstream>
using namespace std;
ifstream in("triviador.in");
ofstream out("triviador.out");
int main()
{
    long long n,a,b,c,m=0,m1=0;
    in>>n;
    in>>a>>b>>c;
    n--;
    m=a+b+c;
    while(n)
    {
        in>>a>>b>>c;
        if(a+b+c>m)
        {
            m1=m;
            m=a+b+c;
        }
        else if(a+b+c>m1&&a+b+c!=m)
            m1=a+b+c;
        n--;
    }
    if(m1==0)
        out<<"TOTI SUNT CASTIGATORI";
    else
        out<<m<<' '<<m1;
    return 0;
}
