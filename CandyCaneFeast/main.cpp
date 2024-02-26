#include <iostream>

using namespace std;

long long v[10000001];

int main()
{
    long long n,m,h;
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
        cin>>v[i];
    while(m--)
    {
        long long ch=0,chc=0;
        cin>>h;
        for(long long i=1;i<=n;i++)
            if(v[i]>=ch)
                if(v[i]<h)
                {
                    ch=v[i];
                    v[i]=v[i]+v[i]-chc;
                    chc=ch;
                }
                else if(v[i]==h)
                {
                    v[i]=v[i]+v[i]-chc;
                    break;
                }
                else
                {
                    v[i]=v[i]-chc+h;
                    break;
                }
    }
    for(long long i=1;i<=n;i++)
        cout<<v[i]<<'\n';
    return 0;
}
