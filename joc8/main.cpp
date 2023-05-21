#include <fstream>

using namespace std;

ifstream in ("joc8.in");
ofstream out ("joc8.out");

int main()
{
    int n, m, i = 0, a = -2, b, c = 0;

    in >> n;

    while (n)
    {
        in >> m;
        b=m;
        if (m < 10)
        {
            i++;
            m = 0;
            b = 0;
        }
        while (b)
        {
            a++;
            b = b / 10;
        }
        while (m>=100)
        {
                if (m/10%10>m%10&&m/100%10<m/10%10)
                {
                    c++;
                }
                else if (m/10%10<m%10&&m/100%10>m/10%10)
                {
                    c++;
                }
            m = m / 10;
        }
        if (c == a && a % 2 == 1)
        {
            i++;
        }
        c = 0;
        a  = -2;
        n--;
    }

    out << i;
    return 0;
}
