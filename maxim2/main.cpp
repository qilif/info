#include <fstream>

using namespace std;

ifstream fin ("maxim2.in");
ofstream fout ("maxim2.out");


int main()
{
    long long n, m, macs;

    fin >> n >> m;

    if (n > m)
    {
        macs = n;
    }
    else
    {
        macs = m;
    }
    fout << macs << endl;
    return 0;
}
