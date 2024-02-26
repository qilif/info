#include <iostream>

using namespace std;

int main()
{
    int n,b,m;
    cin>>n>>b;
    while(n)
    {
        if(n%b>m)
            m=n%b;
        n/=b;
    }
    cout<<m;
    return 0;
}
