#include <iostream>

using namespace std;

int main()
{
    int n,m=1000001;
    while(cin>>n)
    {
        if(m>n&&n>0)
            m=n;
    }
    if(m==1000001)
        cout<<"NU EXISTA";
    else
        cout<<m;
    return 0;
}
