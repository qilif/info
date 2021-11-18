#include <fstream>

using namespace std;

ifstream f ("centrale.in");
ofstream g ("centrale.out");


int main()
{
    int n, m, i = 0, u;

    f >> n;
    m = n;

    while (m != 0)
    {
        f >> n;
        n = n / 10;
        u = n % 10;
        while (n > 9)
        {
            if (n % 10 != u)
            {
                break;
            }
            u = n % 10;
            n = n / 10;
        }
        if (n < 10)
        {
            i++;
        }
        m--;
    }

    g << i;
    return 0;
}

