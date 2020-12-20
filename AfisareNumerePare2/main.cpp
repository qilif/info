#include <iostream>

using namespace std;

int main()
{
    int n, a;

    cin >> n;

    a = 2;

    if(n % 2 == 0)
    {
        while (a <= n)
        {
            cout << a << " ";
            a = a + 2;
        }
    }
    else
    {
        while (a < n)
        {
            cout << a << " ";
            a = a + 2;
        }
    }
    return 0;
}
