#include <iostream>

using namespace std;

int main()
{
    long long n, p = 1;

    cin >> n;

    for (int i = 1; i <= n * 2; i++)
    {
        if (i % 2 == 1)
        {
            p = p * i;
        }
    }

    cout << p;
    return 0;
}
