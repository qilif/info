#include <iostream>

using namespace std;

int main()
{
    int p, n, s, c, e1, e;

    cin >> p >> n >> s >> c;

    if (p = 1)
    {
        while (n)
        {
            cin >> e1;
            e = e1;
            while (e1)
            {
                if (e1 % 10 == 3)
                {
                    cout << e;
                    break;
                }
                e1 = e1 / 10;
            }
        }
        n--;
    }

    return 0;
}
