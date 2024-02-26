#include <iostream>

using namespace std;

int main()
{
    int k,n,m,mmax=0,mmax1=0;
    cin>>k;
    while(k)
    {
        cin>>n;
        while(n)
        {
            cin>>m;
            if(m>mmax)
            {
                mmax1=mmax;
                mmax=m;
            }
            else if(m>mmax1)
                mmax1=m;
            n--;
        }
        if(mmax-mmax1>1)
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';
        mmax=0;
        mmax1=0;
        k--;
    }
    return 0;
}
