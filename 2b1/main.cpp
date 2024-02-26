#include <iostream>

using namespace std;

int main()
{
    long long n;
    ifstream in ("2b1.in");
    ofstream out ("2b1.out");
    in>>n;
    for(long long int i=1;(1LL<<i)<=n;i++)
    {
        for(long long int j=0;j<i&&1LL*(1LL<<j)+(1LL<<i)<=n;j++)
            out<<(1LL<<i)+(1LL<<j)<<' ';
    }
    return 0;
}
