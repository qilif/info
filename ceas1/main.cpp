#include <fstream>

using namespace std;
ifstream in ("ceas.in");
ofstream out ("ceas.out");

int main()
{
    long long n , c, x, m, i = 0, n1;

    in >> c >> x >> n;
    n1=n;

    if (c == 1)
    {
        while (n)
        {
            in >> m;
            if(m==0 && x==0)
                i++;
            while (m)
            {
                if (m % 10 ==x)
                {
                    i++;
                }
                m = m / 10;
            }
            n--;
        }
        out << i;
    }
    else
    {
        while (n)
        {
            in >> m;
            if(m==0)
                i++;
            while (m)
            {
                if (m % 100 <= 12 && m%100 >= 10)
                {
                    i++;
                    m=m/100;
                }
                else
                {
                    i++;
                    m=m/10;
                }
            }
            n--;
        }
        i-=n1;
        out << i;
    }

    return 0;
}
