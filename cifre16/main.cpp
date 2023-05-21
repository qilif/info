#include <iostream>

using namespace std;

int main()
{
    int n, m = 0, i = 0, a;

    cin >> n;

    while (n)
    {
        m = m + (n%10);
        n/=10;
        m = m * 10;
    }
    m/=10;
    a=m%10;

    while (m)
    {
        if (m%10< a)
        {
            i++;
        }
        m/=10;
    }

    cout << i;
    return 0;
}
