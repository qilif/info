#include <iostream>

using namespace std;

int main()
{
    int n,m,k,x,cm,ccm,maxi=0,cmaxi=0,nc=0,r=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>m;
        cm=m;
        if(m%2==0&&m>maxi)
            maxi=m;
        for(int i=1;cm>9&&i<=12;i++)
        {
            ccm=cm;
            cmaxi=0;
            nc=0;
            x=0;
            while(cm)
            {
                nc++;
                if(cm%10>cmaxi)
                    cmaxi=cm%10;
                cm/=10;
            }
            while(nc--)
                x=x*10+cmaxi;
            cm=ccm;
            x-=cm;
            cm=x;
            if(i==2&&cm==m)
                break;
        }
        if(cm==k)
            r++;
    }
    cout<<maxi<<'\n'<<r;
    return 0;
}
