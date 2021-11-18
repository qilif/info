#include <fstream>

using namespace std;

ifstream fin("numar4.in");
ofstream fout("numar4.out");

    int x, nr;

int main()
{


    fin >> x;

    while (x)
    {
        if (x % 2 == 0)
        {
            nr+=4;
        }
        else
        {
            nr+=5;

        }
        x/=10;
    }
    fout << nr;
    return 0;
}
