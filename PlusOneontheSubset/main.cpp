#include <iostream>

using namespace std;

int main()
{
    long long k,n,m,mmax=0,mmin=LLONG_MAX;
    cin>>k;
    while(k)
    {
        cin>>n;
        while(n)
        {
            cin>>m;
            if(m>mmax)
                mmax=m;
            if(m<mmin)
                mmin=m;
            n--;
        }
        cout<<mmax-mmin<<'\n';
        mmax=0;
        mmin=LLONG_MAX;
        k--;
    }
    return 0;
}
