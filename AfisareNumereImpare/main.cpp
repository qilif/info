#include <iostream>

using namespace std;

int main()
{
    int n, a;

    cin >> n;

    a = n * 2 - 1;

    while (n != 0)
    {
        cout << a << " ";
        n = n - 1;
        a = a - 2;
    }
    return 0;
}
