#include <iostream>

using namespace std;

int main()
{
    float n, t, v, d = 0, vm, x = 0, i;

    cin >> n;

    for (i = 1;  i <= n; i++)
    {
        cin >> t >> v;
        x+=t;
        d+=t * v;
    }
    vm = d / x;

    cout << d << " " << vm << endl;
    return 0;
}
