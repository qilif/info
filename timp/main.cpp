#include <iostream>

using namespace std;

int main()
{
    int h, m, x;

    cin >> h >> m >> x;

    m+=x;

    h+=m / 60;

    m%=60;

    h%=24;

    cout << h << " " << m;

    return 0;
}
