#include <iostream>

using namespace std;

int main()
{
    int n,m,a;
    char c1,c2,c3,c4,c5;
    cin>>n;
    while(n--)
    {
        cin>>c1>>c2>>c3>>c4>>c5;
        a=0;
        if(c1=='A')
            a++;
        if(c2=='A')
            a++;
        if(c3=='A')
            a++;
        if(c4=='A')
            a++;
        if(c5=='A')
            a++;
        if(a>2)
            cout<<'A'<<'\n';
        else
            cout<<'B'<<'\n';
    }
    return 0;
}
