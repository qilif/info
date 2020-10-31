#include <iostream>

using namespace std;

int main()
{
    int b, s, c, p;
    cin >> b;
    cin >> s;
    c = s / b;
    p = b - s % b;
    cout << c << " " << p << endl;
    return 0;
}
