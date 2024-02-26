#include <fstream>

using namespace std;

ifstream cin("conversie_b_10.in");
ofstream cout("conversie_b_10.out");

int v[1000001];

int main()
{
    int n,m,b,x=1,r=0;
    cin>>n>>b;
    while(n)
    {
        r+=(n%10)*x;
        x*=b;
        n/=10;
    }
    cout<<r;
    return 0;
}
