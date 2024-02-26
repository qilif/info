#include <iostream>

using namespace std;

char c[100001];
long long v[100001],cv[100001];

int main()
{
    long long n,m,s=0,rest=0,rest2=0;

    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        cv[i]=v[i];
    }
    for(int i=0;i<n;i++)
    {
        int j;
        if(c[i]=='R')
            j = (i+1)%n;
        else
        {
            j = i-1;
            if (j<0) j = n-1;
        }

        v[j]+=m;
        v[i]-=m;
    }
    for(int i=0;i<n;i++)
    {
        if (v[i]>cv[i])
            v[i]=cv[i];
    }

    bool stop = false;
    while (!stop)
    {
        stop = true;
        for (int i=0;i<n;i++)
        {
            if (v[i]<0)
            {
                int j;
                if (c[i] == 'R')
                    j=(i+1)%n;
                else
                {
                    j = i-1;
                    if (j<0)
                        j = n-1;
                }

                v[j] += v[i];
                if (v[j]>cv[j])
                    v[j]=cv[j];
                v[i]=0;
                if (v[j]<0)
                    stop = false;
            }
        }
    }


    for(int i=1;i<=n;i++)
        s+=v[i];
    cout<<s;
    return 0;
}
