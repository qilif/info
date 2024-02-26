#include <iostream>

using namespace std;

int main()
{
    int n,m,i=0,j;
    cin>>n;
    while(n)
    {
        j=0;
        cin>>m;
        while(m)
        {
            j++;
            m/=10;
        }
        if(j%2==1)
            i++;
    }
    cout<<i;
    return 0;
}
