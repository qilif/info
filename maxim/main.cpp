#include <iostream>

using namespace std;

int main()
{
    long long m = 0, n;
    n = 1;

    while (n != 0)
    {
        cin >> n;
        if (m < n)
        {
            m = n;
        }
    }

    cout << m;
    return 0;
}
