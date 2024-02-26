#include <fstream>

using namespace std;

ifstream cin("valori-panta.in");
ofstream cout("valori-panta.out");

bool panta(int n)
{
    int m=n;
    while(n)
    {
        if(n%10>=n/10%10&&n>9)
            break;
        n/=10;
    }
    if(!n)
        return 1;
    while(m)
    {
        if(m%10<=m/10%10)
            break;
        m/=10;
    }
    if(!m)
        return 1;
    return 0;
}

int v[200001],ma[200001],mi[200001];

int main()
{
    int n,maxi=0,mini=99999999,nr=0,k1=1,k2=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>=maxi&&panta(v[i]))
        {
            maxi=v[i];
            ma[k1]=i;
            k1++;
        }
        if(v[i]<=mini&&panta(v[i]))
        {
            mini=v[i];
            mi[k2]=i;
            k2++;
        }
        if(panta(v[i]))
            nr++;
    }
    if(nr==0)
        cout<<"NU EXISTA";
    else
    {
        cout<<nr<<'\n'<<maxi;
        for(int i=1;ma[i];i++)
            cout<<ma[i]<<' ';
        cout<<'\n'<<mini<<' ';
        for(int i=1;mi[i];i++)
            cout<<mi[i]<<' ';
    }
    return 0;
}
