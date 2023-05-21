#include <fstream>

using namespace std;

ifstream in ("multiple.in");
ofstream out ("multiple.out");

int main()
{
    int n = 0, k , t;

    in >> t;

    while (t != 0)
    {
        in >> n >> k;
        n++;
        while (n % k != 0)
        {
            n++;
        }
        out << n << endl;
        t--;
    }

    return 0;
}
