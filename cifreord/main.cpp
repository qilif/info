#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin ("cifreord.in");
ofstream cout ("cifreord.out");

int v[100001];

int main()
{
    int n,m,j=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        v[i]=m;
    }
    sort(v+1,v+n+1);
    for(int i=1;i<=n;i++)
    {
        cout<<v[i]<<' ';
        if(j==20)
        {
            cout<<'\n';
            j=0;
        }
        j++;
    }
    return 0;
}
