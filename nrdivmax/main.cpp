#include <iostream>

using namespace std;

int main()
{
    int n,divmax=0,i,m;
    cin>>n;
    while(n)
    {
        int nrdiv1=0;
        for(i=2;i*i<n;i++)
            if(n%i==0)
                nrdiv1++;
        if(n==i*i)
            nrdiv1++;
        if(nrdiv1>=divmax)
        {
            divmax=nrdiv1;
            m=n;
        }
        n--;
    }
    cout<<m;
    return 0;
}
