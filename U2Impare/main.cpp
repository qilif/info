#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n % 2 == 0)
    {
        cout << n - 3 << " " << n - 1 << endl;
    }
    else
    {
        cout << n - 4 << " " << n - 2 << endl;
    }
    return 0;
}
