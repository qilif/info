#include <iostream>

using namespace std;

int v[35];

int main()
{
    int n,i=1,p=1;
    cin>>n;
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
            cout<<p<<' ';
        p*=2;
    }
    return 0;
}
