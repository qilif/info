#include <iostream>

using namespace std;

int main()
{
    int n, p;

    p = 0;

    cin >> n;

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            p = p + 1;
        }
        cin >> n;
    }
    if (p == 0)
    {
        cout << "NU EXISTA" << endl;
    }
    else
    {
        cout << p << endl;
    }
    return 0;
}
