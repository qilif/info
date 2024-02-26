#include <iostream>

using namespace std;

int main()
{
    int n,p=0,i=0,m;
    cin>>n;
    while(n)
    {
        cin>>m;
        if(m%2==0)
            p++;
        else
            i++;
        n--;
    }
    if(i>p)
        cout<<i-p;
    else
        cout<<p-i;
    return 0;
}
