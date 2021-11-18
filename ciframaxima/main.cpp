#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cin>>n;
    m=0;

    while(n)
    {
        if(n%10>m)
        {
            m=n%10;
        }
        n=n/10;
    }

    cout <<m;
    return 0;
}
