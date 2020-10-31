#include <iostream>

using namespace std;

int main()
{
    int a, b, x;

    cin >> a >> b >> x;

    if (a <= x && b >= x)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
    return 0;
}
