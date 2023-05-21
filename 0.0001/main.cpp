#include <iostream>

using namespace std;

int main()
{
    int n, i, s = 0;

    cin >> n;

    for (i = 3; n >= i; i++)
    {
        s = s + i;
    }

    cout << s;
    return 0;
}
