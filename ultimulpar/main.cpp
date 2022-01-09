#include <iostream>

using namespace std;

int main()
{
    int ma = 1, n, m;

    cin >> n;
    m = n;

    while (m)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            ma = n;
        }
        m--;
    }

    cout << ma;
    return 0;
}
