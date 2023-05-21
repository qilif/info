#include <fstream>

using namespace std;

ifstream in ("catsfood.in");
ofstream out ("catsfood.out");

int main()
{
    int a, b, c, n, m, k;

    in >> a >> b >> c >> n;

    while (n != 0)
    {
        in >> m;
        if (m % 10 == a || m / 10 % 10 == a || m / 100 == a || m % 10 == b || m / 10 % 10 == b || m / 100 == b || m % 10 == c || m / 10 % 10 == c || m / 100 == c)
        {
            o++;
        }
        if ((m % 10 == a || m / 10 % 10 == a || m / 100 == a) && (m % 10 == b || m / 10 % 10 == b || m / 100 == b) && (m % 10 == c || m / 10 % 10 == c || m / 100 == c))
        {
            k = 1;
        }
    }
    if (k == 1)
    {
        out << o << " DA";
    }
    else
    {
        out << o << " NU";
    }

    return 0;
}
