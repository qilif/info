#include <iostream>

using namespace std;

int v[100],m[100],t[100];

int main()
{
    int k,n;
    bool b=true;
    cin>>k;
    while(k--)
    {
        int z=0;
        b=true;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>v[i];
        for(int i=1;i<=n;i++)
            cin>>m[i];
        for(int i=1;i<=n;i++)
            cin>>t[i];
        if(n==1)
        {
            cout<<0<<'\n';
            continue;
        }
        for(int i=1;i<=n;i++)
        {
            int j;
            for(j=1;t[i]+1!=t[j]&&j<=n;j++)
                ;
            if(j==n+1)
                break;
            if(m[i]<m[j])
            {
                cout<<-1<<'\n';
                b=false;
                break;
            }
            else if(m[i]==m[j]&&v[i]==v[j])
            {
                cout<<-1<<'\n';
                b=false;
                break;
            }
        }
        if(!b)
            continue;
        while(b)
        {
            b=false;
            for(int i=1;i<=n&&!b;i++)
            {
                int j=1;
                while(t[i]+1!=t[j]&&j<n)
                    j++;
                if(v[i]<v[j])
                    b=true;
            }
            for(int i=1;i<=n;i++)
                v[i]+=m[i];
            z++;
            for(int i=1;i<=n&&!b;i++)
            {
                int j=1;
                while(t[i]+1!=t[j]&&j<n)
                    j++;
                if(v[i]>v[j])
                    b=false;
            }
        }
        cout<<z<<'\n';
    }
    return 0;
}
