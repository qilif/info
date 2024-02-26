#include <fstream>
#include <cmath>
using namespace std;
ifstream cin ("numere14.in");
ofstream cout ("numere14.out");
int main()
{
    int n,m,nr=0,s=0,m1;
    cin>>n;
    while(n)
    {
        cin>>m;
        m1=m;
        while(m)
        {
            nr++;
            m/=10;
        }
        int a=pow(10, nr/2),b;
        b=((m1/a)%10);
        if(b%2==1)
            s+=b;
        nr=0;
        n--;
    }
    cout<<s;
    return 0;
}
