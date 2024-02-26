#include <iostream>

using namespace std;

int v[100001];

int main()
{
    int n,m,t,k,r=0;
    bool b=true;
    cin>>n>>t>>k;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i+k-1<=n;i++)
    {
        int j=i;
        b=true;
        while(j<=i+k-1)
        {
            if(v[j]>t)
            {
                b=false;
                break;
            }
            j++;
        }
        if(b)
            r++;
    }
    cout<<r;
    return 0;
}
