#include <iostream>

using namespace std;

int main()
{
    int n, m, i = 0, s = 0;

    cin >> n;

    while (n != 0)
    {
        cin >> m;
        while (m>9)
        {
            m = m / 10;
        }
        s = s + m;
        n--;
    }

    cout << s;
    return 0;
}
