#include <iostream>

using namespace std;

int main()
{
    char s;

    int a, b;

    cin >> a >> b;
    cin >> s;

    if (s == '+')
    {
        cout << a + b;
    }
    else if (s == '-' && a > b)
    {
        cout << a - b;
    }
    else if (b > a)
    {
        cout << b - a;
    }
    else if (s == '/' && a > b)
    {
        cout << a / b;
    }
    else if (b > a)
    {
        cout << b / a;
    }
    else if (s == '*')
    {
        cout << a * b;
    }

    return 0;
}
