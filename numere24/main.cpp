#include <iostream>
#include <cmath>

using namespace std;

bool pal(int n)
{
     int cn=n,m=0;
     while(cn)
     {
         m*=10+n%10;
         n/=10;
     }
     if(n==m)
        return 1;
     return 0;
}

int main()
{
    int c,n;
    cin>>c>>n;
    if(c==1)
        cout<<10*(n-1);
    else if(c==2)
        for(int i=1;i<=3;i++)
        {
            if(n%10==0)
                cout<<0;
            else if(pal(n))
                cout<<1;
            else
                cout<<2;
            n/=10;
        }
    else
        for(int )
    return 0;
}
