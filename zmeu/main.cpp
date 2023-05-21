#include <fstream>

using namespace std;

ifstream in ("zmeu.in");
ofstream out ("zmeu.out");

int main()
{
    int n, m, s;

    in >> n >> m;

    if (n >= m * 2)
    {
        n = n - m * 2;
        s++;
    }

    out << s << '\n' << m * 2 - n;
    return 0;
}
