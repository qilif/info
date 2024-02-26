#include <iostream>

using namespace std;

int main()
{
    unsigned long long n,m,p=0,d=2,s=1;
    cin>>n;
    m=n;
    while(n>1)
    {
        while(n%d==0)
        {
            p++;
            n/=d;
        }
        if(p)
        {
            s*=((p*m)+1);
            s=s%59999;
        }
        p=0;
        d++;
    }
    cout<<s;
    return 0;
}
