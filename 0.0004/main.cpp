#include <iostream>

using namespace std;

int main()
{
    int n, m, i;

    cin >> m >> n;

    cout << m << " ";

    for (i = 2;m <= n; i++)
    {
        if (m % 2 == 0)
        {
            m=m + 2;
        }
        else
        {
            m = m + 3;
        }
        if (m >= n)
        {
            break;
        }
        cout << m << " ";
        if (i % 5 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}
