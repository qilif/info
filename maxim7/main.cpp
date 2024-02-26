#include <fstream>

using namespace std;

ifstream cin("maxim.in");
ofstream cout("maxim.out");

int f[10],b[10],a[500001];

int maimare(int f[],int b[])
{
    for(int i=9;i>=0;i--)
        if(f[i]>b[i]) return 1;
        else if(f[i]<b[i]) return 0;
    return 1;
}
int main()
{
    int cer,n,m,c,x;
    cin>>cer>>n >> m;
    if(cer==1)
    {
        for(int i=1;i<=m;i++)
        {
            cin>>c;
            b[c]++;
        }
        for(int i=9;i>=0;i--)
            for(int j=1;j<=b[i];j++)
                cout<<i;
    }
    else
    {
        x=1;
        for(int i=1;i<=m;i++)
        {
            cin>>a[i];
            b[a[i]]++;
            f[a[i]]++;
        }
        for(int i=m+1;i<=n;i++)
        {
            cin>>a[i];
            f[a[i]]++;
            f[a[i - m]]--;
            if(maimare(f,b))
            {
                x=i-m+1;
                for(int j=0;j<=9;j++)
                  b[j]=f[j];
            }
        }
        cout<<x;
    }
}
