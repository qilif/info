#include <iostream>

using namespace std;

int main()
{
    int n, a;

    cin >> n;

    a = 2;

    while (n != 0)
    {
        cout << a << " ";
        a = a + 2;
        n = n - 1;
    }
    return 0;
}
