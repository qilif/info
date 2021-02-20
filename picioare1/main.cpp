#include <iostream>

using namespace std;

int main()
{
    long long c, p, o, g;

    cin >> c >> p;

    g = (4 * c - p) / 2;

    o = c - g;

    cout << g << " " << o << endl;
    return 0;
}
