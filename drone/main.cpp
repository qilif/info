#include <fstream>

using namespace std;

ifstream in ("drone.in");
ofstream out ("drone.out");

int main()
{
    int n, m, i = 0, p = 1, w = 0;

    in >> n;

    while (n)
    {
        in >> m;
        if (m==0)
        {
            i++;
        }
        while (m)
        {
            w=w *10+m%10;
            p*=(m%10);
            m/=10;
        }
        if ((w%10)<7 && p%2==0)
        {
            i++;
        }
        p=1;
        w=0;
        n--;
    }

    out << i;
    return 0;
}
