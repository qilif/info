#include <fstream>

using namespace std;

ifstream in ("echipe.in");
ofstream out ("echipe.out");

int main()
{
    int n, m, i=1;

    in >> n;

    while (n)
    {
        n-=i;
        i++;
        if (n<i)
        {
            break;
        }
    }

    out << n;
    return 0;
}
