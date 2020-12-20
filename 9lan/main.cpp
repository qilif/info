#include <fstream>

using namespace std;

ifstream fin ("9lan.in");
ofstream fout ("9lan.out");

int main()
{
    int n, s;

    fin >> n;
    s = 1;

    while (n != 0)
    {
        s = (s * 9) % 10;
        n = n - 1;
    }
    fout << s << endl;
    return 0;
}
