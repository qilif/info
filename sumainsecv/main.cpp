#include <fstream>

using namespace std;

ifstream cin("sumainsecv.in");
ofstream cout("sumainsecv.out");

int v[101],s[101];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        s[i]=s[i-1]+v[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(s[j]-s[i-1]==m)
            {
                cout<<i<<' '<<j;
                return 0;
            }
        }
    }
    cout<<0<<' '<<0;
    return 0;
}
