#include <iostream>

using namespace std;

int main()
{
    int n, r;

    cin >> n;
    r = n;

    while (n)
    {
        if (n % 10 < r && n % 10 / 2 == 1)
        {
            r = n % 10;
        }
        n = n / 10;
    }
    if (r == n)
    {
        cout << "nu exista";
    }
    else
    {
        cout << r;
    }
    return 0;
}
