#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n > 0)
    {
        cout << "pozitiv" << endl;
    }
    else if (n < 0)
    {
        cout << "negativ" << endl;
    }
    else
    {
        cout << "nul" << endl;
    }
    return 0;
}
