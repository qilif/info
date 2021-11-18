#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;

    cin >> n;
    a = n % 10;
    b = (n / 10) % 10;
    c = n / 100;


    cout << a * a + b * b + c * c;
    return 0;
}
