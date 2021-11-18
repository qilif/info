#include <fstream>
#include <iostream>
using namespace std;

ifstream x ("alo.in");
ofstream y ("alo.out");

int main()
{
    int n, e, nr, d, s;

    cin >> e >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> nr >> d;
        if (nr % 10 == 9)
        {
            e = e;
        }
        else if (nr % 10 == 5 && nr / 10000 == 1)
        {
            e = e - (2 * d);
        }
        else if (nr % 10 == 5 && nr / 10000 == 2)
        {
            e = e + (1 * d);
        }
    }

    cout << e;

    return 0;
}
