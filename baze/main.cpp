#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,b,d,x=1,y=1,r=0, i=1;
    int v[10001];

    cin>>n>>b>>d;

    if (n == 0)
    {
        cout << 0;
        return 1;
    }

    while(n)
    {
        r+=(n%10)*x;
        x*=b;
        n/=10;
    }

    while(r) {
        v[i] = r%d;
        i++;
        r/=d;
    }
    i--;
    while(i>0)
    {
        cout << v[i];
        i--;
    }
    return 0;
}
