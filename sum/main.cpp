#include <fstream>

using namespace std;
ifstream in ("sum.in");
ofstream out ("sum.out");
int main()
{
    int n,m;
    in>>n>>m;
    out<<n+m;
    return 0;
}
