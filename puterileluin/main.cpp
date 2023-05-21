#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n, p;

    cin >> n >> p;
    c = n;

    cout << "1";
    while (c <= p)
    {
        cout << " " << c;
        c = c * n;
    }
    return 0;
}
