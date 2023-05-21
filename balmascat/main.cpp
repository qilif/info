#include <fstream>

using namespace std;

ifstream in ("balmascat.in");
ofstream out ("balmascat.out");

int main()
{
    int n, p, c, a = 0, b, d, h = 0;
    in >> n >> p;
    d=p*2;
    while (n >= p)
    {
        if (n % p == 0)
        {
            a++;
        }
        n--;
    }
    b = a % 10;
    if (b == 9)
    {
        while (d != 0)
        {
            h = h * 10 + b - 1;
            d--;
            h = h * 10 + b;
            d--;
        }
    }
    else
    {
        while (d)
        {
            h = h * 10 + b + 1;
            d--;
            h = h * 10 + b;
            d--;
        }
    }
    h = h / 10;
    out << h;
    return 0;
}

