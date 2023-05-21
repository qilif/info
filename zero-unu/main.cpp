#include <iostream>

using namespace std;

int main()
{
    long long n, i = 0, s = 0;

    cin >> n;

    while (n)
    {
        if (n % 10 != 0 && n % 10 != 1)
        {
            cout << "nu";
            return 0;
        }
        i++;
        s = s + n % 10;
        n = n / 10;
    }

    if (s == i || s == 0)
    {
        cout << "nu";
        return 0;
    }
    cout << "da";
    return 0;
}
