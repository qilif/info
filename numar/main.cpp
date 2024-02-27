#include <fstream>

using namespace std;

ifstream cin("numar.in");
ofstream cout("numar.out");

int v[10];

int main()
{
    int n,m,mm=-1,s=0;
    bool e=false;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        if(m>=mm)
            s+=m;
        else
        {
            if(s==0)
            {
                v[0]++;
                s=m;
                continue;
            }
            s%=9;
            if(s==0)
                s=9;
            v[s]++;
            s=m;
            e=true;
        }
        mm=m;
    }
    if(m>=mm)
    {
        s+=m;
        if(s==0)
        {
            v[0]++;
            s=m;
        }
        else
        {
            s%=9;
            if(s==0)
                s=9;
            v[s]++;
            s=m;
            e=true;
        }
        s%=9;
        if(s==0)
            s=9;
        v[s]++;
    }
    else
    {
        if(s==0)
        {
            v[0]++;
            s=m;
        }
        else
        {
            s%=9;
            if(s==0)
                s=9;
            v[s]++;
            s=m;
        }
        e=true;
    }
    if(e)
    {
        for(int i=9;i>=0;i--)
            if(v[i]==0)
                cout<<i;
    }
    else
        cout<<-1;
    return 0;
}
