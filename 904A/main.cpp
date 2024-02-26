#include <iostream>

using namespace std;

int sumcif(int a)
{
    int s=0;
    while(a)
    {
        s+=a%10;
        a/=10;
    }
    return s;
}

int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(sumcif(a)%b==0)
        {
            cout<<a<<'\n';
            continue;
        }
        while(sumcif(a)%b!=0)
        {
            a++;
            if(sumcif(a)%b==0)
                cout<<a<<'\n';
        }
    }
    return 0;
}
