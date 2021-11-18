#include <fstream>

using namespace std;

ifstream fin ("planta.in");
ofstream fout ("planta.out");

int main()
{
    long long d, a, b, n, h;

    fin >> d >> a >> b >> n;
    h=d;

    if (n % 2 == 1)
    {
        h=h+(n / 2 + 1) * a;
        h=h - (n / 2) * b;
    }
    else
    {
        h=h+(n / 2) * a;
        h=h - (n / 2) * b;
    }
    fout << h;
    return 0;
}
