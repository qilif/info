#include <fstream>

using namespace std;

ifstream fin ("ograda.in");
ofstream fout ("ograda.out");

int i;
int par(int n){
    int cnt=0;

for (i = 1; i <= n; i++)
{
    if (n % i == 0 && i % 2 == 0)
    {
         cnt++;
    }}

return cnt;
}int impar(int n){
int cnt=0;

for (i = 1; i <= n; i++)
{
    if (n % i == 0 && i % 2 == 1)
    {
         cnt++;
    }
}

    return cnt;
}
int main()
{
    long long c, p, g, v, x;

    fin >> x >> c >> p;
    g = (4 * c - p) / 2;
    v = (p - 2 * c) / 2;

    if (x == 1)
    {
        fout << g << " " << v;
    }
    else if (x == 2)
    {
        fout << impar (c) << " " << par (p);
    }

    return 0;
}
