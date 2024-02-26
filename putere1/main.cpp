#include <iostream>
#include <cmath>

using namespace std;

int v[35];

int main()
{
    unsigned long long n,i=1,p,x,b,s=1;
    cin>>b>>n>>p;
    x=pow(10,p);
    while(n)
    {
        v[i]=n%2;
        i++;
        n/=2;
    }
    i--;
    for(int j=1;j<=i;j++)
    {
        if(v[j]==1)
        {
            s*=b;
            s%=x;
        }
        b*=b;
        b%=x;
    }
    cout<<s;
    return 0;
}
