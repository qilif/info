#include <iostream>

using namespace std;

int main()
{
    int t,n,m,s=0,mini=0,maxi=0,pmini=0,pmaxi=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        mini=1000000000;
        maxi=0;
        pmini=-1;
        pmaxi=1;
        for(int i=1;i<=n;i++)
        {
            cin>>m;
            s+=m;
            if(m<mini)
            {
                mini=m;
                pmini=i;
            }
            if(m>maxi)
            {
                maxi=m;
                pmaxi=i;
            }
        }
        if(s%n==0&&pmini>=pmaxi)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}
