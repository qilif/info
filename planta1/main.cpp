#include <fstream>
using namespace std;
ifstream in ("planta.in");
ofstream out ("planta.out")
int main()
{
    int d,a,b,n;
    in>>d>>a>>b>>n;
    if(n%2==0)
    {
        d+=(n/2)*a;
        d-=(n/2)*b;
    }
    else
    {
        d+=(n/2)*a+a;
        d-=(n/2)*b;
    }
    out<<d;
    return 0;
}
