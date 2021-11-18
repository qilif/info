#include <fstream>

using namespace std;

ifstream f ("n_suma.in");
ofstream g ("n_suma.out");

int main()
{
    int n, m, s;

    f >> n;
    s = 0;

    for (int i = 1; i <= n; i++)
    {
        f >> m;
        s += m;
    }

    g << s;

    return 0;
}
