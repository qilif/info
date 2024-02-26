#include <fstream>

using namespace std;

 ifstream cin("maxcross.in");
 ofstream cout("maxcross.out");

int s[100001];
bool v[100001];

int main()
{
    int n,m,b,k,mini=1010900;
    cin>>n>>k>>b;
    for(int i=1;i<=b;i++)
    {
        cin>>m;
        v[m]=1;
    }
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+v[i];
    for(int i=1;i+k-1<=n;i++)
        if(s[k+i-1]-s[i-1]<mini)
            mini=s[k+i-1]-s[i-1];
    cout<<mini;
    return 0;
}
