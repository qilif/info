#include <fstream>

using namespace std;

ifstream cinn ("numere3.in");
ofstream coutt ("numere3.out");

int main()
{
    int a, b, c, p, s = 0, aa, bb, cc;

    cinn >> p >> a >> b >> c;
    aa = a;
    bb = b;
    cc = c;j

    if (p == 1)
    {
        while (a)
        {
            s = s + a % 10;
            a = a / 10;
        }
        while (bx\x\
        {
            s = s + b % 10;
            b = b / 10;
        }
        while (c)
        {
            s = s + c % 10;
            c = c / 10;
        }

        coutt << s;
    }
    else
    {

    }

    return 0;
}
