#include <fstream>

using namespace std;

ifstream in ("smartphone.in");
ofstream out ("smartphone.out");

int main()
{
    long long c, n, nr, i, a = 0, b = 0;

    in >> c >> n;

        for (i = 1; i <= n; i++)
        {
            in >> nr;
            if (nr > a)
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
            out << a;
        }
        else
        {
            out << b;
        }

    return 0;
}
