#include <iostream>

using namespace std;

int main()
{
    int n, s, a, i;

    cin >> n;

    for (i = 0; i <= n; i++)
    {
        cin >> s;
        a+=s;
    }

    cout << a << endl;
    return 0;
}
