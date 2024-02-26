#include <fstream>

using namespace std;

ifstream cin ("fantastice.in");
ofstream cout ("fantastice.out");

int v[1000001];

void chur()
{
    for(int i=2;i<=1000000;i++)
        if(v[i]==0)
            for(int j=2;j*i<=1000000;j++)
                v[j*i]=i;
    v[1]=1;
}
int nrdiv(int n)
{
    int nr=1;
    while(n>1)
    {
        int np=v[n],p=0;
        if(np!=0)
            while(n%np==0)
            {
                p++;
                n/=np;
            }
        else
        {
            n=1;
            p=1;
        }
        nr*=(p+1);
    }
    return nr;
}

int main()
{
    chur();
    int n,m,i=0;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(v[nrdiv(m)]==0)
            i++;
    }
    cout<<i;
    return 0;
}
