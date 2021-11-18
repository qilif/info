#include <fstream>

using namespace std;

ifstream f ("tablita.in");
ofstream g ("tablita.out");


int main()
{
    int n, i, s = 0, c;

    f >> n;

    for (i = 1; i <= n; i++)
    {
        c = s;
        s = s + i;
        if (n >= c && n <= s)
        {
            g << i;
            return 0;
        }
    }
}
