#include <fstream>

using namespace std;

ifstream cin("sumsec.in");
ofstream cout("sumsec.out");

int v[1001],s[1001];

void chur(int n)
{
    for(int i=2;i<=1001;i++)
        if(v[i]==0)
            for(int j=2;i*j<=1001;j++)
                v[i*j]=1;
    v[1]=1;
    v[0]=1;
}

int main()
{
    int n,m,i=1,j=0;
    cin>>n;
    bool b=true;
    chur(n);
    while(n--)
    {
        cin>>m;
        if(v[m]==0&&b)
            b=false;
        if(v[m]==0)
            j=i;
        if(b==false)
        {
            s[i]=s[i-1]+m;
            i++;
        }
    }
    cout<<s[j];
    return 0;
}
