#include <fstream>
#include <iostream>
using namespace std;

ifstream in ("ksir.in");
ofstream out ("ksir.out");

int main()
{
    long long n, p = 1, k = 0, i = 0, t = 0, ii;

    in >> n;

    while (p * p < n)
    {
        p++;
    }
    p--;
    k = p * p;
    i = n - k;
    if(i >= p + 1)
        out << p + 1;
    else
       	out << i;
    return 0;
}
