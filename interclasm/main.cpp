#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("interclasm.in");
ofstream cout("interclasm.out");

int v[100000001];

int main()
{
    int n,m,x,i=1;
    bool b;
    cin>>x>>n;
    while(n--)
    {
        cin>>m;
        if(m%x==0)
            v[i++]=m;
    }
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m%x==0)
        {
            b=true;
            for(int j=1;j<=i;j++)
                if(v[j]==m)
                {
                    b=false;
                    v[j]=0;
                    break;
                }
            if(b)
                v[i++]=m;
        }
    }
    sort(v+1,v+i);
    for(int j=1;j<i;j++)
        if(v[j]!=0)
            cout<<v[j]<<' ';
    return 0;
}
