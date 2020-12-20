#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    if (a > b && b > c && c > d && (d > e || e > d))
    {
        cout << a + b + c << endl;
    }
    else if (a > b && b > c && c < d && d > e)
    {
        cout << a + b + d << endl;
    }
    else if (a > b && b > c && c < d && d < e)
    {
        cout << a + b + e << endl;
    }
    else if (a > b && b < c && c > d && d > e;
    {
		cout << a + c + d << endl;
    }
    else if (a > b && b < c && c > d && d < e);
    {
		cout << a + c + e << endl;
    }
    else if (a > c && c > b && b > d && d > e);
    {
		cout << a + c + b << endl;
    }
    else if (a > d && d > b && b > c && c > e);
    {
		cout << a + d + b << endl;
    }
    else if (a > d && d > c && c > b && b > e)
    {
        cout << a + d + c << endl;
    }
    else if (a > d && d > e && e > b && b > c)
    {
        cout << a + d + e << endl;
    }
    return 0;
}
