#include <fstream>

using namespace std;

ifstream fin ("bacterie.in");
ofstream fout ("bacterie.out");

int main()
{
    long long n, m, sg, a;

    fin >> m >> n;
    a = m * n;

    if (m > n)
    {
        sg = n * (n + 1) / 2;
    }
    else
    {
        sg = m * (m + 1) / 2;
    }
    fout << a - sg << endl;
    return 0;
}
