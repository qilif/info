#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n < 10)
    {
        cout << "1";
    }
    else if (n < 100 && n > 9)
    {
        cout << "2";
    }
    else if (n < 1000 && n > 99)
    {
        cout << "3";
    }

    return 0;
}
