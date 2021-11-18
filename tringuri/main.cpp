#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cin >> a >> b >> c;

    if ((c < a + b) && (b < a + c) && (a < b + c))

    {
        cout << "da";
    }
    else
    {
        cout << "nu";
    }

    return 0;
}
