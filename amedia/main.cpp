#include <fstream>

using namespace std;
ifstream in ("amedia.in");
ofstream out ("amedia.out");
int main()
{
    long long n,i=0;
    in>>n;
    while(n)
    {
        i++;
        n-=9;
    }
    out<<i;
    return 0;
}
