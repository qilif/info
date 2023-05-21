#include <iostream>

using namespace std;

int main()
{
    int n, i, s = 0;

    cin >> n;

    for (i = 1; n >= i; i++)
    {
        s = s + i * i * i;
    }

    cout << s;
    return 0;
}
