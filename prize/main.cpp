#include <fstream>

using namespace std;

ifstream in ("prize.in");
ofstream out ("prize.out");

int main()
{
    long long n, a, s = 0;

    in >> n;

    while (n != 0)
    {
        in >> a;
        s = s + a;
        n--;
    }

    out << s - (n - 1);
    return 0;
}
