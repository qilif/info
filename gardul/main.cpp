#include <fstream>

using namespace std;

ifstream in ("gardul.in");
ofstream out ("gardul.out");

int main()
{
    int n, g = 0, j = 0, h = 0, v = 0, r, a;

    in >> n >> r >> a;

    for (int i = 1; n >= i; i++)
    {
        if (i % r == 0 && i % a == 0)
        {
            v++;
        }
        else if (i % a == 0)
        {
            h++;
        }
        else if (i % r == 0)
        {
            j++;
        }
        else
        {
            g++;
        }

    }


    out << g << '\n' << j << '\n' << h << '\n' << v;
    return 0;
}
