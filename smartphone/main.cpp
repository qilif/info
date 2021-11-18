#include <iostream>

using namespace std;

int main()
{
    long long c, n, nr, i, a = 0, b = 0;

    fin >> c >> n;

        for (i = 1; i <= n; i++)
        {
            fin >> nr;
            if (nr >= a)
            {
                b = a;
                a = nr;
            }
            else if (nr > b)
            {
                b = nr;
            }
        }
        if (c == 1)
        {
            fout << a;
        }
        else
        {
            fout << b;
        }

    return 0;
}
