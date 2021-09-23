#include <iostream>

using namespace std;

int main()
{
    long long i, n, s;

    cin >> n;
    s = 0;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            s = s + i * (i + 1);
        }
        else if (i % 2 == 0)
        {
            s = s - i * (i + 1);
        }
    }

    cout << "Rezultatul este " << s;
    return 0;
}
