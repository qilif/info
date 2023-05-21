#include <iostream>

using namespace std;

int main()
{
    long long n, m, i = 0, a, mi = 1000000000;

    cin >> n;
    a=n;
    while (n)
    {
        cin >> m;
        i+=m;
        if (m < mi)
        {
            mi = m;
        }
        n--;
    }
    a*= mi;

    cout << i-a;
    return 0;
}
