#include <fstream>

using namespace std;

ifstream fin ("2lan.in");
ofstream fout ("2lan.out");

int main()
{
    int n, s;

    fin >> n;
    s = 1;

    while (n != 0)
    {
        s = (s * 2) % 10;
        n = n - 1;
    }
    fout << s << endl;
    return 0;
}
