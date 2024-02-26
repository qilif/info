#include <fstream>

using namespace std;

ifstream cin ("joc2020.in");
ofstream cout ("joc2020.out");


int v[1000001];

void chur()
{
    for(int i=2;i<=1000001;i++)
        if(v[i]==0)
            for(int j=2;j*i<=1000001;j++)
                v[i*j]=i;
    v[1]=1;
}
int nrdiv(int n)
{
    int s=1;
    if(n==1)
        return 1;
    while(n>1)
    {
        int np=v[n],p=0;
        if(np==0)
        {
            np=n;
            n=1;
            p=1;
        }
        else
            while(n%np==0)
            {
                p++;
                n/=np;
            }
        s*=(p+1);
    }
    return s;
}

int main()
{
    chur();
    int n,m;
    cin>>n;
    while(n)
    {
        cin>>m;
        cout<<nrdiv(m)<<' ';
        n--;
    }
    return 0;
}
