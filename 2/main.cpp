#include <iostream>
using namespace std;

int main()
{
    int n, a, k = 0, h = 0, c, r, z, p = 1;

    cin >> n >> a;
    while (a)
    {
        k = k + a % 10;
        a = a / 10;
    }
    p = p * k;
    for (z  = 2; z <= n; z++)
    {
        cin >> a;
        while (a)
        {
            h = h + a % 10;
            a = a/ 10;
        }
        p = p * h;

        while (h)
        {
            c = k % h;
            k=h;
            h=c;
        }
        r = p / k;

    }
    cout << r;

    return 0;
}
