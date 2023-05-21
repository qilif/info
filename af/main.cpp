#include <fstream>

using namespace std;

ifstream in ("af.in");
ofstream out ("af.out");

int main()
{
    long long a, b, c, n;
    char s, e;

    in >> n;
    while (n)
    {
        in >> a >> s >> b >> e >> c;
        if (s == '+')
        {
            if (a + b == c)
            {
                out << "Adevarat" << '\n';
            }
            else
            {
                out << "Fals" << '\n';
            }

        }
        if (s == '-')
        {
            if (a - b == c)
            {
                out << "Adevarat" << '\n';
            }
            else
            {
                out << "Fals" << '\n';
            }

        }
        if (s == 'x')
        {
            if (a * b == c)
            {
                out << "Adevarat" << '\n';
            }
            else
            {
                out << "Fals" << '\n';
            }
        }
        if (s == ':')
        {
            if (b && a / b == c)
            {
                out << "Adevarat" << '\n';
            }
            else
            {
                out << "Fals" << '\n';
            }
        }
        n = n - 1;
    }


    return 0;
}
