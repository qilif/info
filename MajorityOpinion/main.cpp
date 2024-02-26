#include <iostream>

using namespace std;

int v[100001],vf[100001];

int main()
{
    int n,m,k;
    cin>>k;
    while(k--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>v[i];
        int j=3,y=0;
        bool b=false;
        for(int i=1;j<=n;i++)
        {
            if(v[i]==v[i+1])
            {
                vf[v[i]]++;
                if(v[i]>y)
                    y=v[i];
            }
            else if(v[i]==v[i+2])
            {
                vf[v[i]]++;
                if(v[i]>y)
                    y=v[i];
            }
            else if(v[i+1]==v[i+2])
            {
                vf[v[i+1]]++;
                if(v[i+1]>y)
                    y=v[i+1];
            }
            j++;
        }
        if(n==2)
            if(v[1]==v[2])
            {
                cout<<v[1];
                b=true;
            }
            else
                b=false;
        if(n==1)
        {
            cout<<v[n];
            b=true;
        }
        for(int i=1;i<=y;i++)
            if(vf[i]>0&&i!=y)
            {
                cout<<i<<' ';
                vf[i]=0;
                b=true;
            }
            else if(vf[i]>0)
            {
                cout<<i;
                vf[i]=0;
                b=true;
            }
        if(!b)
            cout<<-1;
        cout<<'\n';
    }
    return 0;
}
