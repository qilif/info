#include <iostream>

using namespace std;

int main()
{
    int n, m, i, x;
    cin>>n;
    m=n;
    if(n<=10)
    {
        cout<<1;
        n-=2;
        for(i=1;i<=n;i++)
            cout<<0;
        cout<<n+1<<'\n';
    }
    else
    {
        cout<<1;
        n=n-(n/9)-2;
        x=n/9;
        for(i=1;i<=n;i++)
            cout<<0;
        cout<<n%9;
        while(x)
        {
            cout<<9;
            x--;
        }
    }
    if(m<10)
    {
        cout<<m;
        m--;
        while(n)
        {
            cout<<0;
            m--;
        }
    }
    else
    {
        while()
    }
    return 0;
}
