#include <iostream>

using namespace std;

int main()
{
    int s, c, n;

    cin >> s >> c >> n;

    if (s % c == 0 && s % n == 0)
    {
        cout << "CN" << endl;
    }
    else if (s % c == 0)
    {
        cout << "C" << endl;
    }
    else if (s % n == 0)
    {
        cout << "N" << endl;
    }
    else
    {
        cout << "nimic" << endl;
    }
    return 0;
}
