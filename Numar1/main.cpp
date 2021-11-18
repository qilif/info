#include <iostream>

using namespace std;

int main()
{
    long long n, c1, c3, p;
    cin >> n;
    c3 = n % 10;
    c1 = n / 100;
    c1*=10;
    c1+=c3;
    p = c1 * c1;

    cout << p;
    return 0;
}
