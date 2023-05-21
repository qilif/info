#include <iostream>

using namespace std;

int main()
{
    int n, m, i, z, h = 1;

    cin >> m >> n >> z;

    for (i = m;i <= n;i++)
    {
        if (i % 10 == z % 10)
        {
            cout << i << " ";
        }
        if (h % 3 == 0)
        {
            cout << endl;
        }
        h = h + 1;
    }

    return 0;
}
