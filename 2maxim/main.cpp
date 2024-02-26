#include <iostream>

using namespace std;

int main()
{
    int n,m,m1=10000,m2=10000,m3=10000;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m<m1)
        {
            m3=m2;
            m2=m1;
            m1=m;
        }
        else if(m<m2)
        {
            m3=m2;
            m2=m;
        }
        else if(m<m3)
            m3=m;
    }
    cout<<m3<<' '<<m2<<' '<<m1;
    return 0;
}
