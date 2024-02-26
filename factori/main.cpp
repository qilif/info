#include <fstream>

using namespace std;

ifstream cin("factori.in");
ofstream cout("factori.out");

int v[60001],m[60000];

void chur()
{
    for(int i=2;i<=60000;i++)
        if(v[i]==0)
            for(int j=2;i*j<=60000;j++)
                v[i*j]=i;
}

void div(int n)
{
    while(n>1)
    {
        int np=v[n];
        if(np==0)
            np=n;
        while(n%np==0)
        {
            m[np]++;
            n/=np;
        }
    }
}

int main()
{
    chur();
    int n;
    while(true)
    {
        cin>>n;
        if (n == 0)
            break;
        for(int i=2;i<=n;i++)
            div(i);
        for(int i=2;i<=n;i++)
            if(v[i]==0)
            {
                cout<<m[i]<<' ';
                m[i]=0;
            }
        cout<<'\n';
    }
    return 0;
}
