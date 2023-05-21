#include <fstream>

using namespace std;

ifstream in ("cod24.in");
ofstream out ("cod24.out");

int main()
{
    int n, c1, c2, c3, c4;

    cin >> n;
    c1 = n % 10;
    c2 = n / 10 % 10;
    c3 = n / 100 % 10;
    c4 = n / 1000;
    if (c1 != 9)
    {
        c1++;
    }
    if (c2 != 9)
    {
        c2++;
    }
    if (c3 != 9)
    {
        c3++;
    }
    if (c4 != 9)
    {
        c4++;
    }
    cout << c4 << c3 << c1 << c2;
    return 0;
}
