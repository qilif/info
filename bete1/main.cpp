#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("bete1.in");
ofstream cout("bete1.out");
int main()
{
    int n,x,max1=0,nmax1=0,sum=0, max2=0, nmax2=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        sum+=x;
        if(max1<x)
        {
            max1=x;
            nmax1=1;
        }
        else if(max1==x)
            nmax1++;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        sum+=x;
        if(max2<x)
        {
            max2=x;
            nmax2=1;
        }
        else if(max2==x)
            nmax2++;
    }
    cout<<sum/n<<endl<<max1+max2<<endl<<min(nmax1, nmax2);
}
