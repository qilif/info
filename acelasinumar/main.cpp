#include <iostream>

using namespace std;

int main()
{
    int n, s, k, m;

    cin >> n >> k;
    s = 0;

    while (k != 0)
    {
        cin >> m;
        s = s + m;
        k--;
    }
    if (s == 0)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
