#include <iostream>

using namespace std;

int main()
{
    int n, s, m;

    s = 0;

    while (n != m)
    {
        m = n;
        cin >> n;
        s = s + n;
    }

    cout << s;

    return 0;
}
