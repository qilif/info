#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    x=1;
    y=n-1;
    while(x<=y)
    {
        cout<<x<<' '<<y<<'\n';
        x++;
        y--;
    }
    return 0;
}
