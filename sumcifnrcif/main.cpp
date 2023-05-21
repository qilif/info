#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, i = 0;

    cin >> n;

    while (n)
    {
        s = s + n % 10;
        n = n / 10;
    }
    while (s)
    {
        i++;
        s = s / 10;
    }

    cout << i;
    return 0;
}
