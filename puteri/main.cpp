#include <iostream>

using namespace std;

int main()
{
    long long n, a, b, m = 1, i;

    cin >> n;

    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        m=1;
        if(a>b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        while(m<a)
            m*=2;
        while(m*2<=b)
            m*=2;
        if(m>=a && m<=b)
            cout<<m<<'\n';
        else
            cout<<0<<'\n';
    }
    return 0;
}
