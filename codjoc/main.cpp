#include <fstream>
using namespace std;
ifstream cin ("codjoc.in");
ofstream cout ("codjoc.out")
int main()
{
    long long n,m,z=1,s=0;
    cin>>n;
    m=n;
    while(n)
    {
        z*=10;
        n/=10;
    }
    while(z)
    {
        s+=m%z;
        z/=10;
    }
    cout<<s;
    return 0;
}
