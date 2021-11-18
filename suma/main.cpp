#include <iostream>

using namespace std;

int main()
{
    int n, s;

    s = 0;

    while (n != 0)
    {
        cin >> n;
        s = s + n;
    }

    cout << s;
    return 0;
}
