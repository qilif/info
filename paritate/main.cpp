#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " este par" << endl;
    }
    else
    {
        cout << n << " este impar" << endl;
    }

    return 0;
}
