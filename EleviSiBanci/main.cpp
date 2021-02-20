#include <iostream>

using namespace std;

int main()
{
    int n, m, e, b;

    cin >> n >> m >> e >> b;

    int x,y;
    y=e+m*b;
    y=y/(m-n);
    x=n*y+e;
    cout<<x<<endl<<y;
    return 0;
}
