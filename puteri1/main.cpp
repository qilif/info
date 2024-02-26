#include <iostream>

using namespace std;

int main()
{
    int n,m,k,r=0;
    bool b;
    cin>>n>>k;
    while(n--)
    {
        b=true;
        cin>>m;
        while(m)
        {
            if(m%k>1)
            {
                b=false;
                break;
            }
            m/=k;
        }
        if(b)
            r++;
    }
    cout<<r;
    return 0;
}
