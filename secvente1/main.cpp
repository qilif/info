#include <iostream>

using namespace std;

int main()
{
    int n,m,k,s=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>m;
        if(m%2==1)
            s++;
    }
    cout<<s/k;
    return 0;
}
