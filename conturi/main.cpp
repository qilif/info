#include <fstream>

using namespace std;

ifstream in ("conturi.in");
ofstream out ("conturi.out");

int main()
{
    long long n, x, m, ma = 0;

    in >> n >> x;

    while (n != 0)
    {
        in >> m;
        if ((m / 10000) % 10 == 1 && m / 100000 == x)
        {
            if (m % 10000 > ma)
            {
                ma = m % 10000;
            }
        }
        n--;
    }

    out << ma;
    return 0;
}
