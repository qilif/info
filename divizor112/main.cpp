#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin ("divizor112.in");
ofstream cout ("divizor112.out");

int nr,maxi=0;
int v[1000002],c[1000000];

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
            n=0;
        }
        else
        {
            while(n%np==0)
                n=n/np;
        }
        v[np]++;
        if(v[np]>maxi)
        {
            nr=np;
            maxi=v[np];
        }
        else if(v[np]==maxi&&np<nr)
            nr=np;
    }
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
    cout<<nr;
    return 0;
}
