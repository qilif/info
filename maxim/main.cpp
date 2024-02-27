#include <iostream>

using namespace std;

int main()
{
    int m=0,n=1;
    while(n)
    {
        cin>>n;
        if(m<n)
            m=n;
    }
    if(m==0)
        cout<<"NU EXISTA";
    else
        cout<<m;
    return 0;
}
