#include <iostream>

using namespace std;

int main()
{
    long long n,m,a=1,b=0,i=1;
    cin>>n>>m;
    for(i=0;n>=0&&m>=0;i++)
    {
        a+=b;
        b=a-b;
        if(a%2==1)
        {
            n-=a/2+1;
            m-=a/2;
        }
        else
        {
            n-=a/2;
            m-=a/2;
        }
    }
    i--;
    if(a%2==1)
    {
        n+=a/2+1;
        m+=a/2;
    }
    else
    {
        n+=a/2;
        m+=a/2;
    }
    cout<<i<<'\n'<<n<<'\n'<<m;
    return 0;
}
