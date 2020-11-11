#include <iostream>

using namespace std;

int main()
{
    int d, r, m, s;

    cin >> s >> d >> r >> m;

    if (d > s && r > s && m > s)
    {
        cout << "nimic" << endl;
    }
    if (d > s && r > s && m <= s)
    {
        cout << "masina" << endl;
    }
    if (d > s && r <= s && m < s)
    {
        cout << "robot" << endl;
    }
    if (d <= s && r < s && m < s)
    {
        cout << "drona" << endl;
    }
    return 0;
}
