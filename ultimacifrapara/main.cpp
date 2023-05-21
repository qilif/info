#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n)
    {
        if (n % 10 % 2 == 0)
        {
            cout << n % 10;
            return 0;
        }
        n = n / 10;
    }

    cout << "-1";
    return 0;
}
