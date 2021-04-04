#include <iostream>

using namespace std;

int main()
{
    long long a, p, i;

    cin >> a;

    p = 1;

    for (i = 1; i <= 16; i++)
    {
        p = p * a;
    }

    cout << p << endl;
    return 0;
}
