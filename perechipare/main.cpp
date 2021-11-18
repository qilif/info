#include <iostream>

using namespace std;

int main()
{
    long long r, x;

    cin >> x >> r;

    if (x % 2 == 0 && r % 2 == 0)
    {
        cout << ((r-x)/2+1)*((r-x)/2+1);
    }
    else if (x % 2 == 0 && r % 2 == 1)
    {
        cout << ((r-x+1)/2)*((r-x+1)/2);
    }
    else if (x % 2 == 1 && r % 2 == 0)
    {
        cout << ((r-x+1)/2)*((r-x+1)/2);
    }
    else if (x % 2 == 1 && r % 2 == 1)
    {
        cout << ((r-x)/2)*((r-x)/2);
    }

    return 0;
}
