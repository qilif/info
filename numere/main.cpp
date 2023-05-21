#include <iostream>

using namespace std;

int main()
{
    int n, m, a;

    cin >> n;

    while (n != 0)
    {
        cin >> m;
        if (m % 2 == 0)
        {
            cout << m;
            a = m;
            return 0;

        }
        n--;
    }

    cout << "IMPOSIBIL";
    return 0;
}
