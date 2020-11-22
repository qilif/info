#include <iostream>

using namespace std;

int main()
{
    int n, a, m;

    cin >> n;

    m = n;
    a = 1;

    while (n > 0)
    {
        cout << a << " ";
        a = a + 1;
        n = n - 1;
    }

    cout << endl;

    while (m > 0)
    {
        cout << m << " ";
        m = m - 1;
    }
    return 0;
}
