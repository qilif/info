#include <iostream>

using namespace std;

int main()
{
    int t1, t2, n, m, z, r;
    cin >> t1;
    cin >> t2;
    cin >> n;
    cin >> m;
    cin >> z;

    r = (n * t1 + m * t2) * z;

    cout << r << endl;
    return 0;
}
