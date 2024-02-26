#include <fstream>

using namespace std;

ifstream cin ("jocprim.in");
ofstream cout ("jocprim.out");


int maxi=0,nr=0,maxim;
int v[10000001],c[1000000];

void chur()
{
    for(int i=2;i<=1000000;i++)
        if(c[i]==0)
            for(int j=2;i*j<=1000000;j++)
                c[i*j]=i;
}
void divis(int n)
{
    while(n>1)
    {
        int np=c[n];
        if(np==0)
        {
            np=n;
            n=1;
        }
        else
            while(n%np==0)
                n=n/np;
        if(np>maxi)
            maxi=np;
        if(np>maxim)
            maxim=np;
    }
    if(v[maxi]==0)
        nr++;
    v[maxi]++;
    maxi=0;
}

int main()
{
    chur();
    int n,m;
    cin>>n;
    while(n)
    {
        cin>>m;
        divis(m);
        n--;
    }
    cout<<nr<<'\n';
    for(int i=2;i<=maxim;i++)
        if(c[i]==0&&v[i])
            cout<<i<<' '<<v[i]<<'\n';
    return 0;
}
