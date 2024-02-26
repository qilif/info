#include <iostream>

using namespace std;

int main()
{
    int n, m, i=0, mm, p;
    cin>>n;
    while(n)
    {
        cin>>m;
        p=m%10;
        m/=10;
        mm=m;
        while(m)
        {
            p=p*10+m%10;
            m/=10;
        }
        if(p==mm)
            i++;
        n--;
    }
    cout<<i;
    return 0;
}
