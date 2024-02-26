#include <fstream>

using namespace std;
ifstream cin ("cautare1.in");
ofstream cout ("cautare1.out");
int v[100001],v1[100001],aparitii[1000];
int main()
{
    long long n,m,i,j,x=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        cin>>v[i];
    i=1;
    for(j=1;j<=m;j++)
    {
        cin>>v1[j];
        if (aparitii[v1[j]]==0)
        {
            while(i<=n)
            {
                if(v[i]==v1[j])
                {
                    x=i;
                    break;
                }
                i++;
            }
            aparitii[v1[j]]=x+1;
        }
        else
        {
            x=aparitii[v1[j]]-1;
        }
        if(x==0)
            cout<<0<<'\n';
        else
            cout<<x<<'\n';
        i=1;
        x=0;
    }
    return 0;
}
