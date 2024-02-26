#include <fstream>
#include <cmath>

using namespace std;

ifstream cin("formula1.in");
ofstream cout("formula1.out");

int main()
{
    long long n,c,k,m,mp=4,v=0,nr,s,sum=0;
    cin>>c>>k>>n;
    if(c==1)
        cout<<(k+k-1)*(k+k-1);
    for(int i=2;i<=n;i++)
    {
        v+=mp;
        sum+=v;
        mp+=4;
    }
    s=sum+sum+1;
    sum=sqrt(s);
    if(sum%2==0)
        sum-=1;
    cout<<sum*sum;
}
