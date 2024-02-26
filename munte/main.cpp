#include <fstream>

using namespace std;

ifstream cin("furnica.in");
ofstream cout("furnica.out");

long long v[10001],o[10001];

int main()
{
    long long c,n,t,i,d,dr,t1;
    cin>>c;
    if(c==1)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>o[i]>>v[i];
        t1=v[0]*5+o[0]*3;
        t1+=v[n-1]*2;
        for(i=1;i<n;i++)
        {
            if(v[i]<=v[i-1])
                t1+=(v[i-1]-v[i])*2;
            else
                t1+=(v[i]-v[i-1])*5;
            t1+=o[i]*3;
        }
        cout<<t1;
    }
    else if(c==2)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>o[i]>>v[i];
        d=v[0];
        dr=0;
        for(i=0;i<n;i++)
        {
            d+=o[i];
            if(v[i]>v[i+1])
            {
                if(dr<d)
                    dr=d;
                d=0;
            }
            else
                d+=v[i+1]-v[i];
        }
        cout<<dr;
    }
    else
    {
        cin>>n>>t1;
        for(i=0;i<n;i++)
            cin>>o[i]>>v[i];
        t=v[0]*5;
        for(i=0;i<n;i++)
        {
            t+=3*o[i];
            if(t>=t1)
            {
                cout<<i+1;
                break;
            }
            if(v[i]>v[i+1])
            {
                t+=2*(v[i]-v[i+1]);
                if(t>=t1)
                {
                    cout<<i+1;
                    break;
                }
            }
            else
            {
                t+=5*(v[i+1]-v[i]);
                if(t>=t1)
                {
                    cout<<i+2;
                    break;
                }
            }
        }
    }
    return 0;
}
