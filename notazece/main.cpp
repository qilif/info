#include <iostream>

using namespace std;

int main()
{
    long long i, a, b, c, d, cmmdc, cmmmc;
    cin >> a >> b;
    c=a;
    d=b;
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    cmmdc=a;
    cmmmc=c*d/cmmdc;
    i=cmmmc/c;
    i+=cmmmc/d;
    i-=2;
    cout << i;
    return 0;
}
