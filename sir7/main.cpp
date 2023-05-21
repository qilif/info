#include <iostream>

using namespace std;

int main()
{
    int n = 0, k, p, a;

    cin >> p >> k;
    a = p;
    if(k % 2 == 0)
    {
        a = p + (k / 2) * 10 + (k / 2 - 1) * 20;
    }
    else
    {
        a = p + (k / 2) * 10 + (k / 2) * 20;

    }
    cout << a;
    return 0;
}
