#include <fstream>

using namespace std;

ifstream cin("cod3.in");
ofstream cout("cod3.out");

int v[100];

int main()
{
    int n,m,maxi=0;
    cin>>n;
    while(n)
    {
        cin>>m;
        if (m>=0 && m < 100)
        {
            if(m>maxi)
                maxi=m;
            v[m]++;
        }
        n--;
    }
    for(int i=0;i<=maxi;i++)
        if(v[i]%2==1)
            cout<<i;
    return 0;
}
