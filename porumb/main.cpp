#include <fstream>
using namespace std;
ifstream cin ("porumb.in");
ofstream cout ("porumb.out");
int main()
{
    long long n,m,a,p=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        p+=a;
    }
    cout<<p+n-1;
    return 0;
}
