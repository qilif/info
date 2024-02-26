#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int n)
{
    if(n==1)
        return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
bool pp(int n)
{
    if(n==1)
        return 1;
    for(int i=1;i*i<=n;i++)
        if(i*i==n)
            return 1;
    return 0;
}

int main()
{
    int n,m,s=0;
    cin>>n;
    while(n)
    {
        cin>>m;
        if(isprime(m)==0)
            if(pp(m)==1)
                s+=m*3;
            else
                s+=m;
        n--;
    }
    cout<<s;
    return 0;
}
