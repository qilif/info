#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b;
    float s = 0;

    cin >> n;
    a = n;

    while (a != 0)
    {
        cin >> m;
        if (m % 2 == 0)
        {
            s = s + m;
            b++;
        }
        a--;
    }

    cout << s / b;
    return 0;
}
