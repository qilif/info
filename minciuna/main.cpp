#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    if (x % 2 == 0 && y % 2 == 1)
    {
        cout << "Andrei e mai responsabil" << endl;
    }
    else
    {
        cout << "minciuna" << endl;
    }
    return 0;
}
