#include <fstream>

using namespace std;

ifstream cin("sumesecv.in");
ofstream cout("sumesecv.out");

int v[1000],s[100000];

int main()
{
    int n,m,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        s[i]=s[i-1]+v[i];
    }
    cin>>m;
    while(m--)
    {
        cin>>i>>j;
        cout<<s[j]-s[i-1]<<' ';
    }
    return 0;
}
