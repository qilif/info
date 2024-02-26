#include <fstream>

using namespace std;

ifstream cin("bcount.in");
ofstream cout("bcount.out");

int v[100001],s1[100001],s2[100001],s3[100001];

int main()
{
    int n,m,a,b,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        s1[i]=s1[i-1];
        s2[i]=s2[i-1];
        s3[i]=s3[i-1];
        if(v[i]==1)
            s1[i]++;
        else if(v[i]==2)
            s2[i]++;
        else
            s3[i]++;
    }
    while(m--)
    {
        cin>>i>>j;
        cout<<s1[j]-s1[i-1]<<' '<<s2[j]-s2[i-1]<<' '<<s3[j]-s3[i-1]<<'\n';
    }
    return 0;
}
