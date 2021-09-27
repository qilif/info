#include <fstream>

using namespace std;

ifstream fin ("sum.in");
ofstream fout ("sum.out");

int main()
{
    long long a, b, s;

    fin >> a >> b;

    s = a + b;

    fout << s << endl;
    return 0;
}
