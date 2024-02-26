#include <fstream>

using namespace std;

ifstream cin("pinguini.in");
ofstream cout("pinguini.out");

int v[100001];

int main()
{
    int n,m,c,s=0;
    cin>>c>>n;
    if(c==1)
    {
        while(n--)
        {
            cin>>m;
            if(m==2)
                s++;
        }
        cout<<s;
    }
    else if(c==2)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            if(v[i]==1&&v[i-1]==2)
                s++;
            if(i==n&&v[i]==2)
                s++;
        }
        cout<<s;
    }
    else
    {
        m=0;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            s++;
            if(v[i]==1)
                s=0;
            if(s>m)
                m=s;
        }
        cout<<m;
    }
    return 0;
}
