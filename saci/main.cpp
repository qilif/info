#include <iostream>

using namespace std;

int main()
{
    int n,m,i=0,c;
    cin>>n;
    while(n)
    {
        cin>>m;
        c=m%10;
        m/=10;
        while(m)
        {
            if(c>m%10)
                break;
            c=m%10;
            m/=10;
        }
        if(m==0)
            i++;
        n--;
    }
    cout<<i;
    return 0;
}
