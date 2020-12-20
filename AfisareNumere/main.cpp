#include <iostream>

using namespace std;

int main()
{
    int n, a;

    cin >> n;

    a = 1;

    while (n > 0)
    {
        cout << a << " ";
        a = a + 1;
        n = n - 1;
    }
    return 0;
}
