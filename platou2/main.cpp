#include <iostream>

using namespace std;

int main()
{
    int n, m, mini= 1000000, maxi = 0, t;

    cin >> t;
    while (t)
    {
        cin >> m >> n;
        mini= n;
        maxi = n;
        m--;
        while (m != 0)
        {
            cin >> n;
            if (mini > n)
            {
                mini = n;
            }
            if (maxi < n)
            {
                maxi = n;
            }
            m--;
        }
        cout << maxi - mini << '\n';
        t--;
    }

    return 0;
}
