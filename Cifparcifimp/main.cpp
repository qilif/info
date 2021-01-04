#include <iostream>

using namespace std;

int main()
{
    int n, m, i, c, cp, ci;

    cin >> n;

    cp = 0;
    ci = 0;

    for (i = 1; i <= n; i++)
    {
        cin >> m;
        if (m == 0)
        {
            cp++;
        }
        while (m != 0)
        {
            c = m % 10;
            m = m / 10;

            if (c % 2 == 0)
            {
                cp++;
            }
            else
            {
                ci++;
            }
        }
    }


    cout << cp << " " << ci << endl;
    return 0;
}
