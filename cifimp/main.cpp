#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, i;

    cin >> n;

    c = n % 10;
    b = (n / 10) % 10;
    a = n / 100;

    i = (a % 2) + (b % 2) + (c % 2);

    cout << i << endl;
    return 0;
}
