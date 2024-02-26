#include <fstream>

using namespace std;

ifstream cin ("devt.in");
ofstream cout ("devt.out");


int v[10000000];

void chur(int n)
{
    for(int i=2;i<n;i++)
        if(v[i]==0)
            for(int j=2;j*i<n;j++)
                v[i*j]=1;
    v[0]=0;
    v[1]=1;
    int k=2;
    for(int i=2;i<n;i++)
        if(v[i])
        {
            v[i]=k;
            k++;
        }
}

int main()
{
    long long n,m,a,b;
    cin>>m>>n;
    chur(m);
    while(n)
    {
        cin>>a>>b;
        int i=0;
        if(v[a]&&v[b])
            i=v[b]-v[a]+1;
        else if(v[a]&&v[b]==0)
        {
            while(v[b]==0&&b>a)
                b--;
            i=v[b]-v[a]+1;
            if(a==b)
                i--;
        }
        else if(v[a]==0&&v[b])
        {
            while(v[a]==0&&a<b)
                a++;
            i=v[b]-v[a]+1;
            if(a==b)
                i--;
        }
        else
        {
            while(v[b]==0&&b>a)
                b--;
            while(v[a]==0&&a<b)
                a++;
            i=v[b]-v[a]+1;
            if(a==b)
                i--;
        }
        cout<<i<<'\n';
        n--;
    }
    return 0;
}
