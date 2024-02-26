#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,m,c,d=-1,s=0,r=0;
    cin>>c>>n;
    if(c==1)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            if(v[i]&&v[i-1]==0&&v[i-2]==0&&i>=3)
                s=i;
            if(v[i-2]&&v[i-1]==0&&v[i]==0&&n-i>=3)
                d=i;
            else if(v[i]==0&&v[i]==0&&v[i-1]==0)
            {
                s=0;
                d=-1;
            }
            if(d-s-1>r)
                r=d-s-1;
        }
        cout<<r;
    }
    else if(c==2)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            if(v[i]&&v[i-1]==0&&v[i-2]==0&&i>=3)
                s=i;
            if(v[i-2]&&v[i-1]==0&&v[i]==0&&n-i>=3)
                d=i;
            else if(v[i]==0&&v[i]==0&&v[i-1]==0)
            {
                s=0;
                d=-1;
            }
            if(d-s-1>0)
                r++;
        }
        cout<<r;
    }
    return 0;
}
